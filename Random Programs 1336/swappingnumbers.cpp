#include <iomanip>
#include <iostream>

using namespace std;

void swap(int &a, int &b){

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "First int is now: " << a;
    cout << "\nSecond int is now: " << b;
}


int main(){

    int num1,num2;
    cout << "Enter the integers you want to swap places ";
    cin >> num1 >> num2;

    swap(num1,num2);


}
