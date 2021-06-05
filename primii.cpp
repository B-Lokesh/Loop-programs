//using iterative approach
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n ,s=0;
	cout<<"Enter a value check prime or not : ";
	cin>>n;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		s=1;
	}
	if(s)
	cout<<"Not a Prime number";
	else
	cout<<"Prime number";
}
