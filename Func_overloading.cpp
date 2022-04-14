#include<iostream>
using namespace std;

// same function name but parameter names and types are different         
float add(int x, int y) {
	return x+y;
}

int add(int x, int y, int z) {
	return x+y+z;
}

float add(float x, float y) {
	return x+y;
}

float add(int x, float y) {
	return x+y;
}

int main() {
	int a=10, b=20, c=30;
	float p=10.57, q=20.58;
	cout<< add(a,b) <<endl;
	cout<< add(a,b,c) <<endl;
	cout<< add(p,q) <<endl;
	cout<< add(a,q) <<endl;

    return 0;
}

// --------------------------------------------------------------------------

int fun(int a , int b=5, int c=6){      // manuelly define but from last                                  // default parameters
	return a+b+c;
}
int main() {
	
	cout<< fun(10,20,40) <<endl;    //  it will count first
	cout<< fun(10,20) <<endl;       //  10, 20 will count but c = default value
	cout<< fun(100) <<endl;
    return 0;
}
// -------------------------------------------------------------------------------

class Circle{
	private:
		float radius;                                                             // no work use of private

	public:

		float calculateArea(float radius){
			return 3.14*radius*radius;
		}
};

int main() {
	Circle obj;
	// obj.calculateArea();
	cout<<"Area is : "<<obj.calculateArea(11.23)<<endl;
    return 0;
}
// ----------------------------------------------------------------------
class Circle{
	private:
		float radius;

		void setData1(float r){
			radius=r;
		}

	public:
		void setData2(float r){
			setData1(r);
		}
		float calculateArea(){
			return 3.14*radius*radius;
		}
};

int main() {
	Circle obj;
	obj.setData2(5);    
	cout<<"Area is : "<<obj.calculateArea()<<endl;
    return 0;
}
// -------------------------------------------------------------------------------
class Parent{                          
	private:
		int data1;

	protected:                     // inheritance property of protected
		int data2;

	public:
		int data3;			
};
class Child : public Parent{           // child class inherits parent class  
	public:
		void setData(float data){
			data2=data;
			data3=data+20;
		}

		void print(){
			cout<<"Data = "<<data2<<endl;
			cout<<"Data = "<<data3<<endl;
		}
};

int main() {
	Child obj;
	obj.setData(3);
	obj.print();
    return 0;
}
// ----------------------------------------------------------------------------



















