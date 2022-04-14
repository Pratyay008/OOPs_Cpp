#include <iostream>
using namespace std;
    
		
int main() {
	int * p = new int(5);                   // 'new' ---> memory allocation
	cout<<"Enter numbers : ";
	for (int i = 0; i < 5; i++)
	{
		cin>>p[i];
	}
	cout<<"Numbers are : ";
	for (int i = 0; i < 5; i++)
	{
		cout<<p[i]<<endl;
	}
	
	delete []p;						// 'delete' ----> delete the total array

	cout<<"Now the numbers are : ";
	for (int i = 0; i < 5; i++)
	{
		cout<<p[i]<<endl;                       // after deleting the array
	}

 return 0;
}
