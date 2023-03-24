#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N,C;
    string frase;

    cin >> N;

    for(int c=0;c<N;c++)
    {
        cin >> C;
        cin.ignore();
        getline(cin, frase);

        for(int c1=0;c1<frase.size();c1++)
        {
            frase[c1]=(char)frase[c1]+C;
            if(frase[c1]<'A') frase[c1]='Z'+1-('A'-frase[c1]);
            else if(frase[c1]>'Z') frase[c1]='A'-1+(frase[c1]-'Z');
        }

        cout << frase << endl;
    }

    return 0;
}