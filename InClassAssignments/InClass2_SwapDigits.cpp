#include <iostream>
using namespace std;
int main() {

    int num1 = 95; //This is the integer that we want to swap the digits of

    int num2 = num1 / 10; //This line gives me the number divisible by 10 but not a fraction (i.e 10/3 = 3)
    int num3 = num1 % 10; //This line gives me the remainder of the number divisible by 10 (i.e 10%3 = 1)
    int num4 = num3 * 10 + num2; //This line flips the two integers of the variable typed in

    cout << "Swapping the integers in: " << num1 << " You get: " << num4 << endl; /*This line displays me
    swapping the integer that was typed in*/

   return 0;
}
