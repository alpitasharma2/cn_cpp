#include <iostream>
using namespace std;
int product_of_digits(int n)
{
    int prod=1;
    while(n!=0){
    prod=prod*(n%10);
    n=n/10;
    }
    return prod;
}
int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin >> n;


    cout<<"product of digits of a number is: "<<product_of_digits(n);

    return 0;

}
