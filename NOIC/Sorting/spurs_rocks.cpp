#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, h = 1; cin >> n;

    while(n != 0){
        int x,y,z,w;
        vector<tuple<int,double,int>> t;
        for(int i = 0; i <= n; i++)
            t.push_back({0,0,i});
        
        int vit[n+1] = {0}, der[n+1] = {0};
        for(int i = 0; i < n*(n-1)/2; i++){
            cin >> x >> y >> z >> w;

            if(y > w){
                get<0>(t[x])+=2;
                get<0>(t[z])++;
            } else{
                get<0>(t[x])++;
                get<0>(t[z])+=2;
            }

            vit[x]+=y;
            der[x]+=w;
            
            vit[z]+=w;
            der[z]+=y;
        }

        for(int i = 1; i<= n; i++){
            if(der[i] == 0)
                get<1>(t[i]) = vit[i];
            else
                get<1>(t[i]) = vit[i]/der[i];
        }

        sort(t.rbegin(),t.rend());

        cout << "Instancia " << h << " \n";
        for(int i = 0; i < n; i++)
            cout << get<2>(t[i]) << " ";

        cout << "\n";
        h++;
        cin >> n;
    }
    return 0;
}