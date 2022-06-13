/*This program reads int's 1-100 and counts the occurrences of each one. When
The user types in 0, the program will stop reading in integers*/

#include <iomanip>
#include <iostream>

using namespace std;

int main(){

    //Creating a counter and array
    int count[101] = {0};
    int n;

    //While the user doesn't enter 0, the counter is added to with integers
    cout << "Enter the integers between 1 and 100\n";
    while(true){
        cin >> n;
        if (n == 0){
            break;
        }
        count[n]++;
    }

    //For the amount of integers entered, the program counts each number x amount of times
    for(int i = 0; i < 100; i++){
        if (count[i] != 0){
            cout << i << " occurs " << count[i] << " times\n";
        }
    }

    return 0;
}

/*Output 1 -
Enter the integers between 1 and 100
2 3 4 5 7 2 6 3 5 4 8 1 2 4 5 6 98 97 99 56 98 0
1 occurs 1 times
2 occurs 3 times
3 occurs 2 times
4 occurs 3 times
5 occurs 3 times
6 occurs 2 times
7 occurs 1 times
8 occurs 1 times
56 occurs 1 times
97 occurs 1 times
98 occurs 2 times
99 occurs 1 times*/

/*Output 2 -
Enter the integers between 1 and 100
1
2
0
1 occurs 1 times
2 occurs 1 times*/

/*Output 3 -
Enter the integers between 1 and 100
0*/

/*Output 4 -
Enter the integers between 1 and 100
1 1 1 1 1 1 1 1 1 0
1 occurs 9 times*/
