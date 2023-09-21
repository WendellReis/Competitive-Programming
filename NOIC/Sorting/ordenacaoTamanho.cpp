#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    cin.ignore();
    while(n > 0){
        string ln; getline(cin,ln);
        vector<tuple<int,int,string>> data;

        string w;
        int k = 0;
        for(int j = 0; j < ln.size(); j++){
            if(ln[j] == ' '){
                data.push_back({w.size(),k,w});
                k--;
                w.clear();
                continue;
            }
            w.push_back(ln[j]);
        }
        data.push_back({w.size(),k,w});
        sort(data.begin(),data.end());

        for(int i = data.size() - 1; i >= 0 ; i--)
            cout << get<2>(data[i]) << " ";
        cout << "\n";
        n--;
    }
    return 0;
}