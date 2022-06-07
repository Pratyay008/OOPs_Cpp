#include<bits/stdc++.h>
using namespace std;

// --------------------------1st method
// template<class T>
//     void swap1(T &a, T &b){      // swap1() as in c++ there is an inbuilt function called swap()
//         T temp;
//         temp = a;
//         a = b;
//         b = temp;        
// }


// ---------------------------2nd method
template<class T>
    void swap1(T *a, T *b){      
        T temp;
        temp = *a;
        *a = *b;
        *b = temp;        
}



int main()
{
    int a, b;
    cout<<"Enter two numbers : "<<endl;
    cin>>a>>b;
    cout<<"Before swap the numbers are : "<<a<<" and "<<b<<endl;
    // ------------1st method
    // swap1<int>(a,b);
    // ------------2nd method
    swap1<int>(&a,&b);
    cout<<"After swap the numbers are : "<<a<<" and "<<b<<endl;
    
    return 0;
}


