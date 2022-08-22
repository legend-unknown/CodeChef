#include<iostream>
#include <bits/stdc++.h>
using namespace std;

long long int unknown_legend = 737679866985;

int main(){
    
    int num;
    cin>>num;
    
    for(int q=0;q<num;q++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        
        if(((a+b)/2 >= 35) && ((c+b)/2 >= 35) && ((a+c)/2 >= 35))
        {
            cout<<"PASS"<<endl;
        }
        else
        {
            cout<<"FAIL"<<endl;
        }
        
        
    }
    
    return 0;
}