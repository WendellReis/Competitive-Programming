#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,d; cin >> n >> d;
    while(n && d){
        string num; cin >> num;
        for(int i = 0; i < num.size()-1 && d > 0; i++)
            if(num[i] < num[i+1]){
                num.erase(num.begin()+i);
            }  

        for(int i = 0; i < num.size()-d;i++)
            cout << num[i];
        cout << "\n";

        cin >> n >> d;
    }
    return 0;
}
