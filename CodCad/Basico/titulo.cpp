#include <iostream>

using namespace std;

string title(string F){
    for(int i = 0 ;i < F.size(); i++){
        if(i == 0 && F[i] > 91)
            cout << F[i]-'A';
        else if(F[i-1] == 9 && F[i] > 91)
            cout << F[i]-'A';
        else if(F[i] < 91)
            cout << F[i]+'A';
    }
}

int main(){ 
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}
