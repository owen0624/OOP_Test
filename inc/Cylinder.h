# ifndef CYLINDER_H
# define CYLINDER_H

# include <iostream>

using namespace std;

class Cylinder
{
private:
    double radius;
    double height;
public:
    Cylinder() : radius(0), height(0) {}
    Cylinder(double r, double h){
        radius = r;
        height = h;
    }
    double SurfaceArea();
    double Volume();
    double Circumference();
    friend istream &operator>>(istream & in, Cylinder & cyl);
    friend ostream &operator<<(ostream & out, Cylinder & cyl);
};

# endif



