#include <iostream>
using namespace std;
class person
{
private:
    string name;
    string add;
    date dob;

public:
    person()
    {
        this->name = "";
        this->add = "";
        date d1();
    }
    person(string name, string add, int day, int month, int year)
    {
        this->name = name;
        this->add = add;
        date d1(day, month, year);
    }
    void accept()
    {
        cout << "ENTER NAME";
        cin >> this->name;
        cout << "ENTER ADDRESS";
        cin >> this->add;
        dob.acceptDate();
    }
    void setname()
    {
        cout << "enter name  ";
        cin >> this->name;
    }
    void setadd()
    {
        cout << "enter add";
        cin >> this->add;
    }
    string getname()
    {
        return name;
    }
    string getadd()
    {
        return add;
    }
    void display()
    {
        cout << "ENTER NAME " << this->name << endl;
        cout << "ENTER ADDRESS " << this->add;
        dob.acceptDate();
    }
    date getdate()
    {
        return dob;
    }
    void setdate()
    {
        dob.acceptDate();
    }
};
class date
{
    int day;
    int month;
    int year;

public:
    date()
    {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }
    date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void acceptDate()
    {
        cout << "ENTER DAY";
        cin >> this->day;
        cout << "ENTER MONTH";
        cin >> this->month;
        cout << "ENTER YEAR";
        cin >> this->year;
    }
    void displayDate()
    {
        cout << "ENTER DAY " << this->day << endl;
        cout << "ENTER MONTH " << this->month << endl;
        cout << "ENTER YEAR " << this->year << endl;
    }
    void setday()
    {
        cout << "enter day  ";
        cin >> this->day;
    }
    void setmonth()
    {
        cout << "enter month";
        cin >> this->month;
    }
    void setyear()
    {
        cout << "enter month";
        cin >> this->month;
    }
    int getday()
    {
        return day;
    }
    int getmonth()
    {
        return month;
    }
    int getyear()
    {                                           
        return year;
    }
    bool isleap()
    {
        if ((year % 4 == 0 && year % 400 != 0) || year % 100 == 0)
        {
            return true;
        }
        else
            false;
    }
};
class employee
{
    int id;
    float sal;
    string dept;
    date joining;

public:
    employee()
    {
        this->id = 0;
        this->sal = 0;
        this->dept = "";
        date d1();
    }
    employee(int id, int sal, string dept, int day, int month, int year)
    {
        this->id = id;
        this->sal = sal;
        this->dept = dept;
        date d1(day, month, year);
    }
    void accept()
    {
        cout << "ENTER ID";
        cin >> this->id;
        cout << "ENTER SALARY";
        cin >> this->sal;
        cout << "ENTER DEPARTMENT";
        cin >> this->dept;
        joining.acceptDate();
    }
    void display()
    {
        cout << "ID " << this->id << endl;
        cout << "SALARY  " << this->sal << endl;
        cout << "DEPARTMENT " << this->dept << endl;
        joining.acceptDate();
    }
    date getdate()
    {
        return joining;
    }
    void setdate()
    {
        joining.acceptDate();
    }
    void setid()
    {
        cout << "enter Id  ";
        cin >> this->id;
    }
    void setsal()
    {
        cout << "enter sal ";
        cin >> this->sal;
    }
    void setdept()
    {
        cout << "enter dept ";
        cin >> this->dept;
    }
    int getid()
    {
        return id;
    }
    int getsal()
    {
        return sal;
    }
    string getdept()
    {
        return dept;
    }
};
int main()
{
    employee e1;
    date d1;
    person p1;
    p1.accept();
    e1.accept();
    d1.acceptDate();
    p1.display();
    e1.display();
    d1.displayDate();
    return 0;
}