#include <iostream>
using namespace std;
class tollbooth
{
private:
    unsigned int cars;
    double cost;

public:
    tollbooth()
    {
        cars = 0;
        cost = 0.0;
    }
    void payingCar()
    {
        cars = cars + 1;
        cost = cost + 0.5;
    }
    void noPayCar()
    {
        cars = cars + 1;
    }
    void printOnConsole()
    {
        cout << "Total No. of Cars: " << cars << endl
             << "Total Cash Collected: " << cost << endl;
    }
};

int main()
{
    tollbooth t1;
    int i = 1;
    tollbooth();
    while (i)
    {
        printf("\n****************************************\n");
        printf("           Menu driven \n Press 1 for paying cars \n press 2 for unpaying cars \n press 3 to print\n press 0 to exit\n enter your choice: ");
        scanf("%d", &i);
        switch (i)
        {
        case 1:
            t1.payingCar();
            break;
        case 2:
            t1.noPayCar();
            break;
        case 3:
            t1.printOnConsole();
            break;
        case 0:
            cout<<"Byee Byee\n";
            break;
        default:
            cout<<"wrong choice\n";
        }
    }
}