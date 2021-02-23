#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int maxVal(int a,int b) {
	if(a > b) return a;
	return b;
}

int main() {
	char c;
	int b;
	map<char, int> m;
	while(cin >> c >> b) {
		if(c == '2') break;
		m[c] = maxVal(m[c], b);
	}

	for(map<char, int>::iterator it = m.begin(); it != m.end(); it++) {
		cout << (*it).first << " " << (*it).second << endl;
	}
	return 0;
}
