#include <iostream>

using namespace std;

int main(){
    char c;
    int n,a,b;
    cin >> n >> a >> c >> b;

    if(c == '+'){
        if(a+b > n)
            cout << "OVERFLOW" << endl;
        else
            cout << "OK" << endl;
    } else{
        if(a*b > n)
            cout << "OVERFLOW" << endl;
        else
            cout << "OK" << endl;
    }
    return 0;
}