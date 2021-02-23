#include <iostream>
#include <algorithm>
#include <map>
#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<pair<int,string>> vec;
    map<string, int> grades;

    int total = 0;
    int n;
    cin >> n;

    string name;
    int points;

    for (int i = 0; i < n; i++) {
        cin >> name >> points;
        grades[name] += points;
        total += points;
    }

    for (auto v : grades) {
        vec.push_back(make_pair(v.second,v.first));
    }

    sort(vec.begin(),vec.end());
    for (int i = vec.size()-1; i >= 0; i--) {
        cout << vec[i].second << ' ';
        double perecnt = (double)vec[i].first / total * 100;
        cout << perecnt << '%' << endl;
    }

    return 0;
}