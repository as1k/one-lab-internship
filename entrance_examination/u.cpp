#include <iostream>
#include <vector>

using namespace std;

int main() {
	int a;
    int b; 
    int c;
    int d = 0;
	cin >> a >> b >> c;

    int cnt = 0;

	while(d < a) {
		d += b;
		cnt++;
		if(d >= a) break;
		d -= c;
	}

	cout << cnt;

	return 0;
}
