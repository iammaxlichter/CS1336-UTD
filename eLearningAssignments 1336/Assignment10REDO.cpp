/*This program displays the total number of non-alphabet, uppercase, lowercase, total alphabet, and total characters
along with how many times each individual uppercase and lowercase letter is read in a file*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {

    const int ARRAYSIZE = 26; //Array size

    //Opening up my file
    ifstream inFile;
    inFile.open("Ass10_fileread.txt");

    //If the file doesn't exist, this will run
    if (!inFile){
       cout << "Can't open file\n";
       return 0;
    }


    //Creating and initializing my counting variables
    int LowerAlpha = 0;
    int UpperAlpha = 0;
    int NonAlpha = 0;
    int TotalCharacter = 0;
    int AlphaTotal = 0;

    char ch; //for reading the file, character by character

    //Creates two arrays and sets all index's of it to 0
    int count[26];
    int count2[26];
    for(int i=0;i<26;i++){
    count[i] = 0;
    count2[i] = 0;
    }

    //Starting to read the file
    while (inFile >> ch){

        TotalCharacter++; //the whole file has characters, so from the start, the character counter starts adding

        /* for every character in which the ASCII value is greater than or equal to ' ' and less than
        or equal to '@', the counter for non-alphabet characters is added to */
        if (ch >= ' ' && ch <= '@'){
            NonAlpha++;
        }

        /* for every character in which the ASCII value is greater than or equal to 'A' and less than
        or equal to 'Z', the counter for uppercase characters and TOTAL alphabet characters is added to.
        Along with that, the array is index'd with letters A-Z*/
        if (ch >= 'A' && ch <= 'Z'){
            UpperAlpha++;
            AlphaTotal++;
            count2[ch-'A']++;
        }

        /* for every character in which the ASCII value is greater than or equal to 'a' and less than
        or equal to 'z', the counter for lowercase characters and TOTAL alphabet characters is added to.
        Along with that, the array is index'd with letters a-z*/
        if (ch >= 'a' && ch <= 'z'){
            LowerAlpha++;
            AlphaTotal++;
            count[ch-'a']++;
        }
    }

    //Displaying the non-alphabet, uppercase, lowercase, total alphabet, and total characters
    cout << "The number of non alphabets is " << NonAlpha << "\n";
    cout << "The number of upper case alphabets is " << UpperAlpha << "\n";
    cout << "The number of lower case alphabets alphabets is " << LowerAlpha << "\n";
    cout << "The number of  alphabets is " << AlphaTotal << "\n";
    cout << "The number of characters is " << TotalCharacter << "\n\n";

    /*This for loop runs through the size of the count2 array and if the index equates to zero, nothing it outputted, and else if
    any other condition follows, the index character is displayed + the index position + how many times the character is read in the file*/
    for(int i=0;i<ARRAYSIZE;i++){
        if (count2[i] == 0){
          cout << "";
       }
       else{
          cout << "The letter " << char(i+'A')<< " in index " << i << " occurs " <<count2[i]<<" times\n";
       }
    }

    //Displaying total uppercase letters
    cout << "The total number of uppercase letters are " << UpperAlpha << "\n\n";

    /*This for loop runs through the size of the count array and if the index equates to zero, nothing it outputted, and else if
    any other condition follows, the index character is displayed + the index position + how many times the character is read in the file*/
    for(int i=0;i<ARRAYSIZE;i++){
        if (count[i] == 0){
          cout << "";
       }
       else{
          cout << "The letter " << char(i+'a')<< " in index " << i << " occurs " <<count[i]<<" times\n";
       }
    }

    //Displaying total lowercase letters
    cout << "The total number of lowercase letters are " << LowerAlpha << "\n";

}
