#include<iostream>
#include <bits/stdc++.h>
using namespace std;

long long int unknown_legend = 737679866985;

int main(){
    
    long long int num;
    cin>>num;
    
    stack<long long int> st;
    
    for(long long int q=0;q<num;q++)
    {
        long long int n;
        cin>>n;
        
        if(n==1)
        {
            long long int N;
            cin>>N;
            
            st.push(N);
        }
        else if(n==-1)
        {
            // cout<<st.size()<<endl;
            
            if(st.size()==0)
            {
                cout<<"kuchbhi?"<<endl;
                // break;
            }
            else
            {
                cout<<st.top()<<endl;
                st.pop();
            }
            
        }
    }
    
    return 0;
}