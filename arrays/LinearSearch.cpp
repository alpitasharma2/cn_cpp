#include <iostream>

using namespace std;

int main()
{
    int i,n,arr[100],searche;
    cout<<"enter the number of elements: "<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the element you want to search";
    cin>>searche;
    for(i=0;i<n;i++)
    {
        if(arr[i]==searche)
        {
            cout<<"element is present at index at: "<<i;
            break;
        }
    }
    if(i==n)
    {
        cout<<"not present";
    }

    return 0;
}

