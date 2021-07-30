#include <iostream>

using namespace std;

int main()
{
    int i,j,n,arr[100],temp;
    cout<<"enter the number of elements ";
    cin>>n;
    cout<<"enter the elements of an array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=0; j<n; j++)
    {
    for(int i=0; i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    }

    for(i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
 return 0;
}

