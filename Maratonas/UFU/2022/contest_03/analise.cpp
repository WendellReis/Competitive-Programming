#include <iostream>

using namespace std;

int main(){
    int a, b, c;

    while(cin >> a >> b >> c){
        if((a-b)%c == 0) cout << "1\n";
        else cout << "0\n";
    }
        
    return 0;
}