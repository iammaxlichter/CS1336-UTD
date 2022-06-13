/* In this program I will ask the user 10 addition questions and at the end display how many the user gets right. */

#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;

int main() {

    int AnsweredRight = 0; //This variable is used to count how many questions the user gets right.

    //This for loop will run 10 times based on the increments of the variable 'i'. Each run will produce different random numbers.
    for (int i = 1; i <= 10 ; i++){

        //Lines 17-19 produces and stores 2 random variables, while line 20 stores the sum of those variables.
        srand(time(NULL));
        int Random1 = 1 + (rand() % 100);
        int Random2 = 1 + (rand() % 100);
        int Correct = Random1 + Random2;

        int Answer; //This variable is used to answer the addition problem.

        //These two lines ask the addition question and store it into the variable 'Answer'.
        cout << "What is " << Random1 << " + " << Random2 << "? ";
        cin >> Answer;

        //If the user didn't answer correctly, the following code will display.
        if (Answer != Correct){
            cout << "Wrong Answer" << endl;
            cout << "Your correct answer is " << Correct << "\n" << endl;
            }

        //If the user answers the problem right, the variable storing how many questions the user gets right will add by one.
        else if (Answer == Correct){
            AnsweredRight++;
            }

        }

        //After 10 runs of the loop, the user will get a message telling them how many questions they got right.
        cout << "You have answered " << AnsweredRight << " questions correctly." << endl;

   return 0;
}


/*Output 1- What is 36 + 7? 43
What is 46 + 85? 34
Wrong Answer
Your correct answer is 131

What is 49 + 33? 35
Wrong Answer
Your correct answer is 82

What is 52 + 81? 67
Wrong Answer
Your correct answer is 133

What is 52 + 81? 34
Wrong Answer
Your correct answer is 133

What is 55 + 62? 67
Wrong Answer
Your correct answer is 117

What is 59 + 10? 54
Wrong Answer
Your correct answer is 69

What is 62 + 59? 75
Wrong Answer
Your correct answer is 121

What is 62 + 59? 34
Wrong Answer
Your correct answer is 121

What is 65 + 39? 7
Wrong Answer
Your correct answer is 104

You have answered 1 questions correctly.*/



/*Output 2- What is 43 + 25? 68
What is 60 + 31? 91
What is 66 + 60? 126
What is 73 + 56? 129
What is 86 + 14? 100
What is 89 + 62? 172
Wrong Answer
Your correct answer is 151

What is 2 + 88? 90
What is 19 + 94? 1294
Wrong Answer
Your correct answer is 113

What is 22 + 42? 39
Wrong Answer
Your correct answer is 64

What is 28 + 71? 3
Wrong Answer
Your correct answer is 99

You have answered 6 questions correctly. */



/*Output 3- What is 30 + 92? 122
What is 36 + 21? 57
What is 46 + 98? 144
What is 59 + 24? 83
What is 69 + 1? 70
What is 75 + 30? 105
What is 82 + 26? 108
What is 8 + 10? 18
What is 11 + 58? 69
What is 28 + 64? 82
Wrong Answer
Your correct answer is 92

You have answered 9 questions correctly.*/



/*Output 4- What is 6 + 82? 88
What is 16 + 59? 75
What is 35 + 14? 49
What is 48 + 39? 87
What is 61 + 65? 126
What is 68 + 94? 162
What is 88 + 48? 135
Wrong Answer
Your correct answer is 136

What is 4 + 54? 58
What is 14 + 31? 45
What is 27 + 57? 84
You have answered 9 questions correctly.*/
