#include <iostream>
using namespace std;


#define square1(x)(x*x)          // macro , inline function
int square2 (int x){
    return x*x;
}
int main()
{
    int a=10;
    int b=square1(a);
    int c=square2(a);
    cout<<"1st Result is : "<<b<<endl;
    cout<<"2nd Result is : "<<c<<endl;

    return 0;
}


// ----------------------------------------------------------------------------
// within class all functions are inline
class Operation{
	// private:                    // by default it will consider as private 
		float a,b,add,diff,prod;
		float div;

	public:
		void get();
		void sum();
		void product();
		void difference();
		void divide();
};
  
inline void Operation :: get(){              //  inline function
	cout<<"Enter the values :"<<endl;
	cin>>a>>b;	
}
inline void Operation::sum(){
	add=a+b;
	cout<<"Sum is : "<<add<<endl;
	
}
inline void Operation::product(){
	prod=a*b;
	cout<<"product is : "<<prod<<endl;
	
}
inline void Operation::difference(){
	diff=a-b;
	cout<<"difference is : "<<diff<<endl;
	
}
inline void Operation::divide(){
	div=a/b;
	cout<<"division is : "<<div<<endl;
	
}

int main()
{
    Operation obj;
	obj.get();
	obj.sum();
	obj.product();
	obj.difference();
	obj.divide();
    return 0;
}

// -------------------------------------------------------------------------------








