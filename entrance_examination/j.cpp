#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

bool isNumPrime(int n) {
    bool prime = true;
    int i;
    if (n == 0 || n == 1) {
        prime = false;
    }
    else {
        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                prime = false;
                break;
            }
        }
    }
    if (prime) return true;
    return false;
}

bool compare(int a, int b) {
    return a > b;
}

int main(){
    int x, y; 
    cin >> x >> y;
    int prime[y]; 
    int n = 1;
    prime[0] = 2;

    vector<int> v;
    for (int i = x;  i <= y; i++) {
        if (isNumPrime(i))
            v.push_back(i);
    }
    sort(v.begin(), v.end(), compare);
    vector<int>:: iterator it;
    for  (it = v.begin(); it != v.end(); it++){
        cout << *it << endl;
    }

    return 0;
}
