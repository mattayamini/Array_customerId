#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
 	} 
 	int *maxi=max_element(arr,arr+n);
	int frq[*maxi + 1]={0};
	for(int i=0;i<n;i++)
	{
	   frq[arr[i]]++;
	   
    }
    for(int i=1;i<=*maxi;i++)
    {
    	cout<<frq[i]<<" ";
	}
	cout<<endl;
	int *maxi1=max_element(frq,frq+(*maxi+1));
	cout<<"maximium  repeated count is"<<" "<< *maxi1 ;
	
	return 0;

}  
/*	
5
1
2
1
4
1
3 1 0 1
maximium  repeated count is 3
*/

