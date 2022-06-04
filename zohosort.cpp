#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,swap;
	cin>>n;
	int arr[n],arr2[n],b=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		if(i%2!=0)
		{
			for(int j=i+2;j<n;j++)
			{
				if(j%2!=0)
				{
					if(arr[i]>arr[j])
					{
						swap=arr[i];
						arr[i]=arr[j];
						arr[j]=swap;
					}
					arr2[b++]=arr[i];
					arr2[b++]=arr[j];
				}
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			for(int j=i+2;j<n;j++)
			{
				if(j%2==0)
				{
					if(arr[i]<arr[j])
					{
						swap=arr[i];
						arr[i]=arr[j];
						arr[j]=swap;
						
					}
				}
			}
		}
	}
	for(int i=0;i<b;i++)
	{
		cout<<arr2[i]<<" ";
	}
}
