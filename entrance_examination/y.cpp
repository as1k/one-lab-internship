#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n;
	cin >> n;

    if(n == 0) {
        cout << '0';
    }

	string t;
	while (n >= 1) {
		t += (n%7) + '0';
		n /= 7;
	}
	reverse(t.begin(),t.end());
	cout << t;
	
	return 0;
}