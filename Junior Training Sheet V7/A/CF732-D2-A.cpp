#include <bits/stdc++.h>

using namespace std;

int main(){
    int k,r; cin >> k >> r;

    int count = 1;
    while((k*count)%10 != 0 && (k*count-r)%10 != 0)
        count++;

    cout << count << "\n";
    return 0;
}