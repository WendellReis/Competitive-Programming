#include <iostream>
#include <vector>

using namespace std;

bool is_valid(const vector<int>& transformations) {
    int n = transformations.size();
    vector<int> count(n + 1, 0);

    for (int i = 0; i < n; ++i) {
        int fio = transformations[i];
        if (fio < 1 || fio > n || count[fio] > 0) {
            return false; // Fio inválido ou repetido
        }
        count[fio]++;
    }

    return true;
}

void solve_p_network(int n, const vector<int>& transformations) {
    if (!is_valid(transformations)) {
        cout << "No solution" << endl;
        return;
    }

    // Construa a P-Network aqui

    // Determinando o número máximo de cursos
    int m = 0;
    for (int i = 0; i < n; ++i) {
        m = max(m, abs(transformations[i] - i - 1));
    }

    // Saída da solução
    cout << m << " ";
    for (int i = 0; i < m; ++i) {
        cout << i + 1 << " ";
    }
    cout << endl;
}

int main() {
    int n;
    while (true) {
        cin >> n;
        if (n == 0) {
            break; // Fim da entrada
        }

        vector<int> transformations(n);
        for (int i = 0; i < n; ++i) {
            cin >> transformations[i];
        }

        solve_p_network(n, transformations);
    }

    return 0;
}