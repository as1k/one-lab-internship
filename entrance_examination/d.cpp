#include <iostream>
#include <set>
#include <vector>

using namespace std;

bool isPolindrome(string s) {
	for(int i = 0; i <= s.size()/2; i++) {
		if(s[i] != s[s.size()-1-i]) {
			return false;
		}
	}
	return true;
}

int main() {
	string str;
	set<string> s;
    
	while(cin >> str) s.insert(str);

	for(set<string>::iterator it = s.begin(); it != s.end(); it++) {
		if(!isPolindrome(*it)) cout<<*it<<endl;
	}
	return 0;
}
