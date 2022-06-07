#include<bits/stdc++.h>
using namespace std;

template<class T>
    T max_num(T &a, T &b){
        return (a>b)?a:b;
}

template<class T>
    T min_num(T a, T b){
        return (a<b)?a:b;
}

int main()
{
    int a, b;
    cout<<"Enter two numbers : "<<endl;
    cin>>a>>b;
    cout<<"The maximum number is : "<<max_num<int>(a,b)<<endl;
    cout<<"The minimum number is : "<<min_num<int>(a,b)<<endl;
    
    return 0;
}


