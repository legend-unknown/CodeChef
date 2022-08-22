#include<iostream>
#include <bits/stdc++.h>
using namespace std;

long long int unknown_legend = 737679866985;

int main(){
    
    long long int num;
    cin>>num;
    
    for(long long int q=0;q<num;q++)
    {
        long long int n;
        cin>>n;
        
        int temp;
        if(n%2==0)
        {
            temp=n/2;
        }
        else
        {
            temp = (n/2)+1;
        }
        
        set<long long int> st;
        multiset<long long int> mt;
        
        for(long long int i=0;i<n;i++)
        {
            long long int a;
            cin>>a;
            
            st.insert(a);
            mt.insert(a);
        }
        
        long long int flag=0;
        
        for(auto it=st.begin();it!=st.end();it++)
        {
            if(mt.count(*it) > temp)
            {
                flag=1;
                break;
            }
        }
        
        if(flag==1)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
    
    return 0;
}