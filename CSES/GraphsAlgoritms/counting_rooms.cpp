#include <bits/stdc++.h>
 
#define MK make_pair
#define F first  
#define S second 
 
using namespace std;
 
int main(){
    int n,m; cin >> n >> m;
 
    vector<string> mat;
    string v;
    for(int i = 0; i < n; i++){
        cin >> v;
        mat.push_back(v);
    }
 
    int quant = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(mat[i][j] == '.'){
                quant++;
                stack<pair<int,int>> pilha;
                pilha.push(MK(i,j));
                
                while(!pilha.empty()){
                    pair<int,int> at = pilha.top();
                    pilha.pop();
                    
                    mat[at.F][at.S] = '#';
 
                    if(at.F + 1 < n) if(mat[at.F+1][at.S] == '.')
                        pilha.push(MK(at.F+1,at.S));
                    
                    if(at.F - 1 >= 0) if(mat[at.F-1][at.S] == '.')
                        pilha.push(MK(at.F-1,at.S));
 
                    if(at.S + 1 < m) if(mat[at.F][at.S+1] == '.')
                        pilha.push(MK(at.F,at.S+1));
 
                    if(at.S - 1 >= 0) if(mat[at.F][at.S-1] == '.')
                        pilha.push(MK(at.F,at.S-1));
                }
            }
    cout << quant << "\n";
    return 0;
}