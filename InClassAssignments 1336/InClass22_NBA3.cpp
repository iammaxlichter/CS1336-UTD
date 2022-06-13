
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const int NUM_PLAYERS = 50; //Array size

/*This function passes both the scores and the names of the players. The function
starts off by assigning a variable to index zero and runs through the array, setting a variable
to the number if the index'd number is larger than the assigned one. */
void Maximum(int pscores[], string pname[]){
    int Index = 0;
    double Max;
    string Name;
    Name = pname[0];
    Max = pscores[0];
    for (int i = 0; i < NUM_PLAYERS ; i++){
        if (Max < pscores[i]){
            Max = pscores[i];
            Name = pname[i];
            Index = i;

        }

    }
    cout << "The highest score is " << Name << " at index " << Index << " with " << Max << " points\n";
}

/*This function passes both the scores and the names of the players. The function
starts off by assigning a variable to index zero and runs through the array, setting a variable
to the number if the index'd number is smaller than the assigned one. */
void Minimum(int pscores[], string pname[]){
    int Index = 0;
    double Min;
    string Name;
    Name = pname[0];
    Min = pscores[0];
    for (int i = 0; i < NUM_PLAYERS ; i++){
        if (Min > pscores[i]){
            Min = pscores[i];
            Name = pname[i];
            Index = i;

        }

    }
    cout << "The lowest score is " << Name << " at index " << Index << " with " << Min << " points\n";
}

/*This function reads through the numbers of the scores, adds them all up and divides it by
the size of the array*/
void Average(int pscores[]){
    double Total = 0.0;
    for (int i = 0 ; i < NUM_PLAYERS ; i++){
        Total = Total + pscores[i];
    }
    double Ave = (double)Total/NUM_PLAYERS;
    cout << "The average scores for all the players is " << Ave << "\n";
}

int main()
{
    //Creating and initializing my variables
    int pscores[NUM_PLAYERS];
    string pname[NUM_PLAYERS];
    int i, minIndex, maxIndex;
    double avg;

    //Opening my file
    ifstream inFile;
    inFile.open("nbastatsFN.txt");

    //If the file doesn't exist, this message pops up
    if(!inFile){
        cout << "Invalid file name \n";
        return -1;
    }

    //Reads through the array of both names and players
    for(int i = 0; i < NUM_PLAYERS; i++){
        inFile >> pname[i]; //read name of players
        inFile >> pscores[i]; //read scores of players
    }

    //outputs the names of the players and the points they score
    for (int i = 0; i < NUM_PLAYERS; i++) {
        cout << i << " " << setw(12) << left << pname[i] << "\t" << pscores[i] << "\n";
    }

    //Running my functions
    Maximum(pscores, pname);
    Minimum(pscores, pname);
    Average(pscores);

}
