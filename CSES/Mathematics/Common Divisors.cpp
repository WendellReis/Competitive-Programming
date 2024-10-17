#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vector<int> freq(pow(10,6)+1,0); freq[1] = 2;
    while(n--) {
        int v; cin >> v;
        
        for(int x = 2; x*x <= v; x++)
            if(v%x == 0) {
                freq[x]++;
                if(x*x != v)
                    freq[v/x]++;
            }
        freq[v]++;
    }

    for(int i = pow(10,6); i >= 0; i--)
        if(freq[i] > 1) {
            printf("%d\n",i);
            break;
        }

    return 0;
}