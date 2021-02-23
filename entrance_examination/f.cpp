#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

bool isPowerOfTwo(long long a) {
	while(a) {
		if(a == 1) {
			return true;
		}
		if(a % 2 == 0) {
			a = a / 2;
		} else {
			return false;
		}
	}
	return true;
}

int main() {
	int a;
	set<int> s;

	while(cin>>a) {
		s.insert(a);
	}
    
	for(set<int>::iterator it = s.begin(); it != s.end(); it++) {
		if(!isPowerOfTwo(*it)) cout << *it << " ";
	}
	return 0;
}
