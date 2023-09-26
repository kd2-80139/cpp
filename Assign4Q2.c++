#include<iostream>
using namespace std;
class stack{
    private:
    int top;
    int *st;
    int length;
    public:
    stack(){
        top=-1;
        length=5;
        this->st=new int[5];
    }
    
    stack(int length){
        this->top=-1;
        this->length=length;
        this->st=new int[this->length];
    }

    void push(){
        if(top==length-1){
            cout<<"full hogya stack bass\n";
        }
        else{
            cout<<"enter value  ";
            top++;
            cin>>this->st[top];
        }
        
    }
    void pop(){
        if(top==0){
            cout<<"empty hu kaha se nikal du element Bhkkkk\n";
        }
        else{
          top--;  
        }
    }
    void peek(){
        if(top==-1){
            cout<<"Stack is empty\n";
        }
        else{
            cout<<this->st[top]<<endl;  
        }
    }
    void isempty(){
        if(top==-1)
        {
            cout<<"Stack is empty\n";
        }
        else{
            cout<<"not empty\n";
        }
    }
    void isfull(){
        if(top==length-1){
            cout<<"stack is full\n";
        }
        else{
            cout<<"not full\n";
        }
    }
    void print(){
        for(int i=0;i<=top;i++){
            cout<<this->st[i]<<endl;
        }
    }
    ~stack(){
        delete[] st; 
    }
};
int main(){
    stack s1;
    s1.push();
    s1.push();
    s1.push();
    s1.push();
    s1.push();
    s1.push();
    s1.peek();
    s1.pop();
    s1.peek();
    s1.push();
    s1.isempty();
    s1.isfull();
}