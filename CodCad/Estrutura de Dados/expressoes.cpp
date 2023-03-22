#include <iostream>
#include <stack>

using namespace std;

bool comparaChar(char a, char b){
    if((a == '{' && b == '}') ||
        (a == '(' && b == ')') ||
        (a == '[' && b == ']') )
        return true;
    return false;
}

#define si stack<int>

int main(){
    si aberturas;
    int n;
    string exp;
    cin >> n;
    bool m = true;

    for(int i = 0; i < n; i++){
        m = true;
        cin >> exp;
        for(int j = 0; j < exp.size(); j++){
            if(exp[j] == '{' || exp[j] == '(' || exp[j] == '[')
                aberturas.push(exp[j]);
            else if(aberturas.size() == 0){
                cout << "N3" << endl;
                m = !m;
                break;
            } else if(comparaChar(aberturas.top(), exp[j]))
                aberturas.pop();
            else{
                cout << "N2" << endl;
                m = !m; 
                break;  
            }
        }

        if(aberturas.size() > 0 && m){
            cout << "N1" << endl;
            m = !m;
        }
        if(m)
          cout << "S" << endl;  
        aberturas.empty(); 
    }
    return 0;
}