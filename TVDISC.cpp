#include<iostream>
#include <bits/stdc++.h>
using namespace std;

long long int unknown_legend = 737679866985;

int main(){
    
    int num;
    cin>>num;
    
    for(int q=0;q<num;q++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        
        if((a-c)>(b-d))
        {
            cout<<"second"<<endl;
        }
        else if((a-c)<(b-d))
        {
            cout<<"first"<<endl;
        }
        else
        {
            cout<<"any"<<endl;
        }
        
        
    }
    
    return 0;
}