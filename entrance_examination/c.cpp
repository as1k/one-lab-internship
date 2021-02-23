#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vect;
    int a = 0;
    int b;
    while(cin >> b) {
        if(b == 0) a++; 
        else vect.push_back(b);
    }
    
    for(int i = 0;i < vect.size(); i++) cout<<vect[i]<<" ";
  
    while(a--) cout << 0 << " ";
    return 0;
}