#include <bits/stdc++.h>

using namespace std;

int main() {
    int v1[3],v2[2];
    cin >> v1[0] >> v1[1] >> v1[2] >> v2[0] >> v2[1];
    sort(v1,v1+3);
    sort(v2,v2+2);

    if(v1[0] < v2[0] && (v1[1] < v2[1] || v1[1] < sqrt((float)(v2[0]*v2[0]+v2[1]*v2[1])))) cout << "S\n";
    else cout << "N\n";
    return 0;
}