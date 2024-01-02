#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,a,b; cin >> n >> a >> b;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    long long sum = 0,max_sum;
    for(int i = 0; i < a; i++)
        sum+=v[i];

    max_sum = sum;
    for(int i = a, j = a-1; i < n; i++) {
        if(i - j == b) {
            sum-=v[j];
            j++;
        }

        sum = max(sum+v[i],(long long)v[i]);
        max_sum = max(max_sum,sum);
    }

    cout << max_sum << "\n";
    return 0;
}