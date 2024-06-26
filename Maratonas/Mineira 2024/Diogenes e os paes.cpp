#include <bits/stdc++.h>

using namespace std;

int tempo(int d, int D) {
    if(d >= D)
        return d-D;
    return d+D;
}

int main() {
    int n,d,v,q = 0; cin >> n >> d;

    int temp[200] = {0};
    while(n--) {
        cin >> v;
        temp[tempo(v,d)]++;
        cout << tempo(v,d) << endl;
    }

    for(int i = 0; i < 10; i++)
        cout << temp[i] << " ";

    int maximo = temp[0], dia = 0;
    for(int i = 1; i <= 199; i++)
        maximo = max(maximo,temp[i]);

    cout << maximo << "\n";
    return 0;
}