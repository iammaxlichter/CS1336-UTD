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

/*Output -
0 Oladipo       23
1 Richardson    10
2 Beal          14
3 George        16
4 Lillard       24
5 James         37
6 Young         9
7 Antetokounmpo 25
8 Bogdanovic    18
9 McCollum      34
10 Lowry        11
11 Prince       28
12 Hill         17
13 Middleton    19
14 Young        22
15 Westbrook    23
16 Adams        18
17 Satoransky   9
18 Dragic       9
19 Rozier       33
20 Hardaway     11
21 Cook         17
22 Williams     26
23 Rivers       11
24 Bogdanovic   4
25 Morris       13
26 DeRozan      11
27 Harkless     16
28 Carroll      18
29 Johnson      15
30 McCaw        8
31 Hood         16
32 Aminu        9
33 Teodosic     15
34 Harris       20
35 Jefferson    15
36 Stein        14
37 Love         20
38 Green        25
39 Gordon       22
40 Turner       7
41 Olynyk       12
42 Jordan       9
43 Ingles       4
44 Aldridge     34
45 Bledsoe      23
46 Horford      14
47 Taylor       26
48 Beasley      12
49 Mills        4
The highest score is James at index 5 with 37 points
The lowest score is Bogdanovic at index 24 with 4 points
The average scores for all the players is 17 */
