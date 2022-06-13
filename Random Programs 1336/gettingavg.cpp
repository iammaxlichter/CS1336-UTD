#include <iomanip>
#include <iostream>

using namespace std;

const int SIZE = 7;

int GettingAvg(int[]);

int GettingAvg(int Array[]){

    float Total = 0;

    for (int i = 0; i < SIZE; i++){
        Total += Array[i];
    }

    float Avg = float(Total / SIZE);
    cout << "The average is " << Avg << "." << endl;
}

int main(){

    int list[SIZE] = {1,4,7,5,3,6,5};

    GettingAvg(list);

}
