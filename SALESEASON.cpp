#include<iostream>
#include <bits/stdc++.h>
using namespace std;

long long int unknown_legend = 737679866985;

int main(){
    
    int num;
    cin>>num;
    
    for(int q=0;q<num;q++)
    {
        int n;
        cin>>n;
        
        
        if(n<=100)
        {
            cout<<n<<endl;
        }
        else if(n<=1000)
        {
            cout<<n-25<<endl;
        }
        else if(n<=5000)
        {
            cout<<n-100<<endl;
        }
        else if(n>5000)
        {
            cout<<n-500<<endl;
        }
        
    }
    
    return 0;
}