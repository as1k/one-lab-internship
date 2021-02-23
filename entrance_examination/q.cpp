#include <iostream>

using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			int v = 0;
			if (i > n/2)
				v += 2;
			if (j <= m/2) {
				if (v == 0)
					v = 1;
			} else {
				if (v == 2)
					v = 3;
			}
			cout << v << ' ';
		}
		cout << endl;
	}
	return 0;
}