#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t > 0){
        int m, n; cin >> m >> n;
        map <string,string> dic;
        string str1,str2;
        for(int i = 0; i < m; i++){
            cin >> str1;
            cin.ignore();
            getline(cin,str2);
            dic[str1] = str2;
        }

        string line, palavra;
        for(int i = 0; i < n; i++){
            getline(cin,line);
            for(int i = 0; i < line.size();i++){
                if(line[i] != ' ')
                    palavra.push_back(line[i]);
                else{
                    if(dic.find(palavra) != dic.end())
                        cout << dic[palavra] << " ";
                    else
                       cout << palavra << " "; 
                    palavra.clear();
                }
            }
        }
        t--;
    }
    return 0;
}