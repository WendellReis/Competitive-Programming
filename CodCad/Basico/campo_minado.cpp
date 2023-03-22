#include <iostream>

using namespace std;

int main(){
    int n, v;
    cin >> n;
    int campo[n] = {0};

    for(int i = 0; i < n; i++){
        cin >> v;
        if(v){
            campo[i]++;
                if(i == 0)
                    campo[i+1]++;
                else if(i == n-1)
                    campo[i-1]++;
                else{
                    campo[i+1]++;
                    campo[i-1]++;
                }     
            }
        }
        
    for(int i = 0; i < n; i++)
        cout << campo[i] << endl;                  
    return 0;
}