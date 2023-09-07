#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    int v[n];
    for(int i = 0; i < n; i++)
        cin >> v[i];
    
    int s1 = 0, s2 = 0, i = 0, f = n-1, t = 0;
    while(i <= f){
        if(t%2 == 0){
            if(v[i] >= v[f]){
                s1+=v[i];
                i++;
            } else{
                s1+=v[f];
                f--;
            }
        } else{
            if(v[i] >= v[f]){
                s2+=v[i];
                i++;
            } else{
                s2+=v[f];
                f--;
            }
        }
        t++;
    }
    cout << s1 << " " << s2 << "\n";
    return 0;
}