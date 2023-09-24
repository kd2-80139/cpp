#include "./cylinder.h"
    cylinder::cylinder(){
        radius=1;
        height=1;
    }
    cylinder::cylinder(double radius,double height){
        this->radius=radius;
        this->height=height;
    }
    double cylinder::getradius(){
        return radius;
    }
    double cylinder::getheight(){
        return height;
    }
    double cylinder::getvolume(){
        return (3.14*radius*radius*height);
    }
    void cylinder::setradius(){
        cout<<"Enter New Radius:- ";
        cin>>radius;
    }
    void cylinder::setheight(){
        cout<<"Enter New Height:- ";
        cin>>height;
    }
    void cylinder::printvolume(){
        cout<<"Voulme:- "<<(3.14*radius*radius*height);
    }