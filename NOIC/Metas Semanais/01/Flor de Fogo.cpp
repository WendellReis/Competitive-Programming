#include <bits/stdc++.h>

using namespace std;

int main() {
    int r1,x1,y1,r2,x2,y2;

    while(cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2) {
        bool inscrito = false;

        if(x1-r1 <= x2-r2 && x2-r2 <= x1+r1 && x1-r1 <= x2+r2 && x2+r2 <= x1+r1)
            if(y1-r1 <= y2-r2 && y2-r2 <= y1+r1 && y1-r1 <= y2+r2 && y2+r2 <= y1+r1)
                inscrito = true;

        if(inscrito)
            cout << "RICO\n";
        else 
            cout << "MORTO\n";
    }

    return 0;
}