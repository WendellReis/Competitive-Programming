#include <iostream>
#include <queue>

using namespace std;

void argentina(queue<char> times){
    if(times.size() == 1)
        cout << times.front() << endl;
    else{
        int a,b;
        cin >> a >> b;

        if(a > b){
            times.push(times.front());
            times.pop();
        } else{
            times.pop();
            times.push(times.front());
        }
        times.pop();
        argentina(times);
    }

    return;
}

int main(){
    queue<char> times;
    for(int i = 0; i < 16; i++)
        times.push('A' + i);
    argentina(times);
    return 0;
}