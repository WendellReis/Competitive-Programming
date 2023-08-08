#include <bits/stdc++.h>

using namespace std;

int main(){ 
    int c,n,v; cin >> c >> n;
    
    map <string,int> inst,upd;
    string nome;
    for(int i = 0; i < c; i++){
        cin >> nome >> v;
        if(inst.find(nome) != inst.end())
            if(v > inst[nome]) 
                inst[nome] = v;
        else
            inst[nome] = v;
    }

    for(int i = 0; i < n; i++){
        cin >> nome >> v;
        if(upd.find(nome) != upd.end())
            if(v > upd[nome]) 
                upd[nome] = v;
        else
            upd[nome] = v;
    }

    for (map<string,int>::iterator it=upd.begin(); it!=upd.end(); ++it){
      if(inst.find(it->first) != inst.end())
        if(inst[it->first] > it->second)
            cout << it->first << " " << it->second << "\n";
    }

    return 0;
}