#include<iostream>
using namespace std;
int factorial(int n){
    if(n<0)
    throw 1;
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    char ch='y';
    int num;
    while(ch=='y'){
        ch=tolower(ch);
        if(ch=='n'){
            break;
        }
        try{
            cout<<"Enter number";
            cin>>num;
            cout<<factorial(num)<<endl;
        }
        catch (int error){
            cout<<"No -ve value allowed";
        }
        cout<<"Press y to continue "<<endl<<"Press n to exit"<<endl;
        cin>>ch;
    }
}

