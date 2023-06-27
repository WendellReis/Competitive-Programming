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

    for(int i = 0; i < n; i++){
        cout << ticket[i] << " ";
    }
    cout << endl;
    
    for(int i = 0; i < price.size(); i++){
        int j = 0;
        bool pass = false;
        while(j < price.size(){
            if(ticket[j] == price[i]){
                true;
                break;
            }
            j++;
        }
            
        
    }
    //3 5 5 7 8
    //4 8 3
    return 0;
}