#include <iostream>
using namespace std;

// ------------------------ Binary operator overloading--------------------------  
// complex numbers adding by overloading + operator
class complex{
	private:
		float real;
		float img;
	public:
		complex(){
			real=0.0; 
			img=0.0;
			}
		complex(float real, float img){
			this->real=real;
			this->img=img;
		}
		complex operator + (complex &c){
			complex temp;
			temp.real=this->real+c.real;
			temp.img=this->img+c.img;
			return temp;
		}
		void showComplex(){
			cout<<real<<" + "<<img<<"j"<<endl;
		}

};

		
int main() {
	
	complex c1=complex(4.5, 6.5);
	complex c2=complex(2.3,4.8);
	// complex c3=c1+c2;              // simple approach
	complex c3=c1.operator+(c2);
	c3.showComplex();

 return 0;
}

// ---------------------------------------------------------------------------------

// Question----> WAP in C++ to add durations (h, m, s) by overloading + operator

class duration{
	private:
		int hr, min, sec;
	public:
		duration(){
			hr=0.0;
			min=0.0;
			sec=0.0;
			}
		duration(int hr, int min, int sec){
			this->hr=hr;
			this->min=min;
			this->sec=sec;
		}
		duration operator + (duration &d){
			duration temp;
			temp.sec=this->sec + d.sec;
			temp.min=this->min + d.min + (temp.sec/60);
			temp.hr=this->hr + d.hr + (temp.min/60);
			temp.sec=temp.sec%60;
			temp.min=temp.min%60;

			return temp;
		}
	
		void showDuration(){
			cout<<"Duration is : "<<hr <<" hr, "<<min <<" min, "<<sec <<" sec, "<<endl;
		}
};
		
int main() {
	duration d1 = duration(2,35,58);
	duration d2 = duration(3,22,41);
	duration d3 = d1.operator+ (d2);
	d3.showDuration();
	return 0;
}




