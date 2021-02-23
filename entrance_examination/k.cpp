#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

bool isNumPowerOfTwo(int n) {
    if (n == 0)
    return false;
    while (n != 1) {
        if (n % 2 != 0)
            return false;

        n /= 2;
    }

    return true;
}

int main() {
    int a;
    set<int> s;

    while (cin >> a){
        if (isNumPowerOfTwo(a))
            s.insert(a);
    }

    set<int>::iterator it;
    for ( it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
}
