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
        
        if(a==b)
        {
            cout<<"Yes"<<endl;
        }
        else if(a>b)
        {
            int check = a-b;
            if(check%2==0)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        else if(a<b)
        {
            int check = b-a;
            if(check%2==0)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        
        
    }
    
    return 0;
}