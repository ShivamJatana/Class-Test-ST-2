//Name - Shivam Jatana
//Roll no - 2010991396
//Set-01
//Q1
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;//n is t0 specify the length of the array
    cout<<"Enter the length of array: ";
    cin>>n;
    int arr[n];//give the elements of array here
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    sort(arr,arr+n);// to print the output in descending order.
    for(int i=n-1;i>=0;i--){
        if(arr[i-1]!=arr[i] && arr[i]!=arr[i+1]){
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}