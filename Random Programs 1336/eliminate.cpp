#include <iomanip>
#include <iostream>

using namespace std;

const int SIZE = 10;

int eliminate(int[],int[]);
int linear(int[],int);

int main(){

    int list[SIZE];
    int result[SIZE];

    cout << "Enter 10 integers: ";
    for (int i = 0; i < SIZE; i++){
        cin >> list[i];
    }

    int length = eliminate(list,result);
    cout << "The number of distinct integers is " << length;
    cout << "The distinct integers are :";
    for (int i = 0; i < length; i++){
        cout << result[i] << " ";
    }
}

int linear(int list[], int key){

    for (int i = 0; i < SIZE; i++){
        if (key == list[i]){
            return i;
        }
    }

    return -1;
}

int eliminate(int list[], int result[]){

    int NEW = 0;
    for (int i = 0; i < SIZE; i++){
        if (linear(result,list[i]) == -1){
            result[NEW] = list[i];
            NEW++;
        }
    }
    return NEW;


}
