#include <iostream>
#include <iomanip>

using namespace std;

const int SIZE = 8;

void selection(double[]);

void selection(double list[]){

    for (int i = 0; i < SIZE - 1; i++){

        double currentMin = list[i];
        int currentMinIndex = i;

        for (int j = i+1; j < SIZE; j++){
            if (currentMin > list[j]){
                currentMin = list[j];
                currentMinIndex = j;
            }
        }

        if (currentMin != i){
            list[currentMinIndex] = list[i];
            list[i] = currentMin;
        }
    }
}

int main(){

    double list[SIZE] = {-2.3,-643.2,2,45,23.4,-6.444,5,4};

    selection(list);

    for (int i = 0; i < SIZE; i++){
        cout << list[i] << " ";
    }
}
