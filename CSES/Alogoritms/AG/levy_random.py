import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
from matplotlib import cm
import time

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

def save3dChart(x,y,rate):
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

    plt.savefig('fig_random_' + str(rate) + 'g.png', dpi = 500)
    #plt.show()
    plt.close()

def saveConvergenceChart(y,rate):
    plt.title('Gráfico de Convergência')
    plt.xlabel('Iterações')
    plt.ylabel('Melhor valor')
    plt.plot(range(1, len(y) + 1), y, marker='o', linestyle='-', color='b')
    plt.grid(True)
    plt.savefig('convergence_' + str(rate) + 'c.png', dpi = 500)
    plt.close()

def getAllCharts(y,i):
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
    plt.show()
    plt.close()

def randomAlgorithmTest(k,rate):
    with open('random_'+str(rate)+'_'+str(k)+'.txt','w') as ans:
        medData = [0,0,0]
        ansX = []
        ansY = np.inf
        melhorItX = None
        melhorItY = None
        ans.write('N & Seed & Melhor & Desvio Padrao & Tempo(s)\n')
        bestConvergence = None
        allConvergeY = []


        for i in range(1,k+1):
            x,y,bestX,bestY,convergenceY,t,desvio,seed = randomAlgorithm(rate)

            if bestY < ansY:
                ansY = bestY
                ansX = bestX
                melhorItX = x
                melhorItY = y
                bestConvergence = convergenceY

            medData[0]+=bestY
            medData[1]+=desvio
            medData[2]+=t

            ans.write(str(i) + " & ")
            ans.write(str(seed) + " & ")
            ans.write(str(bestY) + " & ")
            ans.write(str(desvio) + " & ")
            ans.write(str(t) + "\\\\ \n")

            allConvergeY.append(convergenceY)
        
        ans.write('\hline\n')
        ans.write('$\delta$ & - &' +  str(medData[0]/k) + ' & '+ str(medData[1]/k) + ' & ' +str(medData[2]/k) + '\hline\n')
        
        if d == 2:
            save3dChart(melhorItX,melhorItY,rate)

        ans.write('Resultado:\nx = [')
        for i in range(0,len(ansX)):
            ans.write(str(ansX[i]))
            if i != len(ansX)-1:
                ans.write(',')
        ans.write(']\nf(x) = ' + str(ansY) + '\n')
        saveConvergenceChart(bestConvergence,rate)
        getAllCharts(allConvergeY,rate)

randomAlgorithmTest(10,5*10**3)
randomAlgorithmTest(10,5*10**4)
randomAlgorithmTest(10,5*10**5)