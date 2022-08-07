#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int num;
	cin>>num;
	
	for(long long int q=0;q<num;q++)
	{
	    long long int n,a;
	    cin>>n>>a;
	   // long long int arr[n];
	    multiset<long long int> mt;
	    for(long long int i=0;i<n;i++)
	    {
	       // cin>>arr[i];
	       int c;cin>>c;
	        mt.insert(c);
	    }
	   // int y=0;
	   // long long int j=*max_element(arr,arr+n);
	    long long int j=*max_element(mt.begin(),mt.end());
	    for(;j>0;j--)
	    {
	        long long int count1=0;
	        auto it = mt.begin();
	        for(long long int y=0;y<n;y++)
	        {
	           // if(arr[y] > j)
	            if(*it > j)
    	        {
    	           // count1+= arr[y]/j;
    	            count1+= *it/j;
    	        }
    	        it++;
	        }
	        
	        if(n+count1>a)
	        {
	            break;
	        }
	    }
	    
	    cout<<j+1<<endl;
	    
	}
	return 0;
}