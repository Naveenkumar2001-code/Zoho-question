#include<bits/stdc++.h>
#include<vector>
using namespace std;
void print(vector<string> v)
{
	int len=v.size();
	for(int i=len-1;i>=0;i--)
	{
		cout<<v[i]<<" ";
	}
}
void rev(string s,int len)
{
	vector<string> v;
	int i=0,j=0;
	while(i<len)
	{
		string s1;
		while(s[j]!=' ' && s[j]!='\0')
		{
			j++;
		}
		while(i<j)
		{
		
		s1+=s[i];
		i++;
	}
	v.push_back(s1);
	i=j+1;
	j=i;
	}
	print(v);
}
int main()
{
	string s;
	getline(cin,s);
	int len=s.size();
	rev(s,len);
	
}
