#include <iostream>
using namespace std;

int main()
{
    int i, n,sum=0;
    float arr[100];

    cout << "enter n";
    cin >> n;
    cout << endl;


    for(i = 0; i < n; i++)
    {
       cin >> arr[i];
    }


    for(i = 0 ;i < n; i++)
    {
        sum = sum+arr[i];
    }
    cout << "Sum of array elements are = " << sum;

    return 0;
}
