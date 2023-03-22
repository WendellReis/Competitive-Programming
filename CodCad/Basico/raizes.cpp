#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n;
    float v;
    cin >> n;

    float raizes[n];
    for(int i = 0; i < n; i ++){
        cin >> v;
        raizes[i] = sqrt(v);
    }
    for(int i = 0; i < n; i ++)
        printf("%.4f\n", raizes[i]);
    return 0;
}