#include<iostream>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int s,e,k;
	for(s=0;s<n;s++)
	{
		for(e=s;e<n;e++)
		{
			for(k=s;k<=e;k++)
			{
				cout<<a[k]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}

}
