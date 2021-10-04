#include<bits/stdc++.h>
using namespace std;
void countSort( int arr[], int n)
{
    //Find the max element value in the array for initializing the size of the count array
    int k = arr[0];
    for(int i=0; i<n; i++)
    {
        k = max(k, arr[i]);
    }
    //Initializing the count array 
    int count[k]={0};
    for(int i=0; i<k; i++)
    {
        count[arr[i]]++;
    }
    //Modified count array - to update each element in the count array as the sum of the previous element
    for(int i=1;i<=k; i++)
    {
        count[i] = count[i]+count[i-1];
    }
    //Initialize a new array with the original size
    int output[n];
    for(int i=n-1; i>=0; i--)
    {
        output[--count[arr[i]]] = arr[i];
    }
    //copying the output array in the original array
    for(int i=0; i<n; i++)
    {
        arr[i] = output[i];
    }
    cout<<"Sorted Array is: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    countSort(arr, n);
    
    return 0;
}