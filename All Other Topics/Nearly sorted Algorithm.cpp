#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	int k;
	int n;
	cin>>n;
	cin>>k;
	int A[n];
	for(int i=0;i<n;i++)
	{
	    cin>>A[i];
	}
	sort(A,A+n);
	for(int i=0;i<n;i++)
	{
	    cout<<A[i]<<" ";
	}
	cout<<endl;
	}
	return 0;
}