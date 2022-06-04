#include<bits/stdc++.h>
using namespace std;
bool solve(string epr)
{
	stack<char> s;
	char x;
	for(int i=0;i<epr.size();i++)
	{
		if(epr[i]=='[' || epr[i]=='{' || epr[i]=='(')
		{
			s.push(epr[i]);
			continue;
		}
		if(s.empty())
		{
			return false;
		}
		switch(epr[i])
		{
			case ')' :
				x=s.top();
				s.pop();
				if(x=='{' || x=='[')
				return false;
				break;
			case '}' :
				x=s.top();
				s.pop();
				if(x=='[' || x=='(')
				{
					return false;
				}
				break;
				case ']' :
					x=s.top();
					s.pop();
					if(x=='{' || x=='(')
					{
						return false;
					}
					break;
		}
	}
	return (s.empty());
}
int main()
{
	string epr;
	cin>>epr;
	if(solve(epr))
	{
		cout<<"balanced";
	}
	else{
		cout<<"not balanced";
	}
}
