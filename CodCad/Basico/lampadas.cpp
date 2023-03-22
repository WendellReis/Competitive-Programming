#include <iostream>

using namespace std;

int main(){
    int n, I;
    bool a = false , b = false;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> I;
        if(I == 1)
            a = !a;
        else{
            a = !a;
            b = !b;
        }         
    }

    cout << a << endl << b << endl;
    return 0;
}