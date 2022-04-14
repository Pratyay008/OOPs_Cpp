//String class dynamic constructor(s) to allocate memory space for string, copy constructor,
// member function to merge two functions, destructor.             // clg lab-- Apr 7
#include<iostream>            
#include<string.h>             
using namespace std;

class string1{
    private:
        char *name;
        int length;
    public:
       string1(){
           length=0;
           name=new char [length+1];        //  dynamic constructor "new"
       }
       string1(char *c){
           length = strlen(c);
           name= new char [length+1];
           strcpy(name, c);
       }
        void display(){
            cout<<name<<endl;
        }
        void join(string1 &st1, string1 &st2){
            length = st1.length + st2.length;
            delete name;                                // don't know why delete 
            name = new char[length+1];           
            strcpy(name, st1.name);
            strcat(name, st2.name);
        }

};


int main()
{
    char *p1="Neymar ";
    string1 p2(p1), p3("Da Silva "), p4("Santos Junior"), s1,s2; 
    cout<<"first name is : ";
    p2.display();
    cout<<"middle name is : ";
    p3.display();
    cout<<"last name is : ";
    p4.display();

    s1.join(p2, p3);
    cout<<"After concatenate 1st name is : ";
    s1.display();

    s2.join(p3, p4);
    cout<<"After concatenate 2nd name is : ";
    s2.display();

    return 0;
}

















