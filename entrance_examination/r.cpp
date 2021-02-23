#include <iostream>
using namespace std;

int main(){
    char c;
    string s;

    cin >> c >> s;

    for(int i=0;i<s.size();i++)
    {
        if(s[i] == c) continue;
        else cout << s[i];
    }
    
    return 0;
}
