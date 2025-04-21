# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
#include<bits/stdc++.h>
using namespace std;
double Cylinder :: SurfaceArea(){
    double surface;
    surface = (M_PI * 2 * radius * radius )+(M_PI * 2 * radius * height);
    return surface;
}
double Cylinder :: Volume(){
    double v;
    v = M_PI * radius * radius * height;
    return v;
}

double Cylinder :: Circumference(){
    double cir;
    cir = M_PI * 2 * radius;
    return cir;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    
    out <<fixed << setprecision(3) << "Circumference: " << cldr.Circumference() << endl;
    out << fixed << setprecision(3) << "SurfaceArea: " << cldr.SurfaceArea() << endl;
    out << fixed << setprecision(3) << "Volume: " << cldr.Volume() << endl;
    return out;
}

# endif
