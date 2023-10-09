#include <bits/stdc++.h>

using namespace std;

vector<int> findCycle(int dest, int pai, vector<vector<int>>& adj, vector<int>& visitados, vector<int>& caminho) {
    visitados[dest] = 1;
    caminho.push_back(dest);
    for (int vizinho : adj[dest]) {
        if (visitados[vizinho] == 0) {
            vector<int> resultado = findCycle(vizinho, dest, adj, visitados, caminho);
            if (!resultado.empty()) {
                return resultado;
            }
        } else if (vizinho != pai) {
            // Encontramos um ciclo
            int indice = 0;
            while (caminho[indice] != vizinho) {
                indice++;
                if(indice == caminho.size())
                    break;
            }
            vector<int> ciclo;
            for (int i = indice; i < caminho.size(); i++) {
                ciclo.push_back(caminho[i]);
            }
            ciclo.push_back(vizinho);
            return ciclo;
        }
    }

    // Removemos o nó dest do caminho antes de retornar
    caminho.pop_back();
    return vector<int>();
}

int main() {
    int n,m; cin >> n >> m;
    vector<vector<int>> adj(n+1);

    int v1,v2;
    for(int i = 0; i < m; i++){
        cin >> v1 >> v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }

    vector<int> visitados(n, 0);
    vector<int> caminho;

    for (int i = 1; i <= n; i++) {
        if (visitados[i] == 0 && adj[i].size() > 0) {
            vector<int> cicloEncontrado = findCycle(i, -1, adj, visitados, caminho);
            if (!cicloEncontrado.empty()) {
                cout << cicloEncontrado.size() << "\n";
                for (int j = 0; j < (int)cicloEncontrado.size();j++)
                    cout << cicloEncontrado[j] << " ";
                cout << "\n";
                return 0;
            }
        }
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}