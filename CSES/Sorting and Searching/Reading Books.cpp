#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;

    vector<int> v(n);
    long long temp = 0;
    for(int i = 0, t; i < n; i++)
        cin >> v[i], temp+=v[i];
    sort(v.begin(),v.end());

    int i = 0, j = n-1, ti = v[0], tj = v[n-1];
    while(i != j) {
        if(ti < tj) {
            tj-=ti;
            i++;
            ti = v[i];
        } else if(ti > tj){
            ti-=tj;
            j--;
            tj = v[j];
        } else {
            i++;
            j--;
            ti = v[i];
            tj = v[j];
        }
    }

    cout << temp + abs(ti - tj) << "\n";
    return 0;
}