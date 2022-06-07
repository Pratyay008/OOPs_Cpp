#include<bits/stdc++.h>
using namespace std;

template<class T>
void selection_sort(T arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j <n ; j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i], arr[j]);    
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

    selection_sort<int>(arr, n);
    
    cout<<"After selection sort, the numbers are : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}


