#include <iomanip>
#include <iostream>

using namespace std;


const int SIZE = 8;

int linear(int list[], int key){

    for (int i = 0; i < SIZE; i++){
        if (key == list[i]){
            cout << "The key " << key << " was found at index " << i;
            return i;
        }
    }
        cout << "The element was not found";
        return -1;



}
int main()
{

    int list[SIZE] = {1, 4, 4, 2, 5, -3, 6, 2};
    int i = linear(list, 4);  // returns 1
    int j = linear(list, -4); // returns -1
    int k = linear(list, -3); // returns 5

}
