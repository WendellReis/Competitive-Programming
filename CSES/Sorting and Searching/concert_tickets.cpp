#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,v; cin >> n >> m;
    vector<int> ticket, price;

    for(int i = 0; i < n; i++){
        cin >> v;
        ticket.push_back(v);
    }
    for(int i = 0; i < m; i++){
        cin >> v;
        price.push_back(v);
    }
    sort(ticket.begin(), ticket.end());

    for(int i = 0; i < m; i++){
        cout << " i = " << i << endl;
        int pos = 0;
        while(ticket[pos] <= price[i] || pos < (int)ticket.size()-1){
            pos++;
            if(ticket[pos] == price[i]) break;
        }
        if(ticket[pos] <= price[i]){
            cout << ticket[pos] << "\n";
            ticket.erase(ticket.begin() + pos);
        } else
            cout << "-1\n";
    }
    return 0;
}