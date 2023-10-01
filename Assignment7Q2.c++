#include <iostream>
using namespace std;
class shop
{
private:
    int id;
    string title;

protected:
    void setid()
    {
        cin >> this->id;
    }
    void settitle()
    {
        cin >> this->title;
    }
    int getid()
    {
        return this->id;
    }
    string gettitle()
    {
        return this->title;
    }

public:
    virtual void display() = 0;
    virtual void accept() = 0;
    virtual float getprice() = 0;
};
class book : public shop
{

private:
    string author;
    float price;

public:
    void display()
    {
        cout << "ID " << getid() << endl
             << "TITLE " << gettitle() << endl
             << "PRICE " << price << endl
             << "AUTHOR " << author << endl;
    }
    void accept()
    {
        cout << "ID ";
        setid();
        cout << "AUTHOR ";
        cin >> author;
        cout << "TITLE ";
        settitle();
        cout << "PRICE";
        cin >> price;
        price = price - price * 0.1;
    }
    float getprice()
    {
        return price;
    }
};
class tape : public shop
{

private:
    string artist;
    float price;

public:
    void display()
    {
        cout << "ID " << getid() << endl
             << "TITLE " << gettitle() << endl
             << "PRICE " << price << endl
             << "AUTHOR " << artist << endl;
    }
    void accept()
    {
        cout << "ID ";
        setid();
        cout << "AUTHOR ";
        cin >> artist;
        cout << "TITLE ";
        settitle();
        cout << "PRICE";
        cin >> price;
        price = price - price * 0.5;
    }
    float getprice()
    {
        return price;
    }
};
int main()
{
    shop *arr[3];
    int index = 0;
    int tot = 0;
    int choice = 1;
    while (choice)
    {
        cout << "***********MENU DRIVEN************"<<endl;
        cout << "0 for exit" << endl
             << "1 to accept books" << endl
             << "2 to accept tapes" << endl
             << "3 to display bill" << endl
             << "4 to display items" << endl;
        cout << "enter choice  ";
        cin >> choice;
        cout<<"******************************"<<endl;
        switch (choice)
        {
        case 0:
            cout << "bye bye";
            break;
        case 1:
            arr[index] = new book;//upcasting
            arr[index]->accept();
            index++;
            break;
        case 2:
            arr[index] = new tape;//upcasting
            arr[index]->accept();
            index++;
            break;
        case 3:
            for (int i = 0; i < index; i++)
            {
                tot = tot + arr[i]->getprice();
            }
            cout << "Total Bill " << tot<<endl;
            break;
        case 4:
            for (int i = 0; i < index; i++)
            {
                arr[i]->display();
            }
            break;
        default:
            cout << "wrong choice  ";
            break;
        }
    }
    return 0;
}