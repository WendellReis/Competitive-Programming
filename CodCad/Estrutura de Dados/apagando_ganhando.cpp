#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,d; cin >> n >> d;
    while(n && d){
        string num; cin >> num;

        int pos = 0;
        while(pos < num.size() - 1 && d > 0){
            cout << "pos = " << pos << " : " << num[pos] << " " << num[pos+1] << endl;
            if(num[pos] < num[pos+1]){
                num.erase(num.begin() + pos);
                d--;
            } else
                pos++;
            cout << "num = " << num << endl;
        }
        for(int i = 0; i < num.size()-d; i++)
            cout << num[i];
        cout << "\n";
        cin >> n >> d;
    }
    return 0;
}
