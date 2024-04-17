#include <bits/stdc++.h>

using namespace std;

bool isValid(vector<int> v) {
    vector<int> aux(v.size(),0);
    for(int i = 1; i< v.size(); i++) {
        if(aux[v[i]] == 1)
            return false;
        aux[v[i]] = 1;
    }

    return true;
}

int main() {
    int n; cin >> n;

    while(n != 0) {
        vector<int> c(n);

        vector<int> v(n+1);
        for(int i = 1; i <= n; i++)
            cin >> v[i];
        
        if(!isValid(v)) {
            cout << "No solution\n";
            break;
        }

        int tam = 4*n*n-1;
        vector<vector<int>> net(n+1, vector<int>(tam, 0));
        vector<int> usado(tam,0);
        for(int i = 1; i <= n; i++) {
            int dist = v[i] - i;

            if(dist > 0) {
                int fim = i;
            }
        }

        cin >> n;
    }

    return 0;
}