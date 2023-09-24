#include "./cylinder.h"
int main(){
    cylinder c1;
    cylinder();
    int i=1;
    while (i)
    {
        printf("\n****************************************\n");
        printf("           Menu driven \n Press 1 to get radius\n press 2 to get height \n press 3 to get volume\n press 4 to set height\n press 5 to set radius\n press 6 to print volume\n press 0 to exit\n enter your choice: ");
        scanf("%d", &i);
        switch (i)
        {
        case 1:
            cout<<"Radius:- "<<c1.getradius()<<endl;
            break;
        case 2:
            cout<<"Heigth:- "<<c1.getheight()<<endl;
            break;
        case 3:
            cout<<"Volume:- "<<c1.getvolume()<<endl;
            break;
        case 4:
            c1.setheight();
            break;
        case 5: 
            c1.setradius();
            break;
        case 6:
            c1.printvolume();
            break;
        case 0:
            cout<<"Byee Byee\n";
            break;
        default:
            cout<<"wrong choice\n";
        }
    }
    return 0;

}
