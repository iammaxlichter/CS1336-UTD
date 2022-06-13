#include <iomanip>
#include <iostream>

using namespace std;

const int SIZE = 6;

int GettingMin(int[]);

int GettingMin(int Array[]){

    int Index = 0;
    int min = Array[0];

    for (int i = 0; i < SIZE; i++){
        if (min > Array[i]){
            min = Array[i];
            Index = i;
        }
    }
    cout << "The min number is " << min << " at index " << Index << "." << endl;;
}

int main(){

    int list[SIZE] = {1,4,7,5,3,6};

    GettingMin(list);

}
