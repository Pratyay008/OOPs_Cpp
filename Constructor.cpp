// same name of class and member functions, doesn't have any return type 
#include<iostream>
using namespace std;
class Complex{
	private:
        double real;
        double img;
    public: 
        Complex(){                          // default
            real = 0.0;                  
            img = 0.0;
        }
        Complex(double real, double img){        // parameterized
            this->real= real;
            this->img= img;
        }
        Complex(Complex &C){                    // copy
            this->real= C.real;
            this->img= C.img;
        }
        void showComplex(){
            cout<<real<<"+i"<<img;
        }
};

int main() {
    Complex c1;
    Complex c2(4.5,2.8);
    Complex c3(4.5,2.8);

    c1.showComplex();
    c2.showComplex();
    c3.showComplex();

    return 0;
}


// ----------------------------------------------------------------------------------------

class DC{                  // dynamic constructor
	int *p;
	public:
		DC(){
			p= new int[3]{10,20,30};
		}

		void show(){
			cout<<"The value are : ";
			for (int  i = 0; i < 3; i++)
			{
				cout<<p[i]<<" ";		
			}
		}
};

int main() {
	DC n1;
	n1.show();
	
}

// ------------------------------------------------------------------------------------------



