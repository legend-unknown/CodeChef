#include<iostream>
#include <bits/stdc++.h>
using namespace std;

long long int unknown_legend = 737679866985;

int main(){
    
    long long int num,a;
    cin>>num>>a;
    
    long long count=0;
    
    for(long long  q=0;q<num;q++)
    {
        long long  n;
        cin>>n;
        
        if(n%a==0)
        {
            count++;
        }
        
        
    }
    
    cout<<count<<endl;
    
    return 0;
}