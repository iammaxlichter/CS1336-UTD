/*This program gets displays the first 50 prime numbers*/

#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int); //PT
void printPrimeNumbers(int); //PT

//This calculates all the prime numbers anyone could want
bool isPrime(int number){

    int i;
    if (number <= 1){
        return 0;
    }
    if (number % 2 == 0&& number > 2){
        return 0;
    }
    for (i = 3; i < number / 2; i+=2){
        if (number % i == 0)
            return false;
    }
    return true;
}


//Depending on what parameter is ran through printPrimeNumbers, THAT amount is ran displaying the prime numbers
void printPrimeNumbers(int numberOfPrimes){

    int k = 2;
    int i = 0;

    while(i < numberOfPrimes){
        if(isPrime(k)){
            cout << k << endl;
            i++;
        }
        k++;
    }
}

//Running the function effective displaying the prime numbers
int main(){
    printPrimeNumbers(50);
    return 0;
}

/*Output -
2
3
5
7
11
13
17
19
23
29
31
37
41
43
47
53
59
61
67
71
73
79
83
89
97
101
103
107
109
113
127
131
137
139
149
151
157
163
167
173
179
181
191
193
197
199
211
223
227
229*/
