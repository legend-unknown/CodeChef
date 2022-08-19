#include<iostream>
#include <bits/stdc++.h>
using namespace std;

long long int unknown_legend = 737679866985;

int main(){
    
    long long int num;
    cin>>num;
    
    priority_queue<pair<long long int,long long int>> p;
    
    int tempa =0;
    int tempb = 0;
    
    for(long long int q=0;q<num;q++)
    {
        long long int a,b;
        cin>>a>>b;
        
        a+= tempa;
        b+= tempb;
        
        if(a>b)
        {
            p.emplace(make_pair(a-b,1));
        }
        else if(b>a)
        {
            p.emplace(make_pair(b-a,2));
        }
        
        tempa = a;
        tempb = b;
    }
    
    cout<<p.top().second<<" "<<p.top().first<<endl;
    
    return 0;
}