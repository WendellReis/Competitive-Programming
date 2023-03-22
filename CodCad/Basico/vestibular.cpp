#include <iostream>

using namespace std;

int main(){
    int n, r = 0;
    cin >> n;
    char gab[n], resp[n];

    for(int i = 0; i < n; i++)
        cin >> gab[i];
    for(int i = 0; i < n; i++){
        cin >> resp[i];
        if(resp[i] == gab[i])
            r++; 
    }
    
    cout << r << endl;
    return 0;
}