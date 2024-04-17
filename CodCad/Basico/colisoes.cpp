#include <bits/stdc++.h>

using namespace std;

int main() {
    int x1i,y1i,x1f,y1f,x2i,y2i,x2f,y2f;
    cin >> x1i >> y1i >> x1f >> y1f >> x2i >> y2i >> x2f >> y2f;

    if((x1i >= x2i && x1i <= x2f) || (x1i <= x2i && x1i >= x2f))
        if((y1i >= y2i && y1i <= y2f) || (y1i <= y2i && y1i >= y2f)) {
            cout << "1\n";
            return 0;
        }


    cout << "0\n";
    return 0;
}