#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,maxi=0,id;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
 	} 
 	map<int,int>dic;
 	for(int i=0;i<n;i++)
 	{
 		dic[arr[i]]++;
 		
	}
	for (auto i :dic)
	{
		if(maxi<i.second)
		{
			maxi=i.second;
			id=i.first;
		}
	}
	cout<<"customer with id num "<<id<<" visited for "<<maxi <<" times";
}
/*5
1
2
1
4
1
customer with id num 1 visited for 3 times*/
