#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    string frase;

    cin >> N;
    cin.ignore();
    getline(cin, frase);

    for(int c=0;c<N;c++)
    {
        cout << frase << endl;
    }

    return 0;
}