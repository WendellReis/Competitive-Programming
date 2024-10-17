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

def save3dChart(x,y,i,j,s):
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

    plt.savefig('genetic_' + str(i) + '_' + str(j) + '.png', dpi = 500)
    if s:
        plt.show()
    plt.close()

def convergeChart(y,i,j,s):
    np.sort(y)
    plt.plot(y, label='Melhor Fitness')
    plt.xlabel('Geração')
    plt.ylabel('Fitness')
    plt.title('Convergência do Algoritmo Genético')
    plt.legend()
    plt.grid(True)
    plt.savefig('convergencia_genetic_' + str(i) + '_' + str(j) + '.png', dpi = 500)
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
    plt.savefig('chart' + str(i) +'all.png')
    if s:
        plt.show()
    plt.close()

#Parametros
d = 2
lim_inf = -10
lim_sup = 10
precision = 7

#Definicao da funcao fitness
def f(x):
    d = len(x)
    w = 1 + (x-1)/4
    
    term1 = np.sin(np.pi*w[0])**2
    term2 = np.sum((w[:-1]-1)**2*(1+10*np.sin(np.pi*w[:-1]+1)**2))
    term3 = (w[d-1]-1)**2*(1+np.sin(2*np.pi*w[d-1]))

    return term1 + term2 + term3

#Funcao geradora de entrada aleatória
def getRandomInput():
    return np.random.uniform(lim_inf,lim_sup,size=d)

def randomAlgorithm(rate):
        x = []
        y = []
        bestY = np.inf
        worstY = -np.inf
        convergenceY = []
        t = time.time()
        seed = np.random.randint(1,10**5)
        np.random.seed(seed)
        for i in range(0,rate):
            x.append(getRandomInput())
            y.append(f(x[i]))

            if y[i] < bestY:
                bestY = y[i]
                bestX = x[i]
            if y[i] > worstY:
                worstY = y[i]

            convergenceY.append(bestY)

        
        avg = np.sum(y)/len(y)
        t = time.time() - t

        return x,y,bestX,bestY,convergenceY,t,np.std(y),seed

def save3dChartRandom(x,y,k,rate):
    x1 = np.array([coord[0] for coord in x])
    x2 = np.array([coord[1] for coord in x])
    
    fig = plt.figure()
    ax = fig.add_subplot(111, projection='3d')
    
    # Usar um colormap para colorir os pontos de acordo com seus valores em y
    sc = ax.scatter(x1, x2, y, c=y, cmap=cm.inferno, marker='o')

    ax.set_xlabel('Eixo X1')
    ax.set_ylabel('Eixo X2')
    ax.set_zlabel('Eixo Y')

    # Adicionar grades para melhor visualização
    ax.grid(True)

    # Ajustar a visão inicial para uma melhor perspectiva
    ax.view_init(elev=30, azim=45)

    # Adicionar uma barra de cores para mostrar a escala de cores
    cbar = plt.colorbar(sc, ax=ax)
    cbar.set_label('Altura (Eixo Y)')

    plt.savefig('fig_random_' + str(rate) + '_' + str(k) + 'g.png', dpi = 500)
    #plt.show()
    plt.close()

def saveConvergenceChart(y,k,rate):
    plt.title('Gráfico de Convergência')
    plt.xlabel('Iterações')
    plt.ylabel('Melhor valor')
    plt.plot(range(1, len(y) + 1), y, marker='o', linestyle='-', color='b')
    plt.grid(True)
    plt.savefig('convergence_' + str(rate) + '_' + str(k) + 'c.png', dpi = 500)
    plt.close()

def randomAlgorithmTest(k,rate):
    with open('random_'+str(rate)+'_'+str(k)+'.txt','w') as ans:
        ansX = []
        ansY = np.inf
        ans.write('N & Melhor & Pior & Media & Mediana & Desvio Padrao & Tempo(s)\n')
        allConvergeY = []

        for i in range(1,k+1):
            x,y,bestX,bestY,worstY,avg,convergenceY,t,mediana,desvio = randomAlgorithm(rate)

            if bestY < ansY:
                ansY = bestY
                ansX = bestX

            ans.write(str(i) + " & ")
            ans.write(str(format(bestY,'.'+str(precision)+'f')) + " & ")
            ans.write(str(format(worstY,'.'+str(precision)+'f'))+" & ")
            ans.write(str(format(avg,'.'+str(precision)+'f')) + " & ")
            ans.write(str(format(mediana,'.'+str(precision)+'f')) + " & ")
            ans.write(str(format(desvio,'.'+str(precision)+'f')) + " & ")
            ans.write(str(format(t,'.'+str(4)+'f')) + "\\\\ \n")
        
        ans.write('Resultado:\nx = [')
        for i in range(0,len(ansX)):
            ans.write(str(format(ansX[i],'.4f')))
            if i != len(ansX)-1:
                ans.write(',')
        ans.write(']\nf(x) = ' + str(ansY) + '\n')

num_generations = 1000
pop_size = 50
num_variables = 2
min_val = [-10,-10]
max_val = [10,10]
crossover_rate = 0.8
mutation_rate = 0.1
tournament_size = 5
k = 1
num = 1
precision = 6

bestR = []
timeR = []
bestAg = []
timeAg = []

tam = 50

def plot_comparison(y1, y2):
    # Gera o eixo x baseado no comprimento dos vetores y1 e y2
    x = range(1, len(y1) + 1)

    x_incremented = [i + 1 for i in x]

    # Cria o gráfico
    plt.figure()
    
    # Plota os vetores y1 e y2, juntando os pontos com segmentos de reta
    plt.plot(x_incremented, y1, marker='o', linestyle='-', color='blue', label='Algoritmo Genético')
    plt.plot(x_incremented, y2, marker='o', linestyle='-', color='red', label='Busca Aleatória')
    
    # Configura o título e os rótulos dos eixos
    plt.title('Comparação de Mínimos')
    plt.xlabel('Dimensões')
    plt.ylabel('Melhor Fitness')
    
    plt.legend()
    plt.savefig('solve.png')
    plt.close()

def plot_comparisonT(y1, y2):
    # Gera o eixo x baseado no comprimento dos vetores y1 e y2
    x = range(1, len(y1) + 1)

    x_incremented = [i + 1 for i in x]

    # Cria o gráfico
    plt.figure()
    
    # Plota os vetores y1 e y2, juntando os pontos com segmentos de reta
    plt.plot(x_incremented, y1, marker='o', linestyle='-', color='blue', label='Algoritmo Genético')
    plt.plot(x_incremented, y2, marker='o', linestyle='-', color='red', label='Busca Aleatória')
    
    # Configura o título e os rótulos dos eixos
    plt.title('Comparação de Tempo')
    plt.xlabel('Dimensões')
    plt.ylabel('Tempo(s)')
    
    plt.legend()
    plt.savefig('temp.png')
    plt.close()

seed = np.random.randint(1,10**5)
np.random.seed(seed)

with open('comp.txt','w') as ans:
    ans.write("seed = " + str(seed))
    ans.write('\nD & BA & AG & Tempo & Tempo BA(s) & Tempo AG(s)\n')
    for i in range(2, tam+1):
        d = i
        num_variables = i
        x,y,bestX,bestYr,convergenceY,tr,desvio,seed = randomAlgorithm(50000)

        bestR.append(bestYr)
        timeR.append(tr)

        best_fitness, best_solutions, all_fitness, all_solutions, t, all_solutions,desvio = genetic_algorithm(num_generations, pop_size, num_variables, min_val, max_val, crossover_rate, mutation_rate, tournament_size)

        bestAg.append(best_fitness[len(best_fitness)-1])
        timeAg.append(t)

        ans.write(str(i) + " & ")
        ans.write(str(bestYr) + " & ")
        ans.write(str(best_fitness[len(best_fitness)-1]) + " & ")
        ans.write(str(tr) + " & ")
        ans.write(str(t) + "\\\\ \n")

        min_val.append(-10)
        max_val.append(10)

plot_comparisonT(timeAg,timeR)
plot_comparison(bestAg,bestR)