#include <iostream>
using namespace std;
class Time
{
private:
    int h;
    int m;
    int s;

public:
    Time()
    {

        this->m = 0;
        this->h = 0;
        this->s = 0;
    }
    Time(int hr, int min, int sec)
    {
       
        this->h = hr;
        this->m = min;
        this->s = sec;
    }

    int gethour()
    {
        return this->h;
    }
    int getmin()
    {
        return this->m;
    }
    int getsec()
    {
        return this->s;
    }
    void accept(){
        cout<<"enter hour";
        cin>>this->h;
        cout<<"enter min";
        cin>>this->m;
        cout<<"enter sec";
        cin>>this->s;
    }
    void printTime()
    {
        cout << "Time:- " << this->h << ":" << this->m << ":" << this->s;
    }
    void sethour()
    {
        cout << "enter hour";
        cin >> this->h;
    }
    void setmin()
    {
        cout << "enter min";
        cin >> this->m;
    }
    void setsec()
    {
        cout << "enter sec";
        cin >> this->s;
    }
};
int main()
{
    Time t1;
    Time **arr=new Time*[5];
    for(int i=0;i<5;i++){
        arr[i]=new Time;
        arr[i]->accept();
    }
    for(int i=0;i<5;i++){
        arr[i]->printTime();
    }
    for(int i=0;i<5;i++){
        delete arr[i];
    }
    delete[] arr;
    return 0;
}