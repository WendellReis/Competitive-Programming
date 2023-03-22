#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

int main(){
    int n;
    cin >> n;
    char str[n][30];

    for(int i = 0; i < n; i++)
        fgets(str[i], 30, stdin);

    for(int i = 0; i < n; i++){
        puts(str[i]);
        cout << endl;
    }
    return 0;
}