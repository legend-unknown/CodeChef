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
        int arr[n-1];
        
        for(int i=0;i<n-1;i++)
        {
            cin>>arr[i];
        }
        
        cout << *max_element(arr,arr+n-1) + accumulate(arr,arr+n-1,0)<<endl;
        
    }
    
    return 0;
}