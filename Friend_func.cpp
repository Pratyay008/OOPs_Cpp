#include <iostream>
using namespace std;
    
class box{                  // using friend class & friend function
	private:
		double length;
	public:
		box(){
			length=0;
		}
		friend double getlenth(box);
};

	double getlenth(box b){
		b.length=b.length+12;               // 0 + 12
		return b.length;
	}
		
int main() {
	box b;
	cout<<"The value is "<<getlenth(b)<<endl;	
    return 0;
}
