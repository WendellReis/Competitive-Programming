#include <bits/stdc++.h>

using namespace std;
#define REP(i,b) for(int i = 0; i < b; i++)

int main(){
    int n; cin >> n;
    REP(i,n){
        string line; cin >> line;

        stack<char> chaves;
        bool valid = true;
        REP(j,line.size()){
            if(line[j] == '{' || line[j] == '(' || line[j] == '[')
                chaves.push(line[j]);
            else if(chaves.size() == 0){
                cout << "N\n";
                valid = false;
                break;
            } else if(line[j] == '}' && chaves.top() != '{'){
                cout << "N\n";
                valid = false;
                break;
            } else if(line[j] == ')' && chaves.top() != '('){
                cout << "N\n";
                valid = false;
                break;
            } else if(line[j] == ']' && chaves.top() != '['){
                cout << "N\n";
                valid = false;
                break;
            }
            chaves.pop();
        }
        if(chaves.size() == 0 && valid)
            cout << "S\n";
    }
    return 0;
}