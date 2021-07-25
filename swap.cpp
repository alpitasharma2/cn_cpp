#include <iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"enter a and b: "<<endl;
    cin >> a;
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<endl;
    cout<<b;

    return 0;

}
