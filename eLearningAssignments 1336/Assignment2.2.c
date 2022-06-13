#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

 int Males, Females;

 cout << "Enter the number of male students: ";
 cin >> Males;

 cout << "Enter the number of female students: ";
 cin >> Females;

 cout << "For the 42 students in the class the male and female percentages are: " << endl;

 cout << fixed << setprecision(4);
 double Males_Percent = (Males + Females) / Males;
 double Females_Percent = (Males + Females) / Females;

 cout << "Males: " << Males_Percent << "%";
 cout << "Females: " << Females_Percent << "%";



 Male







}
