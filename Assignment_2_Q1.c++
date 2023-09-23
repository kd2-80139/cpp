#include<iostream>
#include<string>
using namespace std;
namespace Ns{
class student{
    public:
    int roll;
    string name;
    float marks;

    void initStudent(student* s){
        s->roll=0;
        s->name=' ';
        s->marks=0;
    }
    void printStudentOnConsole(student s){
        cout<<"Roll:- "<<s.roll<<endl;
        cout<<"Name:- "<<s.name<<endl;
        cout<<"Marks:- "<<s.marks<<endl;

    }
    void acceptStudentOnConsole(student *s){
        cout<<"Enter Roll no";
        cin>>s->roll;
        cout<<"Enter Name";
        cin>>s->name;
        cout<<"Enter Marks";
        cin>>s->marks;

    }

};
}
using namespace Ns;
int main(){
    student s;
    int i=1;
    while(i){
        printf("Menu driven \n Press 1 to init the structure \n press 2 to Accept the value \n press 3 to Print Detail\n press 0 to exit\n enter your choice: ");
        scanf("%d",&i);
        switch (i)
        {
        case 1: s.initStudent(&s);
            break;
        case 2: s.acceptStudentOnConsole(&s);
            break;
        case 3: s.printStudentOnConsole(s);
            break;
        case 0: printf("Byee Byee\n");
            break;
        default:
            printf("Wrong Choice\n");
            break;
        }
    }
    return 0;

}