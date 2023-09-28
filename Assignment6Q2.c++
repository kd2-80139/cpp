#include<iostream>
using namespace std;

class employee{
    private:
    int id;
    float sal;
    public:
    employee(){
        this->id=0;
        this->sal=0;
    }
    employee(int id,float sal){
        this->id=id;
        this->sal=sal;
    }
    int getid(){
        return this->id;
    }
    float getsal(){
        return this->sal;
    }
    void setsal(){
        cout<<"enter salary";
        cin>>this->sal;
        
    }
    void setid(){
        cout<<"enter id";
        cin>>this->id;
        cout<<endl;
    }
    void displayemp(){
        cout<<this->id<<endl<<this->sal;
    }
    void acceptemp(){
        this->setid();
        this->setsal();
    }
};

class manager:virtual public employee{
    private:
    float bonus;
    public:
    manager(){
        this->bonus=0;
        employee(0,0);
    }
    manager(float bonus ,int id,float sal){
        this->bonus=bonus;
        employee(id,sal);
    }
    float getbonus(){
        return this->bonus;
    }
    void setbonus(){
        cout<<"enter bonus ";
        cin>>this->bonus;
        
    }
    void displayman(){
        displayemp();
        cout<<this->bonus<<endl;

    }
    void acceptman(){
        acceptemp();
        this->setbonus();
    }
     protected:
    void display_manager(){
        cout<<this->bonus<<endl;
    }
    void accept_manager(){
        setbonus();
    }

};

class salesman :virtual public employee{
    private:
    float comm;
    public:
    salesman(){
        this->comm=0;
        employee(0,0);
    }
    salesman(float comm,int id,float sal){
        this->comm=comm;
        employee(id,sal);
    }
    float getbonus(){
        return this->comm;
    }
    void setcomm(){
        cout<<"enter comm ";
        cin>>this->comm;
        
    }
    void displaysale(){
        displayemp();
        cout<<this->comm<<endl;
        
    }
    void acceptsale(){
        acceptemp();
        this->setcomm();
    }
    protected:
    void display_salesman(){
        cout<<this->comm<<endl;
    }
    void accept_salesman(){
        setcomm();
    }
};

class sales_manager:public manager,public salesman{
    public:
    sales_manager(){
        salesman();
        manager();
    }
    sales_manager(int id,float sal,float bonus,float comm){
        salesman(comm,id,sal);
        manager(bonus,id,sal);
    }
    void display(){
        displaysale();
        display_manager();
        
    }
    void accept(){
        acceptsale();
        accept_manager();
        
    }
};

int main(){
    sales_manager s1;
    s1.accept();
    s1.display();
    return 0;
}