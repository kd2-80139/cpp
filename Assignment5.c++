#include <iostream>
using namespace std;

class student
{
private:
    int rollno;
    string name;
    string gender;
    int m1;
    int m2;
    int m3;
    static int inc;


public:
    student(){
        this->rollno=0;
        this->name="";
        this->gender="";
        this->m1=0;
        this->m2=0;
        this->m3=0;
    }
    void accept(){
        cout<<"ENTER RECORD\n";
        cout<<"enter rollno  ";
        cin>>rollno;
        this->rollno=rollno;
        cout<<"Enter Name  ";
        cin>>name;
        this->name=name;
        cout<<"Gender  ";
        cin>>gender;
        this->gender=gender;
        cout<<"Marks 1  ";
        cin>>m1;
        this->m1=m1;
        cout<<"Marks 2  ";
        cin>>m2;
        this->m2=m2;
        cout<<"marks 3  ";
        cin>>m3;
        this->m3=m3; 
    }
    void print(){
        cout<<"************************************************************************\n";
        double avg=(this->m1+this->m2+this->m3)/3;
        cout<<"ROLL NO  "<<this->rollno<<endl<<"NAME  "<<this->name<<endl<<"GENDER  "<<this->gender<<endl<<"AVG MARKS:- "<<avg<<endl;
    }
    int getroll(){
        return this->rollno;
    }
};
void search(student **a,int n){
    cout<<"ENTER ROLLNO OF STUDENT TO SEARCH  ";
    int x;
    cin>>x;
    for(int i=0;i<n;i++){
        if(x==a[i]->getroll()){
            cout<<"DATA FOUND AT "<<i+1;
            return;
        }
    }
    cout<<"DATA NOT FOUND"<<endl;
    return;
}
void sort(student **a,int n){
    {
        int i, j;
        student *temp;
        int swapped;
        for (i = 0; i < n - 1; i++) {
            swapped = 0;
            for (j = 0; j < n - i - 1; j++) {
                if (a[j]->getroll() > a[j + 1]->getroll()) {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                    swapped=1;
                }
            }
            if (swapped == 0)
                break;
        }
    }
}
int main(){
    cout<<"*************************STUDENT RECORD MANAGEMENT****************************\n\n";
    cout<<"*************************ENTER NO. OF STUDENTS********************************"<<endl;
    int n;
    cin>>n;
    student **arr=new student*[n];
    for(int i=0;i<n;i++){
        arr[i]=new student();
    }
    int k=0,i=1;
    while(i){
        printf("Menu driven \n Press 1 to Accept \n press 2 to print record \n press 3 to search record\n press 4 to sort the array\n press 0 to exit\n enter your choice: ");
        scanf("%d",&i);
        switch (i)
        {
        case 1: arr[k]->accept() ;
            k++;
            break;
        case 2:if(arr[0]->getroll()==0){
            cout<<"NO DATA ENTERED\n";
        }
        else{
         for(int i=0;i<k;i++){
            arr[i]->print();
            }
        }
            break;
        case 3: search(arr,n);
            break;
        case 4: sort(arr,n);
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