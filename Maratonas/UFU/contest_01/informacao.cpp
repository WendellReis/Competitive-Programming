#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> quebraString(string s, char c) {
    vector<string> v;

    string p = "";

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == c) {
            v.push_back(p);
            p = "";
            continue;
        }
        p+= s[i];            
    }

    v.push_back(p);

    return v;
}

int main()
{
    int cont=0;
    string s;
    
    while(getline(cin,s))
    {
        vector<string> t;
        
        t = quebraString(s,' ');
    
        for(int c=0;c<t[1].size();c++)
        {
            if(t[0][cont]==t[1][c]) cont++;
            if(cont>=t[0].size()) break;
        }
    
        if(cont==t[0].size()) cout << "sim" << endl;
        else cout << "nao" << endl;
        cont=0;
    }

    return 0;
}