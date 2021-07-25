  
#include <iostream>
using namespace std;
int reverse_digits(int n)
{
    int rem,rev=0;
    while(n!=0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    return rev;
}
int main()
{
    int n;
    cout <<"enter n: ";
    cin >>n;
    cout<<reverse_digits(n);
    return 0;
}
