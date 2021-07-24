#include<iostream>
using namespace std;
#include<limits.h>

int main()
{
  int n, arr[20];

  cin >> n;

  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  int maxi = INT_MIN;
  int secondmax = INT_MIN;

  
  for(int i=0; i<n; i++){
        
    if(arr[i]>maxi){
      secondmax = maxi;
      maxi = arr[i];
    }

    else if(arr[i]<maxi && arr[i]>secondmax){
      secondmax = arr[i];
    }
  }

  cout<<"Second largest element is "<<secondmax;

  return 0;
}
