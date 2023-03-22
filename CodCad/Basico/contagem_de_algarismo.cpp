#include <iostream>

using namespace std;

int main(){
    int n, v[10] = {0};
    string s;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> s;
        for(int j = 0; j < s.size(); j++)
            v[(int)(s[j] - '0')]++;
    }

    for(int i = 0; i < 10; i++)
        cout << i << " - " << v[i] << endl;
    return 0;
}