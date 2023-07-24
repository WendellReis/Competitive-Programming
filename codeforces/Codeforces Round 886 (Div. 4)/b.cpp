#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,a,b,q; cin >> t;
    while(t > 0){
        cin >> q;
        pair<int,int> resp[q];
        for(int i = 0; i < q; i++)
            cin >> resp[i].first >> resp[i].second;
        
        int max_q = 0;
        for(int i = 0; i < q; i++)
            if(resp[i].first <= 10) 
                max_q = max(max_q,resp[i].second);
        int idx = 0;
        while(resp[idx].second != max_q || resp[idx].first > 10)
            idx++;
        cout << idx + 1 << endl;
        t--;
    }
    return 0;
}