#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

 double Males, Females;

 cout << "Enter the number of male students: ";
 cin >> Males;

 cout << "Enter the number of female students: ";
 cin >> Females;

 cout << "For the 42 students in the class the male and female percentages are: " << endl;


 double Males_Percent = (Males / (Males + Females)) * 100 ;
 double Females_Percent = (Females / (Males + Females)) * 100;

 cout << "Males: " << Males_Percent << "%" << endl;
 cout << "Females: " << Females_Percent << "%";




}
