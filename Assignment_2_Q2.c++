#include<iostream>
using namespace std;
class Address{
    private:
    string building;
    string street;
    string city;
    int pin;
    public:
    Address(){
        building="";
        street="";
        city="";
        pin=0;
    }
    Address(string building,string street,string city,int pin){
        this->building=building;
        this->street=street;
        this->city=city;
        this->pin=pin;
    }
    void accept(){
        cout<<"Enter Building Name";
        cin>>building;
        cout<<"Enter Street Name";
        cin>>street;
        cout<<"Enter city name";
        cin>>city;
        cout<<"Enter pin no";
        cin>>pin;
    }
    void display(){
        cout<<"Building name: "<<building<<endl<<" Street : "<<street<<endl<<" City: "<<city<<endl<<" pin no.: "<<pin<<endl;
    }
    string getbuilding(){
        return building;
    }
    string getstreet(){
        return street;
    }
    string getcity(){
        return city;
    }
    int getpin(){
        return pin;
    }
    void setbuilding(string building){
        this->building=building;
    }
    void setstreet(string street){
        this->street=street;
    }
    void setcity(string city){
        this->city=city;
    }
    void setpin(int pin){
        this->pin=pin;
    }

};
int main(){

    Address A1;
    A1.accept();
    A1.display();
    cout<<A1.getbuilding()<<endl;
    cout<<A1.getcity()<<endl;
    cout<<A1.getstreet()<<endl;
    cout<<A1.getpin()<<endl;
    
    A1.setbuilding("America");
    A1.setcity("Firse America");
    A1.setstreet("Again America");
    A1.setpin(123456);

    cout<<A1.getbuilding()<<endl;
    cout<<A1.getcity()<<endl;
    cout<<A1.getstreet()<<endl;
    cout<<A1.getpin()<<endl;
    return 0;

}