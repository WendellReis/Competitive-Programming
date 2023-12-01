#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll dif(vector<ll> v) {
    ll d = 0;
    for(int i = v.size()-1; i > 0; i--)
        d = max(d,abs(v[i]-v[i-1]));

    return d;
}

int main() {
    int n,k; cin >> n >> k;

    vector<int> v(n), vk(k,0);
    vector<ll> ack(k,0);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    for(int i = 0; i < k; i++) {
        vk[i] = i;
        ack[i] = v[i];
    }
        

    for(int i = k; i < n; i++) {
        ll at = dif(ack);
        int atualv = v[i];
        for(int j = vk.size()-1; j >= 0; j--) {
            vk[j]++;
            ack[j] += atualv;
            ll at2 = dif(ack);
            if(at2 <= at) {
                break;
            }else {
                if(j == 0) {
                    ack[j]-= v[vk[j]];
                    vk[j]--;
                } else {
                    atualv = v[vk[j-1]+1];
                    ack[j] -= v[vk[j]-1];

                }
            }
        }
    }

    ll d = 0;
    for(int i = 0; i < k; i++)
        d = max(d,ack[i]);
    
    cout << d << "\n";
    return 0;
}