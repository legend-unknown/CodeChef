#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int num;
	cin>>num;
	
	for(int q=0;q<num;q++)
	{
	    int n;
	    cin>>n;
	    
	    int arr[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	     int ans=0;
	    
	    for(int k=0;k<n;k++)
	    {
	        int count=0,count1 = 0;
	        for(int j=0;j<n;j++)
	        {
	            if(arr[j]<= arr[k])
	            {
	                count++;
	            }
	            else
	            {
	                count1++;
	            }
	        }
	       // cout<<count<<" "<<count1<<endl;
    	    if(count>count1)
    	    {
    	        ans++;
    	    }
	    }
	    
	    cout<<ans<<endl;
	    
	}
	return 0;
}