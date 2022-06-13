#include <iomanip>
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int SIZE = 8;

int main(){

    srand(time(NULL));

    char License[SIZE];

    for (int i = 0; i < 3; i++){
        License[i] = 'A' + rand() % 26;
    }
    cout << " hi ";
    for (int i = 3; i < 7; i++){
        License[i] = '0' + rand() % 10;
    }

    cout << "The license plate is " << License << endl;


}

