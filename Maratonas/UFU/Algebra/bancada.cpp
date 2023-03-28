#include <bits/stdc++.h>

using namespace std;

int mmc(int *v, int t);

int main(){
    int v[4];
    while(cin >> v[0] >> v[1] >> v[2] >> v[3])
        cout << mmc(v,4) << endl;
    return 0;
}

int mmc(int *v, int t){
    int mmc = 1, d = 2;
    while(true){
        bool s = true, u = true;
        for(int i = 0; i < t; i++)
            if(v[i] > 1){s=false;break;}
        if(s) break;

        for(int i = 0; i < t; i++)
            if(v[i]%d == 0){
                v[i]/=d;
                u = false;
            }
        if(u) d++;
        else mmc*=d;
    }
    return mmc;
}