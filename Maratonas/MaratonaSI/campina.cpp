#include <iostream>

using namespace std;

int main() {
    int n, v[2] = {0}, val;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> val;
        if(val != 4)
            v[0]++;
        else 
            v[1]++;
    }
    if(v[0] < v[1])
        cout << "indeterminado\n";
    else
        cout << "nenhum\n";
    return 0;
}



