#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main()
{   
    map<string, int> v;
    string s;
    int cnt = 0;
    
    while(cin>>s) {
        v[s]++;
    }
    for(map<string, int>::iterator it = v.begin(); it != v.end(); it++) {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    return 0; 
}
