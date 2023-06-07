#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,d; cin >> n >> d;
    while(n != 0 && d != 0){
        string num; cin >> num;

        vector<int> freq[10];
        for(int i = 0; i < num.size(); i++)
            freq[(int)(num[i] - '0')].push_back(i);
        for(int i = 0; i < 10; i++)
            for(int j = 0; j < freq[i].size() && d > 0; j++){
                num[freq[i][j]] = (char)('9' + 1);
                d--;
            }
        
        for(int i = 0; i < num.size(); i++)
            if(num[i] <= '9')
                cout << num[i];
        cout << "\n";
        cin >> n >> d;
    }
    return 0;
}