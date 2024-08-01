import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
from matplotlib import cm
import time

def levy_function(x):
    d = len(x)
    w = 1 + (x-1)/4
    
    term1 = np.sin(np.pi*w[0])**2
    term2 = np.sum((w[:-1]-1)**2*(1+10*np.sin(np.pi*w[:-1]+1)**2))
    term3 = (w[d-1]-1)**2*(1+np.sin(2*np.pi*w[d-1]))

    return term1 + term2 + term3

#setando a função fitness
fitness_function=levy_function

# Função para inicializar a população
def initialize_population(pop_size, num_variables, min_val, max_val):
    return np.random.uniform(min_val, max_val, (pop_size, num_variables))

# Função de seleção de pais (Torneio)
def select_parents(population, fitness, tournament_size):
    selected_parents = []
    pop_size = population.shape[0]
    for _ in range(pop_size):
        tournament_indices = np.random.choice(range(pop_size), size=tournament_size, replace=False)
        tournament_fitness = fitness[tournament_indices]
        selected_parent_idx = tournament_indices[np.argmin(tournament_fitness)]
        selected_parents.append(population[selected_parent_idx])
    return np.array(selected_parents)

# Função de crossover (Ponto Único)
def crossover(parents, crossover_rate):
    num_parents, num_variables = parents.shape
    children = np.empty((num_parents, num_variables))
    for i in range(0, num_parents, 2):
        if np.random.rand() < crossover_rate:
            crossover_point = np.random.randint(1, num_variables)
            children[i] = np.concatenate((parents[i][:crossover_point], parents[i+1][crossover_point:]))
            children[i+1] = np.concatenate((parents[i+1][:crossover_point], parents[i][crossover_point:]))
        else:
            children[i] = parents[i]
            children[i+1] = parents[i+1]
    return children

# Função de mutação (Uniforme)
def mutate(children, mutation_rate, min_val, max_val):
    mutated_children = np.copy(children)
    for child in mutated_children:
        for i in range(len(child)):
            if np.random.rand() < mutation_rate:
                child[i] = np.random.uniform(min_val[i], max_val[i])
    return mutated_children

# Função para avaliar o fitness de cada indivíduo na população
def evaluate_population(population):
    return np.apply_along_axis(fitness_function, 1, population)

# Função para encontrar o melhor indivíduo na população
def find_best_individual(population, fitness):
    best_idx = np.argmin(fitness)
    return population[best_idx], fitness[best_idx]

# Algoritmo Genético
def genetic_algorithm(num_generations, pop_size, num_variables, min_val, max_val, crossover_rate, mutation_rate, tournament_size):
    t = time.time()

    population = initialize_population(pop_size, num_variables, min_val, max_val)
    best_fitness = []
    best_solutions = []
    all_solutions=[]
    all_fitness=[]
    for _ in range(num_generations):
        fitness = evaluate_population(population)
        # fitness = evaluate_population_with_constraints(population,constraint_func)
        best_individual, best_fitness_value = find_best_individual(population, fitness)
        best_fitness.append(best_fitness_value)
        best_solutions.append(best_individual)
        for i in range(pop_size):
            all_solutions.append(population[i])
            all_fitness.append(fitness[i])
        parents = select_parents(population, fitness, tournament_size)
        children = crossover(parents, crossover_rate)
        mutated_children = mutate(children, mutation_rate, min_val, max_val)
        population = mutated_children


    t = time.time() - t
    return best_fitness, best_solutions, all_fitness, all_solutions, t, all_solutions,np.std(all_fitness)

def save3dChart(x,y,i,s):
    x1 = np.array([coord[0] for coord in x])
    x2 = np.array([coord[1] for coord in x])
    
    fig = plt.figure()
    ax = fig.add_subplot(111, projection='3d')
    
    # Usar um colormap para colorir os pontos de acordo com seus valores em y
    sc = ax.scatter(x1, x2, y, c=y, cmap=cm.viridis, marker='o')

    ax.set_xlabel('Eixo X1')
    ax.set_ylabel('Eixo X2')
    ax.set_zlabel('Eixo Y')

    # Adicionar uma barra de cores para mostrar a escala de cores
    cbar = plt.colorbar(sc, ax=ax)
    cbar.set_label('Altura (Eixo Y)')

    plt.savefig('genetic_' + str(i) + '.png', dpi = 500)
    if s:
        plt.show()
    plt.close()

def convergeChart(y,i,s):
    np.sort(y)
    plt.plot(y, label='Melhor Fitness')
    plt.xlabel('Geração')
    plt.ylabel('Fitness')
    plt.title('Convergência do Algoritmo Genético')
    plt.legend()
    plt.grid(True)
    plt.savefig('convergencia_genetic_' + str(i) + '.png', dpi = 500)
    if s:
        plt.show()
    plt.close()

def getAllCharts(y,i,s):
    colors = ['#ff0000','#ffe100','#26ff00','#26ff00','#0056ff','#6900ff','#f000ff','#ff8700','#5a5a5a','#e3be00']
    plt.title('Convergência')
    plt.xlabel('Iterações')
    plt.ylabel('Melhor valor')

    c = 0
    for v in y:
        plt.scatter(range(len(v)), v,color=colors[c%10])
        c+=1
    plt.grid(True)
    plt.savefig('chartg' + str(i) +'all.png')
    if s:
        plt.show()
    plt.close()

# Parâmetros do algoritmo genético
num_generations = 100
pop_size = 50
num_variables = 2
min_val = [-10,-10]
max_val = [10,10]
crossover_rate = 0.8
mutation_rate = 0.1
tournament_size = 5
k = 3
num = 10
precision = 6

for i in range(1,k+1):
    bestY = np.inf
    bestX = None
    allConvergenceY = []
    melhorX = None
    melhorY = None
    convFit = None
    medData = [0,0,0]
    with open('resgenetic_'+str(num_generations)+'.txt','w') as ans:
        ans.write('N & Seed & Melhor & Pior & Media & Mediana & Desvio Padrao Tempo(s)\n')
        for j in range(1,num+1):
            seed = np.random.randint(1,10**5)
            np.random.seed(seed)
            # Execução do algoritmo genético
            best_fitness, best_solutions, all_fitness, all_solutions, t, all_solutions,desvio = genetic_algorithm(num_generations, pop_size, num_variables, min_val, max_val, crossover_rate, mutation_rate, tournament_size)
            
            if bestY > best_fitness[len(best_fitness)-1]:
                bestY = best_fitness[len(best_fitness)-1]
                melhorX = all_solutions
                melhorY = all_fitness
                convFit = best_fitness
            
            for x in all_solutions:
                if levy_function(x) == bestY:
                    bestX = x
                    break
            
            ans.write(str(j) + " & ")
            ans.write(str(seed) + " & ")
            ans.write(str(bestY) + " & ")
            ans.write(str(desvio) + " & ")
            ans.write(str(t) + "\\\\ \n")

            medData[0]+=bestY
            medData[1]+=desvio
            medData[2]+=t

            allConvergenceY.append(best_fitness)

        ans.write('\hline\n')
        ans.write('$\Delta$ & - &' +  str(medData[0]/num) + ' & '+ str(medData[1]/num) + ' & ' +str(medData[2]/num) + '\\\\ \hline\n')

        ans.write('f(x) = ' + str(bestY) + '\n')
        ans.write("x = "+str(x) + "\n")

        if num_variables == 2:
                save3dChart(melhorX,melhorY,num_generations,False)
        convergeChart(convFit,num_generations,False)

        getAllCharts(allConvergenceY,str(num_generations),True)
    num_generations*=10