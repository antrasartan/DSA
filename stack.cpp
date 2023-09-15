#include<iostream>
using namespace std;

class Stack
{
    private:
      int stack[100];
      int top=-1;
    public:
     void push(int x)
     {
      
        if(top>=(99))
             cout<<"Stack overflow"<<endl;
        else
        {
            top++;
            stack[top]=x;
            cout<<"The value inserted is="<<stack[top];
        }
     }

     int pop()
     {
        int item;
        if(top<=-1)
        {
           cout<<"Stack underflow"<<endl;
        }
        else
        {
           item=stack[top];
           top--;
           return item;
        }
     }

     int peek()
     {
        int e;
        if(top==-1)
           cout<<"Stack is empty"<<endl;
        else 
         {
           return stack[top];
         }

     }
};


int main()
{
    Stack s1;
    int val,choice;
    while(1){ 
    cout<<endl;
    cout<<"Press '1' to perform push operation"<<endl;
    cout<<"Press '2' to perform pop operation"<<endl;
    cout<<"Press '3' to perform peek operation"<<endl;
    cout<<"Program will terminate if you enter any other number"<<endl;
    cout<<"Enter your choice to perform a particular operation=";
    cin>>choice;
    
    switch(choice)
    {
      case 1:   //push operation
      {
         cout<<"Enter the value to insert in the stack=";
         cin>>val;
         s1.push(val);
         break;
      }
      case 2:  //pop operation
      {
         int val;
         val=s1.pop();
         cout<<"The popped item from the stack="<<val;
         break;
      }
      case 3:  //peek operation
      {
         int elem;
         elem=s1.peek();
         cout<<"The top element in the stack is="<<elem;
         break;
      }
      default:  //wrong input
      {
         exit(1);
      }
   }
  }
    return 0;
}




