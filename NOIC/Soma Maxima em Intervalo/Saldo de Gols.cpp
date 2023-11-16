#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    while(n != 0){
        vector<int> v(n);
        int a,b;
        for(int i = 0; i < n; i++){
            cin >> a >> b;
            v[i] = a - b;
        }

        int x = 1,y = 1, sum = v[0], max_sum = v[0];
        for(int i = 1; i <= n; i++){
            if(sum < 0)
                sum = 0;
            sum+=v[i];
        }
        cin >> n;
    }
    return 0;
}