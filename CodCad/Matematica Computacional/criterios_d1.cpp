#include <iostream>

using namespace std;

int main(){
    string n;
	
	cin >> n;
	int tam = n.size(), s = 0;

	if(n[tam-1]%2 == 0) cout << "S\n";
	else cout << "N\n";
	
	for(int i = 0; i < tam; i++) s+=n[i];

    if(s%3 == 0) cout << "S\n";
	else cout << "N\n";
    
	if(n[tam-1] == '0' || n[tam-1] == '5') cout << "S\n";
	else cout << "N\n";

    return 0;
}
