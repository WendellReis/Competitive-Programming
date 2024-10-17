#include <bits/stdc++.h>

using namespace std;

typedef long long C;
typedef complex<C> P;

#define X real();
#define Y imag();

int main() {
    int n; cin >> n;
    while(n--) {
        int a,b;
        cin >> a >> b; P p1 = {a,b};
        cin >> a >> b; P p2 = {a,b};
        cin >> a >> b; P p3 = {a,b};

        C turn = (p3-p1)*(p3-p2);
        cout << turn << " ";
        if(turn > 0) cout << "RIGHT\n";
        else if(turn < 0) cout << "LEFT\n";
        else cout << "TOUCH\n";
    }

    return 0;
}