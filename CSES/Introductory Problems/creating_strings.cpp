#include <bits/stdc++.h>
 
using namespace std;
 
void createString(string s, vector<char> vet, vector<vector<char>> *mem);
 
int main(){
    string l; cin >> l;
    vector<char> vet; 
    vector<vector<char>> mem;
    
    sort(l.begin(), l.end());
    createString(l,vet,&mem);
 
    cout << mem.size() << endl;
    for(int i = 0; i < (int)mem.size(); i++){
        for(int j = 0; j < (int)mem[i].size(); j++)
            cout << mem[i][j];
        cout << "\n";
    }
 
    return 0;
}
 
void createString(string s, vector<char> vet, vector<vector<char>>* mem){
    if(s.size() == 0)
        mem->push_back(vet);
 
    char prev = '!';
    for(int i = 0; i < (int)s.size(); i++){
        string s2 = s;
        char c = s[i];
        if(c == prev)
            continue;
        vet.push_back(c);
        s2.erase(s2.begin() + i);
        createString(s2,vet,mem);
        vet.erase(vet.begin() + vet.size() - 1);
        prev = c;
    }
}