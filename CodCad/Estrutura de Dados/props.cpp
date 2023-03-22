#include <iostream>
#include <algorithm>
#define sz sizeof
#define tam 100

using namespace std;

void print(int v[], int n)
{
    for(int i=0;i<n;i++) cout << v[i] << ' ';
    cout << endl;
}
void print(char v[], int n)
{
    for(int i=0;i<n;i++) cout << v[i];
    cout << endl;
}

int main()
{
    int v[]={5,3,4},i=0;
    char v2[]="Wendell careca 2.0";

    print(v,sz(v)/sz(int));
    print(v2,sz(v2)/sz(char));

    return 0;
}