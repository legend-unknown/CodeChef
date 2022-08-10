//  We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include <iostream>
using namespace std;

int main() {
    int num;
    float a;
    cin>>num>>a;
    
    if(num%5==0)
    {
        if(a<num+0.5)
        {
            printf("%.2f",a);
            
        }
        else
        {
            printf("%.2f",a - num - 0.5);
        }
    }
    else
    {
        printf("%.2f",a);
    }
	return 0;
}