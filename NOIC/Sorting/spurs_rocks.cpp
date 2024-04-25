//Problem Link: https://judge.beecrowd.com/pt/problems/view/1303

#include <bits/stdc++.h>

using namespace std;

struct equipe {
    int num;
    int pts = 0;
    int pro = 0;
    int contra = 0;
    double average;
};

bool cmp(equipe a, equipe b) {
    if(a.pts > b.pts)
        return true;
    if(a.pts < b.pts)
        return false;
    
    if(a.average > b.average)
        return true;
    if(a.average < b.average)
        return false;
    
    if(a.pro > b.pro)
        return true;
    if(a.pro < b.pro)
        return false;
    
    return a.num < b.num;
}

int main() {
    int n, inst = 1; cin >> n;
    
    while(n != 0) {
        //Numerando as equipes de 1 a N
        equipe v[n];
        for(int i = 0; i < n; i++)
            v[i].num = i+1;

        int x,px,z,pz;

        for(int i = n*(n-1)/2; i > 0; i--) {
            cin >> x >> px >> z >> pz;

            if(px > pz) {
                v[x-1].pts+=2;
                v[z-1].pts+=1;
                
            } else {
                v[x-1].pts+=1;
                v[z-1].pts+=2;
            }

            v[x-1].pro+=px;
            v[x-1].contra+=pz;
            v[z-1].pro+=pz;
            v[z-1].contra+=px;
        }

        //Calculando o cesta average
        for(int i = 0; i < n; i++) {
            if(v[i].contra == 0)
                v[i].average = v[i].pro;
            else
                v[i].average = v[i].pro/v[i].contra;
        }

        sort(v,v+n,cmp);
        cout << "Instancia " << inst << "\n";
        for(int i = 0; i < n; i++)
            cout << v[i].num << " ";
        cout << "\n\n";

        cin >> n;
        inst++;
    }

    return 0;
}