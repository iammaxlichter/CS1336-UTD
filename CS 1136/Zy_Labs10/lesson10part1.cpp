/* This program takes the two files, a students answers to a test, and the actual comparable answers. The program will then calculate
the grade the student gets and shows all the wrong answers the student got */

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int ReadingAnswer(char Arr[] , char FileName[]){

    //Reading in a file. If the file doesn't exist, console will prompt the user
    ifstream inFile(FileName);
    if(!inFile){
        cout<<"File \"" << FileName << "\" could not be opened\n";
        exit(1);
    }

    //Creating variables to read through
    char ch;
    int InputValues = 0;

    //Reading through the file and getting all the letter grade inputs and putting it into an array
    while(inFile.get(ch)){
        if(ch != '\n'){
            Arr[InputValues] = ch;
            InputValues++;
        }
    }

    //If the text doc has too many inputs, the following will execute
    if(InputValues > 30){
        return 30;
    }
    else{
        return InputValues;
    }
}


void DisplayCalculate(char Arr[], int Size, char ch[]){

    int incorrectAnswer = 0; //To obtain # of incorrect answers

    //If both arrays at the same index do not equal each other. The answer is wrong, the following will execute and the counter goes up
    for(int i = 0 ; i < Size ; ++i){
        if(Arr[i] != ch[i]){
            cout << "Question " << i + 1 << " has incorrect answer \'" << Arr[i] << "\', the correct answer is \'" << ch[i] << "\'\n";
            incorrectAnswer += 1;
        }
    }

    //Total number of wrong answers and creates a variable for the # of right answers
    cout << incorrectAnswer << " questions were missed out of " << Size << endl;
    int correctAnswer = Size - incorrectAnswer;


    //Getting the student's percentage grade and if the student gets above a 70, they passed, if they didn't they didn't
    float Percentage = ((float)correctAnswer/(float)Size) * 100 ;
    cout << "The student grade is " << fixed << setprecision (1) << Percentage << "%\n";

    if(Percentage >= 70){
        cout << "The student passed\n";
    }
    else {
        cout << "The student failed\n";
    }
}

int main() {

    //Creating all my variables that're passed through everything
    char studentAnswer[30], correctAnswer[30];
    int numberOfStudentAnswer, numberOfCorrectAnswer;
    char studentAnswerFileName[20], correctAnswerFileName[20];

    //Getting the file of the students answers
    cout << "Enter student answers file name\n";
    cin >> studentAnswerFileName;

    //Reading through the ReadingAnswer function to make sure everything is properly executed
    numberOfStudentAnswer = ReadingAnswer(studentAnswer , studentAnswerFileName);

    //Getting the file of the correct answers
    cout << "Enter correct answer file name\n";
    cin >> correctAnswerFileName;

    //Reading through the ReadingAnswer function to make sure everything is properly executed
    numberOfCorrectAnswer = ReadingAnswer(correctAnswer , correctAnswerFileName);

    //If both files = 0, the code won't run
    if((numberOfCorrectAnswer == 0) && (numberOfStudentAnswer == 0)){
        cout << "The number of student answers and correct answers are both 0\n";
        cout << "No grade can be calculated\n";
        exit(1);

    }

    //If both files don't have the same amount of entries, the file can't run, therefore the program can't run
    if(numberOfCorrectAnswer != numberOfStudentAnswer){
        cout << "The student answers file has " << numberOfStudentAnswer << " entries and the correct answers file has " << numberOfCorrectAnswer <<" entries\n";
        cout << "Grading cannot be done if they are not the same\n";
        exit(1);
    }
    //ELSE, it calculates and displays the percentage & # of wrong answers (along with the right answers)
    else{
        DisplayCalculate(studentAnswer, numberOfStudentAnswer, correctAnswer);
    }
}
