// Calculate rising ocean levels based on the estimated rate of rising (in millimeters). This
// estimated value is read from cin into variable risingLevel
//

#include <iostream>
using namespace std;

int main()
{
   double risingLevel;

   // read in the estimated rising ocean level
   cout << "Enter the estimated ocean level" << endl;
   cin >> risingLevel;

    // YOUR CODE GOES HERE
   cout << "Level: " << risingLevel << endl; //this line displays the rising level the user inputed

   cout << "Years: 5, Rise: " << (risingLevel * 5) << endl; //this line calculates the amount of rise in 5 years by multiplying the rising level by 5
   cout << "Years: 10, Rise: " << (risingLevel * 10) << endl; //this line calculates the amount of rise in 10 years by multiplying the rising level by 10
   cout << "Years: 50, Rise: " << (risingLevel * 50) << endl; //this line calculates the amount of rise in 50 years by multiplying the rising level by 50
   return 0;
}
