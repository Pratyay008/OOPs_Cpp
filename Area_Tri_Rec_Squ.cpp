#include<iostream>
using namespace std;

class triangle{
    private:
        float height;
        float base;
    public:
        void setData(float height, float base){
            this->height=height;
            this->base=base;
        }
        float getAreaTri(){
            return 0.5*base*height;
        }
};

class rectangle{
    private:
        float height;
        float base;
    public:
        void setData(float height, float base){
            this->height=height;
            this->base=base;
        } 
        float getAreaRec(){
            return height*base;
        }

};

class square{
    private:
        float side;
    public:
        void setData(float side){
            this->side=side;
            
        } 
        float getAreaSqu(){
            return side*side;
        }

};

int main()
{
    triangle obj1;
    obj1.setData(2.2,3.4);
    cout<<"Area of triangle is : "<<obj1.getAreaTri() <<endl;

    rectangle obj2;
    obj2.setData(3.4,6.7);
    cout<<"Area of rectangle is : "<<obj2.getAreaRec() <<endl;
    
    square obj3;
    obj3.setData(5.8);
    cout<<"Area of square is : "<<obj3.getAreaSqu() <<endl;



    return 0;
}

