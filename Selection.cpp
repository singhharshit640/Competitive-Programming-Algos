#include<iostream>
using namespace std;
void selectionSort(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        int min = i;
        for(int j=i+1; j<n; j++)
        {
            if(a[j]<a[min])
            {
                min = j;
            }
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp; 
    }
    cout<<"After Sorting: ";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    selectionSort(a, n);
    return 0;
}