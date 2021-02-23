#include <iostream>
#include <map>

using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();

    map<char, int> m;

    for(int i = 0; i < n; ++i){
        m[s[i]]++;
    }
    cout << m.size() << "\n";
    
    for(auto i : m){
        cout << i.first << " " << i.second << "\n";
    }
}