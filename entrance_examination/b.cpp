#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool checkSimilarity(string str1, string str2) {
    if(str1 == str2) return false;
    if(str1.size() != str2.size()) return true;
    
    vector<int> vect(26, 0);
    for(int i = 0;i < str2.size();i++) {
        vect[str2[i]-'a']++;
        vect[str1[i]-'a']++;
    }
        
    for(int i = 0;i < 26; i++) {
        if(vect[i] % 2 != 0) return true;
    }
    return false;
}

int main() {
    string s;
    vector<string> v;
    cin>>s;
    string tmp;
    while(cin>>tmp) {
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    for(int i = 0;i < v.size();i++) {
        if(checkSimilarity(s, v[i])) {
            cout << v[i] << " ";
        }
    }
    return 0;
}