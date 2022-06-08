#include<bits/stdc++.h>
using namespace std;

int checkpalindrome(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		int num=arr[i];
		int rem,rev=0;
		while(num!=0)
		{
			rem=num%10;
			rev=rev*10+rem;
			num=num/10;
		}
		if(arr[i]==rev)
		{
			arr[i]=0;
		}
		else{
			arr[i]=-1;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			continue;
		}
		else{
			return 0;
		}
	}
	return 1;

}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		cout<<endl;
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	int result=checkpalindrome(arr,n);
	cout<<endl<<result;
}
