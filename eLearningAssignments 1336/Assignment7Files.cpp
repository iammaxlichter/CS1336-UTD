/* In this program I will be finding the average, min, and max of a file read up to 10 numbers. If the file contains more than
ten numbers, it will only read the first ten, and if it contains less than 10 numbers, it will read all of them */

#include <iostream>
#include <climits>
#include<fstream>
using namespace std;

int main ()
{

//Inputting all my file C++ stuff
fstream inputFile;
ofstream outputFile;

//Creating the strings that are used to get the user's input for the name of the file
string inputFileName, outputFileName;

//Getting the user to enter the file we are reading from and opening it
cout<<"Enter file input name: ";
cin>>inputFileName;
inputFile.open(inputFileName);

// Check if file exists, if it doesn't exist the program will end
if(!inputFile)
{
    cout<<"File cannot be opened"<<endl;
    return 0;
}

/*Creating all of the variables for which I'm trying to find the numbers for. min, max, and average are self explanatory, but
the count variable is used to count only up to 10 numbers in the text file and the variable number is what I'm reading the file with */
int min = INT_MAX;
int max = INT_MIN;
int count = 0;
double average = 0;
int number;

cout << "The numbers are:\n"; //Output statement existing to tell the user the numbers in the text file


//This while statement reads the numbers in the file
while(inputFile>>number)
{

    cout << number << "\n"; //Every time this while loop is ran through it will display the numbers in the text file line by line

    //This if statement says that is the min variable is greater than the number being read, it will set the min value to that number
    if (min>number)
    {
    min = number;
    }

    //This if statement says that is the max variable is less than the number being read, it will set the max value to that number
    if(max<number)
    {
    max = number;
    }

    average = average+number; //Every time this while loop is ran, each number in the text file is being added into a single variable

    /*Every time this while loop is ran, the count variable will go up by one, but the if statement says that if count equals to 10,
    the whole while loop will break */
    count+=1;
    if(count==10)
    {
    break;
    }
}

/* The average number in the text file is all the numbers added up into average while the while loop was
running divided by the amount of numbers added into count variable every time the while loop ran up to 10 numbers */
average = average/count;

//Displaying the average, minimum, and maximum number of the text file just read into the console
cout << "\naverage is : " << average << endl;
cout << "min is : " << min << endl;
cout << "max is : " << max << endl;

//Getting the user to enter the file we are outputting the information to and opening it
cout<<"Enter file output name: ";
cin>>outputFileName;
outputFile.open(outputFileName);

//Outputting the average, minimum, and maximum numbers of the file we inputted into a separate text file that we just opened
outputFile<< "average is : "<< average << "\nmin is : "<< min <<"\nmax is : "<< max;

//Closing both the text file with the numbers we read from and the text file in which we outputted the average, minimum, and maximum to
inputFile.close();
outputFile.close();


return 0;
}

/*  Output with num1.txt -

Enter file input name: num1.txt
The numbers are:
100
200
300
-400
500
600
-700
800

average is : 175
min is : -700
max is : 800
Enter file output name: numout1.txt */




/* Output with num2.txt -

Enter file input name: num2.txt
The numbers are:
10
20
5
73
45
85
133
634
34
123

average is : 116.2
min is : 5
max is : 634
Enter file output name: numout2.txt */


