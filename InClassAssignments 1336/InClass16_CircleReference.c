#include <iostream>

using namespace std;

const double PI = 3.14;

void Circle(double Radius, int &Diameter, double &Area, double &Circumference){
   Diameter = 2 * Radius;
   Area = PI * (Radius * Radius);
   Circumference = 2 * PI * Radius;
}

int main()
{
   int Radius, Diameter;
   double Area, Circumference;
   cout<<"Enter radius: ";
   cin>>Radius;

   Circle(Radius,Diameter,Area,Circumference);
   cout<<"Diameter = "<<Diameter<<endl;
   cout<<"Area = "<<Area<<endl;
   cout<<"Circumference = "<<Circumference<<endl;
   return 0;
}
