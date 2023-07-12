#include <bits/stdc++.h>

using namespace std;

bool primo(long long n){
	if(n == 1)
		return false;

	for (int i = 2; i*i <= n; i++)
		if (n%i == 0) 
			return false;
	return true;
}

int main(){
    int n; cin >> n;

    if(n == 1)
        cout << "2\n";

    if(n > 1){
        long long d = 3;
        while(n > 1){
            if(primo(d))
                n--;
            d+=2;
        }
        cout << d-2 << "\n";
    }
    return 0;
}