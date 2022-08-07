#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int num;
	cin>>num;
	
	for(int q=0;q<num;q++)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    
	    set<int> cops;
	    
	    for(int i=0;i<a;i++)
	    {
	        int a;cin>>a;
	        cops.emplace(a);
	    }
	    
	    set<int> houses;
	       // int count=0;
	    
	    
	    for(auto it = cops.begin();it!=cops.end();it++)
	    {
	        int s = *it + b*c;
	        int e = *it - b*c;
	        if(*it - b*c < 0)
	        {
	            e=1;
	        }
	        if(*it + b*c>100)
	        {
	            s=100;
	        }
	        
    	    for(int i=1;i<=100;i++)
    	    {
    	       if(i>=e && i<=s)
    	       {
    	           houses.emplace(i);
    	       }
    	    }
	        
	    }
	    
	        if(houses.empty())
	        {
	            cout<<"100"<<endl;
	        }
	        else if(houses.size()==100)
	        {
	            cout<<"0"<<endl;
	        }
	        else
	        {
	            cout<<(100 - houses.size())<<endl;
	        }

	    cops.clear();
	}
	
	
	return 0;
}