#include <iostream>
using namespace std;
class box
{
private:
    double length;
    double height;
    double width;
public:
    box(){
        length=0;
        height=0;
        width=0;
    }
    box(double length,double height,double width){
        this->length=length;
        this->height=height;
        this->width=width;
    }
    double volume(){
        return length*height*width;
    }
    void acceptDi(){
        cout<<"enter length";
        cin>>length;
        cout<<"enter height";
        cin>>height;
        cout<<"enter width";
        cin>>width;
    }
    void changeL(){
        cout<<"Enter new length";
        cin>>length;
    }
    void changeH(){
        cout<<"Enter new height";
        cin>>height;
    }
    void changeW(){
        cout<<"Enter new width";
        cin>>width;
    }
    void Display(){
        cout<<"Length:- "<<length<<endl;
        cout<<"Height:- "<<height<<endl;
        cout<<"Width:- "<<width<<endl;
    }

};

int main(){
    box b1;
    int i=1;
    while(i){
        printf("Menu driven \n Press 1 to init the class \n press 2 to Accept the value \n press 3 to print volume\n press 4 to change height\n press 5 to change length\n press 6 to change width\n press 7 to display all Dimensions\n press 0 to exit\n enter your choice: ");
        scanf("%d",&i);
        switch (i)
        {
        case 1: box();
            break;
        case 2: b1.acceptDi();
            break;
        case 3: cout<<"volume is :- "<<b1.volume()<<endl;
            break;
        case 4: b1.changeH();
            break;
        case 5: b1.changeL();
            break;
        case 6: b1.changeW();
            break;
        case 7: b1.Display();
            break;
        case 0: cout<<"Byee byeee\n";
            break;
        
        default:
            printf("Wrong Choice\n");
            break;
        }
    }
}