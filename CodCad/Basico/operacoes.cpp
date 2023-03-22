#include <iostream>

using namespace std;

int main(){
    char c;
    float a,b;
    cin >> c >> a >> b;

    if(c == 'M')
        printf("%.2f\n",a*b);
    else
        printf("%.2f\n",a/b);
    return 0;
}