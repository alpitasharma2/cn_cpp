#include<iostream>
using namespace std;

int main()
{
  int n, arr[20];

  cin >> n;

  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

    //Initialize min with first element of array.
    int min = arr[0];

    //Loop through the array
    for (int i = 0; i < n; i++) {
        //Compare elements of array with min
       if(arr[i] < min)
           min = arr[i];
    }
   cout<<"Smallest element present in given array: "<< min;
    return 0;
}
