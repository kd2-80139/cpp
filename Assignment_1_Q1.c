#include<stdio.h>
struct Date{
    int day;
    int month;
    int year;
};
void initDate(struct Date* d){
    d->day=0;
    d->month=0;
    d->year=0;

}
void printDateOnConsole(struct Date* d){
    printf("Date: %d/%d/%d\n",d->day,d->month,d->year);
}
void acceptDateFromConsole(struct Date* d){
    printf("Enter day :");
    scanf("%d",&d->day);
    printf("Enter month :");
    scanf("%d",&d->month);
    printf("Enter year :");
    scanf("%d",&d->year);
}
int main(){
    struct Date d1;
    int i=1;
    while(i){
        printf("Menu driven \n Press 1 to init the structure \n press 2 to Accept the value \n press 3 to Print Date\n press 0 to exit\n enter your choice: ");
        scanf("%d",&i);
        switch (i)
        {
        case 1: initDate(&d1);
            break;
        case 2: acceptDateFromConsole(&d1);
            break;
        case 3: printDateOnConsole(&d1);
            break;
        case 0: printf("Byee Byee");
            break;
        default:
            printf("Wrong Choice");
            break;
        }
    }
    return 0;
}