#include<bits/stdc++.h>
using namespace std;
template<class T>
void bubble_sort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }   
        }
    }
}


int main()
{
    int arr[50], n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    cout<<"Enter the numbers : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Before sorting the numbers are : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    bubble_sort<int>(arr, n);
    
    cout<<"After bubble sort, the numbers are : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
