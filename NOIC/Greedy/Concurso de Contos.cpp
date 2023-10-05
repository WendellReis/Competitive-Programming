/*
    Beecrowd
    https://www.beecrowd.com.br/judge/pt/problems/view/1222
*/
#include <bits/stdc++.h>

using namespace std;

bool cmp(string x, string y){
    return x.size() < y.size();
}

int main(){
    int n,l,c;

    while(cin >> n >> l >> c){
        string words[n];
        for(int i = 0; i < n; i++)
            cin >> words[i];
        
        sort(words,words+n,cmp);
        
        int count = 0, ini = 0, fim = n-1;
    }

    return 0;
}