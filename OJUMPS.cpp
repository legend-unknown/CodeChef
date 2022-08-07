#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int num;
	cin>>num;
	
	if(num%6==0 || num%6==1 || num%6==3)
	{
	    cout<<"yes"<<endl;
	}
	else
	{
	    cout<<"no"<<endl;
	}
	return 0;
}