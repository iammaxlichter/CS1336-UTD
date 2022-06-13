#include <iomanip>
#include <iostream>

using namespace std;

const int SIZE = 8;

int main(){

    int list[SIZE] = {1,2,3,4,5,6,7,8};
    int index = 0;
    int key;

    cout << "Your current list is\n";
    for (int i = 0; i < SIZE; i++){
        cout << list[i] << " ";
    }

    cout << "\nEnter the index of the element you want to delete ";
    cin >> key;

    for (int i = 0; i < SIZE; i++){
        if (list[i] == list[key]){
            index = i;
        }
    }

    for (int i = index; i < SIZE; i++){
        list[i] = list[i+1];
    }

    cout << "\nYour new list is\n";
    for (int i = 0; i < SIZE - 1; i++){
        cout << list[i] << " ";
    }


}
