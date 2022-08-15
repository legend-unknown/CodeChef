#include<iostream>
#include <bits/stdc++.h>
using namespace std;

long long int unknown_legend = 737679866985;

int main(){
    
    int num;
    cin>>num;
    
    for(int q=0;q<num;q++)
    {
        int n,x,y;
        cin>>n>>x>>y;
        
        multiset<int> v;
        
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            
            v.insert(a);
        }
        
        int r=0;
        for(int i=0;i<y;i++)
        {
            // int s = *min_element(v.begin(),v.end());
            
            auto it = v.begin();
            
                
                
            if(it!=v.end())
            {
                // int index = it - v.begin();
                
                int value = *it;
                int ans = value^x;
            
                // v[index] = v[index]^x;
                v.erase(it);
                v.insert(ans);
                
                if(ans<=value)
                {
                    r=y-i+1;
                    break;
                }
                
                
            }
            
        }
        if(r%2!=0)
        {
            auto it=v.begin();
            int ans=(*it)^x;
            v.erase(it);
            v.insert(ans);
        }
        
        // sort(v.begin(),v.end());
        
        for(int i:v)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}