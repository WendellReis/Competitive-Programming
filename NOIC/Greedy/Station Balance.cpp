/*
    UVa Online Judge
    https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=351
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t = 1, c,s;
    while(cin >> c >> s){
        vector<int> chamb[c];
        int spec[2*c] = {0}, sz[c] = {0};

        for(int i = 0; i < s; i++)
            cin >> spec[i];

        sort(spec,spec+2*c);
        double av = 0;
        for(int i = 0; i < c; i++){
            if(spec[i] != 0){
                chamb[i].push_back(spec[i]);
                sz[i]+=spec[i];
            }
                
            if(spec[2*c-1 - i] != 0){
                chamb[i].push_back(spec[2*c-1 - i]);
                sz[i]+=spec[2*c-1 - i];
            }
            av+=sz[i];
        }

        av/=c;
        double imb = 0;
        cout << "Set #" << t << "\n";
        for(int i = 0; i < c; i++){
            cout << " " << i << ": ";
            for(int j = 0; j < (int)chamb[i].size(); j++)
                cout << chamb[i][j] << " ";
            cout << "\n";
            imb+=fabs(sz[i] - av);
        }

        cout << "IMBALANCE = ";
        printf("%.5lf\n\n",imb);
        t++;
    }
    return 0;
}