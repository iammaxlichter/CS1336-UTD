#include <iomanip>
#include <iostream>

using namespace std;

const int SIZE = 8;

int main(){

    int list[SIZE] = {-2, 1, 4, 7 , 2, 6, -8, 2};
    double sum = 0;

    for (int i = 0; i < SIZE; i++){
        sum += list[i];
    }

    sum = sum / 2;

    for (int i = 0; i < SIZE; i++){
        if (list[i] == sum)
            cout << "The sum is at index " << i << " and is " << list[i];

    }

}
