#include <iostream>

int maior(int *v){
    int m = v[0], n;
    int emp = false;
    for(int i = 1; i < sizeof(v)/sizeof(int); i++)
        if(v[i] > m){
            n = i;
            m = v[i];
            emp = false;
        } else if(v[i] == m){
            emp = true;
        }
}

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int score[3][n] = {{0}};
    for(int i = 0; i < m; i++){
        cin >> n;
        score[0][n]++;
        cin >> n;
        score[1][n]++;
        cin >> n;
        score[2][n]++;
    }
    return 0;
}