#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool isNumPrime(int a) {
	for(int i = 2;i <= a/2; i++) {
		if(a % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int a;
	map<int, int> m;

	while(cin>>a) {
		if(!isNumPrime(a)) m[a]++;
	}
    
	for(map<int,int>::iterator it = m.begin(); it != m.end(); it++) {
		if((*it).second > 1) cout<<(*it).first << " ";
	}
	return 0;
}
