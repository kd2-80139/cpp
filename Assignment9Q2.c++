#include<iostream>
using namespace std;

    enum acc_type{
        Saving,Current,Dmat
    };
    class fund{
         int accno; 
    double amount;
    double withdraw;
    public:
    fund(int accno,double amount,double withdraw){
        this->accno=accno;
        this->amount=amount;
        this->withdraw=withdraw;
    }
    void display(){
        cout<<"Can't withdraw "<<this->withdraw<<" from account no: "<<this->accno<<" due to low balance "<<this->amount<<endl;
    }
    };
class account{
    int accno;
    string name;
    double amount;
    acc_type type;
    public:
    account(){
        this->accno=0;
        this->name="";
        this->amount=0;
    }
    account(int accno,string name,double amount,acc_type type){
        this->accno=accno;
        this->amount=amount;
        this->name=name;
    }
    void accept(){
        int n;
        cout<<"Enter Accno: " ;
        cin>>this->accno;
        cout<<"Enter Name: ";
        cin>>this->name;
        cout<<"Enter Amount";
        cin>>this->amount;
        cout<<"Enter Type"<<endl<<"press 0 for current account"<<endl;
        cout<<"press 1 for Saving account"<<endl<<"press 1 for  Dmat account"<<endl;
        cin>>n;
        this->type=acc_type(n);
        
    }
    void display(){
       cout<<"Accno: "<<this->accno<<endl;
        cout<<"Name: "<<this->name<<endl;
        cout<<"Amount: "<<this->amount<<endl; 
        cout<<"Type: "<<type;

    }
    void deposit(){
        double n;
        cout<<"Enter Amount  ";
        cin>>n;
        this->amount=this->amount+n;

    }
    void withdraw(){
        double n;
        cout<<" Enter Amout to Withdraw";
        cin>>n;
        if(n>this->amount)
        throw fund(this->accno,this->amount,n);
        this->amount=this->amount-n;
    }
    int getaccno(){
        return this->accno;
    }
    void setamount(){
        int n;
        this->amount=this->amount+n;
    }
};
int main(){
    account a[5];
    for(int i=0;i<5;i++){
         a[i].accept();
    }
    int x=1;
    while(x){
        cout<<"Enter 0 to Exit "<<endl<<"Enter 1 to deposite "<<endl<<"Enter 2 to withdraw "<<endl<<"Enter 3 to display Acc Detail";
        cin>>x;
        switch(x){
            case 0:cout<<"bye bye";
            break;
            case 1:int n;
              cout<<"Enter Acc. no";
               cin>>n;
               for(int i=0;i<5;i++){
                if(a[i].getaccno()==n){
                    a[i].setamount();
                    break;
                }}
            break;
            case 2:
              cout<<"Enter Acc. no";
               cin>>n;
               for(int i=0;i<5;i++){
                if(a[i].getaccno()==n){
                    try {
                        a[i].withdraw();
                    }
                    catch (fund e){
                        e.display();
                    }
                }
               }
                break;
            case 3:
            cout<<"Enter Acc. no";
               cin>>n;
               for(int i=0;i<5;i++){
                if(a[i].getaccno()==n){
                    a[i].display();
                    break;
                }
               }
                break;
            default: cout<<"wrong value";
            break;
        }
    }
    return 0;
}