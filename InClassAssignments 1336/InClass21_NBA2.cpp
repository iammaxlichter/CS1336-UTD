#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const int NUM_PLAYERS = 50; //Array size

/*This function passes both the scores and the names of the players. The function
starts off by assigning a variable to index zero and runs through the array, setting a variable
to the number if the index'd number is larger than the assigned one. */
void Maximum(int pscores[], string pfirstname[], string plastname[]){
    int Index = 0;
    double Max;
    string FirstName, LastName;
    FirstName = pfirstname[0];
    LastName = plastname[0];
    Max = pscores[0];
    for (int i = 0; i < NUM_PLAYERS ; i++){
        if (Max < pscores[i]){
            Max = pscores[i];
            FirstName = pfirstname[i];
            LastName = plastname[i];
            Index = i;

        }

    }
    cout << "The highest score is " << FirstName << " " << LastName << " at index " << Index << " with " << Max << " points\n";
}

/*This function passes both the scores and the names of the players. The function
starts off by assigning a variable to index zero and runs through the array, setting a variable
to the number if the index'd number is smaller than the assigned one. */
void Minimum(int pscores[], string pfirstname[], string plastname[]){
    int Index = 0;
    double Min;
    string FirstName, LastName;
    FirstName = pfirstname[0];
    LastName = plastname[0];
    Min = pscores[0];
    for (int i = 0; i < NUM_PLAYERS ; i++){
        if (Min > pscores[i]){
            Min = pscores[i];
            FirstName = pfirstname[i];
            LastName = plastname[i];
            Index = i;

        }

    }
    cout << "The lowest score is " << FirstName << " " << LastName << " at index " << Index << " with " << Min << " points\n";
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
    string pfirstname[NUM_PLAYERS];
    string plastname[NUM_PLAYERS];
    int i, minIndex, maxIndex;
    double avg;

    //Opening my file
    ifstream inFile;
    inFile.open("nbastatsFNLN.txt");

    //If the file doesn't exist, this message pops up
    if(!inFile){
        cout << "Invalid file name \n";
        return -1;
    }

    //Reads through the array of both names and players
    for(int i = 0; i < NUM_PLAYERS; i++){
        inFile >> pfirstname[i]; //read first name of players
        inFile >> plastname[i]; //read last name of players
        inFile >> pscores[i];//read scores of players
    }

    //outputs the names of the players and the points they score
    for (int i = 0; i < NUM_PLAYERS; i++) {
        cout << i << " " << setw(12) << left << pfirstname[i] << "\t" << setw(8)<< plastname[i] << "\t" << pscores[i] << "\n";
    }

    //Running my functions
    Maximum(pscores, pfirstname, plastname);
    Minimum(pscores, pfirstname, plastname);
    Average(pscores);

}

/*
0 Victor        Oladipo         23
1 Josh          Richardson      10
2 Bradley       Beal            14
3 Paul          George          16
4 Damian        Lillard         24
5 LeBron        James           37
6 Nick          Young           9
7 Giannis       Antetokounmpo   25
8 Bojan         Bogdanovic      18
9 CJ            McCollum        34
10 Kyle         Lowry           11
11 Taurean      Prince          28
12 George       Hill            17
13 Khris        Middleton       19
14 Thaddeus     Young           22
15 Russell      Westbrook       23
16 Steven       Adams           18
17 Tomas        Satoransky      9
18 Goran        Dragic          9
19 Terry        Rozier          33
20 Tim          Hardaway        11
21 Quinn        Cook            17
22 Lou          Williams        26
23 Austin       Rivers          11
24 Bogdan       Bogdanovic      4
25 Markieff     Morris          13
26 DeMar        DeRozan         11
27 Maurice      Harkless        16
28 DeMarre      Carroll         18
29 James        Johnson         15
30 Patrick      McCaw           8
31 Rodney       Hood            16
32 Al-Farouq    Aminu           9
33 Milos        Teodosic        15
34 Tobias       Harris          20
35 Rondae       Jefferson       15
36 Willie       Stein           14
37 Kevin        Love            20
38 Gerald       Green           25
39 Eric         Gordon          22
40 Myles        Turner          7
41 Kelly        Olynyk          12
42 DeAndre      Jordan          9
43 Joe          Ingles          4
44 LaMarcus     Aldridge        34
45 Eric         Bledsoe         23
46 Al           Horford         14
47 Isaiah       Taylor          26
48 Michael      Beasley         12
49 Patty        Mills           4
The highest score is LeBron James at index 5 with 37 points
The lowest score is Bogdan Bogdanovic at index 24 with 4 points
The average scores for all the players is 17 */
