#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	map<char,int> m1,m2;
	string s1,s2;
	cin>>s1>>s2;
	for(int i=0;i<s1.size();i++)
	{
		if(s1[i]>='A' and s1[i]<='Z') s1[i] = char(s1[i]-'A'+'a');
		m1[s1[i]]++;
	}
	for(int i=0;i<s2.size();i++)
	{
		if(s2[i]>='A' and s2[i]<='Z') s2[i] = char(s2[i]-'A'+'a');
		m2[s2[i]]++;
	}
	bool b1 = true;
	bool b2 = true;
	for(int i=0;i<s1.size();i++)
	{
		if(m1[s1[i]] != m2[s1[i]]) b1 = false;
	}
	for(int i=0;i<s2.size();i++)
	{
		if(m1[s2[i]] != m2[s2[i]]) b2 = false;
	}
	if(b1 and b2) cout<<"YES";
	else cout<<"NO";
	cout<<endl;
	return 0;
}
