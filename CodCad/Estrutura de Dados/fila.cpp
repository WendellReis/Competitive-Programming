#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, v;
    vector<int> fila;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> v;
        fila.push_back(v);
    }
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> v;
        for(int j = 0; j < fila.size(); j++)
            if(fila[j] == v){
                fila.erase(fila.begin()+j);
                break;
            }
    }

    for(int i = 0; i < fila.size(); i++)
        cout << fila[i] << " ";
    cout << endl;
    return 0;
}