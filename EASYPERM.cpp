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
        
        for(int i=n;i>=1;i--)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}