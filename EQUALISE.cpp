#include<iostream>
#include <bits/stdc++.h>
using namespace std;

long long int unknown_legend = 737679866985;

int main(){
    
    int num;
    cin>>num;
    
    for(int q=0;q<num;q++)
    {
        int a,b;
        cin>>a>>b;
        
        int flag = 0;
        
        if(a==b)
        {
            cout<<"YES"<<endl;
        }
        else if(a>b)
        {
            for(int i=b;i<=a;i*=2)
            {
                // cout<<i<<endl;
                if(i==a)
                {
                    flag =1;
                    break;
                }
            }
            
            if(flag==1)
            {
                cout<<"YES"<<endl;
            }
            else 
            {
                cout<<"NO"<<endl;
            }
        }
        else if(a<b)
        {
            for(int i=a;i<=b;i*=2)
            {
                // cout<<i<<" ";
                if(i==b)
                {
                    flag =1;
                    break;
                }
            }
            
            if(flag==1)
            {
                cout<<"YES"<<endl;
            }
            else 
            {
                cout<<"NO"<<endl;
            }
        }
        
        
    }
    
    return 0;
}