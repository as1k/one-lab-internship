#include<iostream>
#include<map>

using namespace std;

int main()
{
	string s;
	map<string, int> m;
	while(cin>>s)
	{
		m[s]++;
	}

	map<string, int>::iterator it;
	string ans = "";
	int mx = -1;

	for(it=m.begin();it != m.end();it++)
	{
		if(mx<(*it).second)
		{
			mx = (*it).second;
			ans = (*it).first;
		}
	}

	for(int i=0;i<ans.size();i++)
	{
		ans[i] = toupper(ans[i]);
	}

	cout<<ans; 
    
	return 0;
}