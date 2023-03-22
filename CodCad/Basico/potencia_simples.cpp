#include <iostream>

using namespace std;

int main(){
	int y;
	float x ,pot = 1;
    cin >> x >> y;
	
	for(int i = 1; i <= y; i++)
		pot*=x;
	printf("%.4f\n", pot);
    return 0;
}
