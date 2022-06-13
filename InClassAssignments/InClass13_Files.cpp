/*This program reads the characters, words, and sentences of the given info.txt file*/

#include <stdio.h>
#include <stdlib.h>
#include <ifstream>
#include <iostream>
using namespace std;

int main() {

    string inFile;
    cin >> inFile;
    ifstream inputFile; // opening my file
    inputFile.open(inFile);


    char ch; //creating char used to scan file

    /* Creating and instantiating variables used to count. started words with one because
    the program can't read the first word. starting sentences with 1 because the program can't read the last sentence*/
    int characters, words, sentences;
    characters = 0;
    words = 1;
    sentences = 1;

    //Starts reading the file (characters)
    while (inputFile.get(ch))
        {
        if ((ch != ' ') && (ch != '\n') && (ch != '\t')) //Character counting up if there ISN'T white space, new lines, and tabs
            characters++;

        if (ch == ' ' || ch == '\n') //Word counter adding up if there IS white space or new lines
            words++;

        if (ch == '\n') //Sentence counter adding up if there IS new lines
            sentences++;
        }



    //Output statements
    cout << "\n" << endl;
    cout << "Total characters = " << characters << endl;
    cout << "Total words = " << words << endl;
    cout << "Total sentences = " << sentences << endl;

    return 0;
}

/*Output -

Total characters = 937
Total words = 182
Total sentences = 8

*/
