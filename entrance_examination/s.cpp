#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v(n);

    int i=0;
    int max = -1;

	while(n--) {
		cin>>v[i];
		if(max < v[i]) {
			max = v[i];
		}
		i++;
	}

	for(int i = 0;i < v.size(); i++) {
		cout << (v[i] == max ? 1 : 0) << " "; 
	}

	return 0;
}