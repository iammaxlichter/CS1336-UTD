#include <iostream>
#include<string.h>

using namespace std;

//prototype declaration
int findGCD(int,int);
bool isPalindrome(string);

//main function begins
int main()
{
//declare variables
int num1,num2;
string theString;
bool isPalin = false;

//read user input for calculating gcd of num1 and num2
cout<<"Enter positive integer1: ";
cin>>num1;
cout<<"Enter positive integer2: ";
cin>>num2;

//call findGCD function to calculate gcd of num1 and num2
int gcd = findGCD(num1,num2);


if(gcd == -1) //if gcd is -1, input are invalid
{
cout<<"Invalid inputs given to calculate GCD."
}
else //else print gcd
{
cout<<"GCD of "<< num1 << " and "<<num2 << " is = "<<gcd;
}

cout<<endl;
