#include <bits/stdc++.h>

using namespace std;

int main(){
    int v, t;
    for(int i = 0; i < 5; i++) 
        for(int j = 0; j < 5; j++){
            cin >> v;
            if(v == 1) t = abs(i-2) + abs(j-2);
        }
    cout << t << "\n";

    return 0;
}