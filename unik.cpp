#include<bits/stdc++.h> 
using namespace std; 
int findUnique(int *arr, int n) {
    sort(arr, arr + n); 
    for (int i=0; i<n; i++) 
    { 
    if(arr[i]==arr[i+1])
    {
      continue;
    }
    else
    {
        return arr[i];
    }
    }
}
int main()
{ 
    int n;
    cout<<"Enter the length of array: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter numbers you want to take in array: ";
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    cout<<"\nUnique numbers in given array are: ";
    cout<<findUnique(arr, n); 
    return 0; 
}
