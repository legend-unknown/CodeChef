#include<iostream>
#include <bits/stdc++.h>
using namespace std;

long long int unknown_legend = 737679866985;

int main(){
    
    int num;
    cin>>num;
    
    int arr[10] = {6,2,5,5,4,5,6,3,7,6};
    
    for(int q=0;q<num;q++)
    {
        int n,a;
        cin>>n>>a;
        
        int sum=0;
        int check=n+a;
        
        while(check!=0)
        {
            sum+= arr[(check%10)];
            check=check/10;
        }
        
        cout<<sum<<endl;
    }
    
    return 0;
}