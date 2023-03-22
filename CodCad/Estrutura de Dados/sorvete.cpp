#include <iostream>
#include <algorithm>
#include <vector>

#define enfia push_back

using namespace std;

int main(){
    int p, s;
    cin >> p >> s;
    pair<int, int> intervalo[s];

    for(int i = 0; i < s; i++)
        cin >> intervalo[i].first >> intervalo[i].second;
    
    sort(intervalo, intervalo+s);
    pair<int, int> trecho;
    trecho.first = intervalo[0].first;
    trecho.second = intervalo[0].second;

    vector<pair<int,int>> trechos;

    for(int i = 0; i < s; i++){
        if(intervalo[i].first <= trecho.second && intervalo[i].second > trecho.second) 
            trecho.second = intervalo[i].second;

        if(intervalo[i].first > trecho.second){
            trechos.push_back(trecho);
            trecho.first = intervalo[i].first;
            trecho.second = intervalo[i].second;
        }      
    }
    trechos.enfia(trecho);

    for(int i = 0; i < trechos.size(); i++)
        cout << trechos[i].first << " " << trechos[i].second << endl;

    
    return 0;
}