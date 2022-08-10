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
        int check = n;
        int temp = 0;
        for(int i=0;n!=0;i++)
        {
            temp = temp*10 + n%10;
            n /= 10;
        }
        // cout<<temp<<endl;
        if(temp == check)
        {
            cout<<"wins"<<endl;
        }
        else
        {
            cout<<"loses"<<endl;
        }
    }
    
    return 0;
}