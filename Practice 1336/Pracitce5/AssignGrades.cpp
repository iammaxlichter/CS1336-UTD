/*This program assigns a letter grade for the amount of corresponding students that the user enters*/

#include <iostream>
#include <iomanip>

using namespace std;

char getGrade(int,int); // PT

//This is the function that obtains the letter grade for each corresponding student entered
char getGrade(int score, int best){

    char LetterGrade = 'F';
    if(score >= best-10){
        LetterGrade = 'A';
    }
    else if(score >= best-20){
       LetterGrade = 'B';
    }
    else if(score >= best-30){
       LetterGrade = 'C';
    }
    else if(score >= best-40){
       LetterGrade = 'D';
    }
    return LetterGrade;
}

int main(){
    //Getting the number of students
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    //Referencing the variable in my function and creating a new array with that number of students entered
    int* scores = new int[n];
    cout << "Enter " << n << " scores: ";

    //putting each corresponding grade into an array
    for (int i = 0; i < n; i++){
        cin >>scores[i];
    }

    //Getting the max of the array
    int max = scores[0];
    for(int i = 1;i<n;i++){
           if(max < scores[i]){
              max = scores[i];
        }
    }

    //Outputting everything
    for(int i = 1;i<=n;i++){
            cout << "Student " << i << " score is " << scores[i-1] << " and grade is " << getGrade(scores[i-1], max)<<endl;
    }

    return 0;
}


/*Output 1 -
 Enter number of students: 4
Enter 4 scores: cout << fixed << setprecision(1);
Student 1 score is 0 and grade is F
Student 2 score is 7930048 and grade is A
Student 3 score is 335544340 and grade is A
Student 4 score is 51332 and grade is A*/

/*Output 2-
Enter number of students: 4
Enter 4 scores:   67 98 86



43
Student 1 score is 67 and grade is D
Student 2 score is 98 and grade is A
Student 3 score is 86 and grade is B
Student 4 score is 43 and grade is F*/

/*Output 3 -
Enter number of students: 1
Enter 1 scores: 1
Student 1 score is 1 and grade is F*/

/*Output 4 -
Enter number of students: 0
Enter 0 scores:*/
