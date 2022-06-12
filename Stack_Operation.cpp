// Implement Stack class and display the operations.          clg lab---> 07/04/2022

#include<bits/stdc++.h>                       
using namespace std;

class Stack{
    private:
        int *s;
        int top;
        int size;

    public:
        Stack(int size){
            this->size=size;
            s = new int [size];
            top = -1;
        }

        void push(int x){
            if (top == size-1)
                {
                    cout<<"Stack Overflow"<<endl;
                }
            else
                {
                    s[++top]=x;
                }   
        }

        int pop(){
            if (top == -1)
                {
                    cout<<"Stack Underflow"<<endl;
                }
            else
                {
                    cout<<"Popped element is : "<<s[top]<<endl;
                    return s[top--];
                }   
        }

        void display(){
            cout<<"Now the array elements are : "<<endl;
            for (int i = 0; i <= top; i++)
            {
                cout<<s[i]<<endl;
            }           
        }
};


int main() {
    int n;
    cout<<"enter size of the array : "<<endl;
    cin>>n;
    Stack s1(n);
    s1.push(22);
    s1.push(46);
    s1.push(18);
    s1.pop();
    s1.display();

    s1.push(58);
    s1.push(97);
    s1.display();
    
    return 0; 
}





