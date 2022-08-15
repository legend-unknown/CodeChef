#include<iostream>
#include <bits/stdc++.h>
using namespace std;

long long int unknown_legend = 737679866985;

int main(){
    
    int num;
    cin>>num;
    
    for(int q=0;q<num;q++)
    {
        long long int n;
        cin>>n;
        
        long long int flag=0;
        
        
        for(long long int i=1;i<sqrt(n);i++)
        {
            if((n - 2*i) % (2+i) == 0)
            {
                flag=1;
                break;
            }
        }
        if(n==2)
        {
            flag=0;
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
    
    return 0;
}