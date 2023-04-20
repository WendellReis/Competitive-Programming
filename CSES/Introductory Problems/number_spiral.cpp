#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, a, b, cel;
    cin >> n;
    while(n > 0){
        cin >> a >> b;
        if(a > b){
            cel = a*a - (a - 1); //coletando valor da celula diagonal do quadrado a x a
            if(a%2 == 0) cel+=(a-b);
            else cel-=(a-b);
            cout << cel << endl;
            break;
        }

        cel = b*b - (b - 1);
        if(b%2 == 0) cel-=(b-a);
        else cel+=(b-a);
        cout << cel << endl;
        n--;
    }
    return 0;
}