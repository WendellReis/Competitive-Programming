#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    while(n > 0){
        int sz; cin >> sz;
        int v1[sz],v2[sz];

        for(int i = 0; i < sz; i++){
            cin >> v1[i];
            v2[i] = v1[i];
        }

        sort(v1,v1+sz);

        int count = 0;
        for(int i = 0; i < sz; i++)
            if(v1[sz-1-i] == v2[i])
                count++;
        cout << count << "\n";

        n--;
    }

    return 0;
}