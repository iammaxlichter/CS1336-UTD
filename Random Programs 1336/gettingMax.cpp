#include <iomanip>
#include <iostream>

using namespace std;

const int SIZE = 6;

int GettingMax(int[]);

int GettingMax(int Array[]){

    int Index = 0;
    int max = Array[0];

    for (int i = 0; i < SIZE; i++){
        if (max < Array[i]){
            max = Array[i];
            Index = i;
        }
    }
    cout << "The max number is " << max << " at index " << Index << "." << endl;;
}

int main(){

    int list[SIZE] = {1,4,7,5,3,6};

    GettingMax(list);

}
