#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,n; cin >> t;

    while(t > 0){
        cin >> n;

        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        
        int maior = 1, menor = n, count = 1;
        for(int i = 1; i < n; i++){
            if(v[i]-v[i-1] > 2){
                maior = max(maior,count);
                menor = min(menor,count);
                count = 1;
            } else
                count++;
        }
        cout << min(menor,count) << " " << max(maior,count)<< "\n";
        t--;
    }
    return 0;
}