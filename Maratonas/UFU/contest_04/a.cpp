#include <bits/stdc++.h>

using namespace std;

typedef struct{
    int v;
    int *pai;
    int *dir;
    int *esq;
} no;

int main(){
    no r;
    r.v = 1;
    r.pai = NULL;

    int n;
    cin >> n;

    while(n < 0){
        for(int i = 0; i < n; i++) cout << "-";
        
    }
    return 0;
}