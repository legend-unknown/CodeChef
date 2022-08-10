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
        
        multiset<int> mt;
        set<int> st;
        
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            
            mt.insert(a);
            st.insert(a);
            
        }
        
        if(st.size()==1)
        {
            cout<<"YES"<<endl;
        }
        else if(st.size()==n)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int arr[n];
            auto it = st.begin();
            int z=0;
            for(;it!=st.end();it++)
            {
                int p = mt.count(*it);
                arr[z]=p;
                z++;
            }
            
            sort(arr,arr+st.size());
            reverse(arr,arr+st.size());
            
            // for(int y=0;y<st.size();y++)
            // {
            //     cout<<arr[y]<<" ";
            // }
            
            
            if((arr[0]==arr[1]) && arr[0]!=n && arr[0]!=1)
            {
                // cout<<arr[0]<<" "<<arr[1]<<"NO"<<endl;
                cout<<"NO"<<endl;
            }
            else
            {
                // cout<<arr[0]<<" "<<arr[1]<<"YES"<<endl;
                cout<<"YES"<<endl;
            }
        }
    }
    
    return 0;
}