#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
	string s;
	map<char, int> m;

	while(cin >> s) {
		if(s[0] >= 'A' && s[0] <= 'Z') {
			int q = s[0] - 'A';
			s[0] = 'a' + q;
		}
		m[s[0]]++;
	}

	for(char i = 'a'; i <= 'z'; i++) {
		cout << m[i] << endl;
	}

	return 0;
}
