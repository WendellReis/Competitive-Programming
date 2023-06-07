#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, q = 0;
	cin >> n;
	for(int i = 1; i <= n/2; i++){
		if(q > 2) break;
		if(n%i == 0) q++;
	}
	
	if(q == 2) cout << 'S' << endl;
	else cout << 'N' << endl;
    return 0;

    return 0;
}