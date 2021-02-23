#include <iostream>

using namespace std;
 
int main(){
    int a, b, c;
    cin >> a >> b >> c;

    for(int i = min(a, b); i>=1; i--) {
        if(a%i==0 && b%i==0){
        c--;
        if(c == 0){
            cout << i << endl;
        }
        }
    }
    
    return 0;
}