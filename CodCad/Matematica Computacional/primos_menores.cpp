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
    if(2 <= n)
        cout << "2 ";
    for(int i = 3; i <= n; i++)
        if(primo(i))
            cout << i << " ";
    cout << "\n";
    return 0;
}