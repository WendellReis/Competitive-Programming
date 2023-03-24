#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    string comemoracao="C";

    cin >> N;

    for(int c=0;c<N;c++) comemoracao+='a';
    comemoracao+="rlos, que felicidade!";

    cout << comemoracao << endl;

    return 0;
}