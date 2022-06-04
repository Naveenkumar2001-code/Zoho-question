#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	cout<<"first string :";
	cin>>s1;
	cout<<"second string: ";
	cin>>s2;
	int len=s1.size();
	int len2=s2.size();
	int count=0;
	for(int i=0;i<len;i++)
	{
		for(int j=0;j<len2;j++)
		{
			if(s1[i]==s2[j])
			{
				s2[j]=-1;	
			}
			else if(s1[i]=='*')
			{
				s1[i]=-1;
			}
			else if(s2[j]=='*')
			{
				s2[j]=-1;
			}
			else
			{
				continue;
			}
		}
	}
	for(int i=0;i<len2;i++)
	{
		if(s2[i]==-1)
		{
			count++;
		}
	}
	if(count==len2)
	{
		cout<<"true";
	}
	else
	{
		cout<<"false";
	}
}
