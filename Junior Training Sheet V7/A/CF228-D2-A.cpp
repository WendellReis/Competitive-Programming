#include <bits/stdc++.h>

using namespace std;

int main(){
    int v[4]; cin >> v[0] >> v[1] >> v[2] >> v[3];

    int count = 0;
    for(int i = 0; i < 4; i++)
        for(int j = i+1; j < 4; j++)
            if(v[i] == v[j] && v[i] != -1){
                v[j] = -1;
                count++;
            }
    cout << count << "\n";
    return 0;
}