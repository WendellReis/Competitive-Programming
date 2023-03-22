#include <bits/stdc++.h>

using namespace std;

typedef struct retangulo{
    int x0;
    int y0;
    int x1;
    int y1;
}retangulo;

int main(){
    retangulo a,b;

    cin >> a.x0 >> a.y0 >> a.x1 >> a.y1;
    cin >> b.x0 >> b.y0 >> b.x1 >> b.y1;


    if((a.x0 >= b.x0 && a.x1 <= b.x0 && a.y0 >= b.y0 && a.y1 <= b.y0) ||
        (a.x0 >= b.x1 && a.x1 <= b.x1 && a.y0 >= b.y1 && a.y1 <= b.y1))
            cout << 1 << endl;
    else cout << 0 << endl;
    return 0;
}