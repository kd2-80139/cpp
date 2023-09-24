#ifndef cylinder_h
#define cylinder_h
#include <iostream>
using namespace std;
class cylinder
{
private:
    double radius;
    double height;

public:
    cylinder();
    cylinder(double radius,double height);
    double getradius();
    double getheight();
    double getvolume();
    void setradius();
    void setheight();
    void printvolume();
};

#endif