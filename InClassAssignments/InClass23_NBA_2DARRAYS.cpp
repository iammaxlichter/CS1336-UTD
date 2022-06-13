#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

const int NUM_PLAYERS = 25;

//Getting the max value
int Maximum(int pdata[]){
    int Maxx = 0;
    int MaxIndex;
    for (int i = 0; i <= (NUM_PLAYERS-1); i++) {
        if (pdata[i] > Maxx) {
            MaxIndex = i;
            Maxx = pdata[i];
        }
    }
    return MaxIndex;
}

//Getting the minimum value
int Minimum(int pdata[]){
    int Minn = pdata[0];
    int MinIndex;
    for (int i = 0; i <= (NUM_PLAYERS-1); i++) {
        if (pdata[i] < Minn) {
            MinIndex = i;
            Minn = pdata[i];
        }
    }
    return MinIndex;
}

//Getting the average points value
double Average(int pdata[]){
    double Total = 0.0;
    for (int i = 0 ; i < (NUM_PLAYERS-1) ; i++){
        Total = Total + pdata[i];
    }
    double Ave = (double)Total/(NUM_PLAYERS-1);
    return Ave;
}

//Displaying my array and displaying the maximum average and minimum values
int main() {

    //Creating and initializing my variables
    int pstats[25][6] = {0};
    string pname[NUM_PLAYERS][7], temp;

    //Opening my file
    ifstream inFile;
    double avg = 0.0;
    inFile.open("nbastats.txt");

    //If the file doesn't exist, this message pops up
    if (!inFile) {
        cout << "Invalid file name \n";
        return-1;
    }

    //Displaying the first line of the text file
    getline(inFile, temp);
    cout << temp << endl;


    //Reading everything into an array
    for (int i = 0; i < 25; i++) {
        for (int j = 0; j < 7; j++) {
            inFile >> pname[i][j];
        }
    }

    //Displaying everything
    for (int i = 0 ; i < 25; i++) {
        int f = 0;
        cout << left << setw(16) << pname[i][f];

        for (int j = 1; j < 7; j++) {
            cout << left << setw(8) << pname[i][j];
        }
        cout << endl;
    }

    //Converting the string to integers
    int pforstats[25];
    for (int i = 0; i < NUM_PLAYERS; i++) {
        pforstats[i] = stoi(pname[i][2]);
    }



    //Displaying my minimum, maximum, and average scores
    int Low = Minimum(pforstats);
    int High = Maximum(pforstats);
    int Ave = Average(pforstats);

    cout << "\nThe lowest scorer was " << pname[Low][0] << " with " << pname[Low][2] << " points." << endl;//final outputs
    cout << "The highest scorer was " << pname[High][0] << " with " << pname[High][2] << " points." << endl;
    cout << "Average scoring is: " << pname[Ave][2];
}

/*Output

Name            age     Points  Rebound Steals  Blocks  PF
Oladipo         25      23      2       3       0       1
Richardson      24      10      3       2       0       0
Beal            24      14      3       2       0       2
George          27      16      2       1       1       2
Lillard         27      24      7       3       0       1
James           33      37      10      1       0       3
Young           32      9       3       1       0       3
Antetokounmpo   23      25      10      1       0       3
Bogdanovic      28      18      8       0       0       1
McCollum        26      34      4       1       0       2
Lowry           32      11      6       1       0       3
Prince          24      28      6       2       0       0
Hill            31      17      4       2       1       2
Middleton       26      19      7       2       1       2
Young           29      22      9       5       3       5
Westbrook       29      23      8       4       0       6
Adams           24      18      10      0       2       2
Satoransky      26      9       4       3       1       4
Dragic          31      9       4       2       0       4
Rozier          24      33      5       5       0       1
Hardaway        26      11      4       3       0       1
Cook            25      17      4       1       1       1
Williams        31      26      2       1       1       1
Rivers          25      11      1       4       0       2
Bogdanovic      25      4       1       3       0       2

The lowest scorer was Bogdanovic with 4 points.
The highest scorer was James with 37 points.
Average scoring is: 18.72*/
