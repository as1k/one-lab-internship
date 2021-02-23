#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
    return a > b;
}

bool check(int n){
    return 1162261467 % n == 0;
}

int main() {

    int a, b;
    cin >> a >> b;
    vector<int> list;
    for (int i = 1000; i <= b; i++){
        if (check(i)){
            if (i > 999 && i <= 9999 ){
                list.push_back(i);
            }
        }
    }

    sort(list.begin(), list.end(), compare);
    vector<int>:: iterator it;
    for  (it = list.begin(); it != list.end(); it++){
        cout << *it << endl;
    }
}
