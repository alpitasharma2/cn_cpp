#include <iostream>

using namespace std;

int main()
{
    int i,j,n,arr[100],mid,val;
    cout<<"enter the number of elements ";
    cin>>n;
    cout<<"enter the elements of an array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the value you want to search in an array: ";
    cin>>val;
    int start=0;
    int endd=n;
    mid = (start+endd)/2;
    while(start<=endd)
    {
        if(arr[mid]==val)
        {
            cout << "element is present at index : "<<mid;
            break;
        }
        else if(val>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            endd=mid-1;
        }
         mid=(start+endd)/2;

}
    if(start>endd)
    {
       cout<<"element not found";
    }
 return 0;
}

