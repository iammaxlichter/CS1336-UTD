/* A program to demonstrate the use of the stream manipulators to format output.
   The program displays student names and GPA's in tabular form
*/

#include <iostream>
#include <iomanip>
#define NAME_COL_WIDTH 40
#define FNAME_COL_WIDTH 20
#define LNAME_COL_WIDTH 20
#define GPA_COL_WIDTH 4

using namespace std;

int main()
{

    // Display headings
    cout << "LAST NAME, FIRST NAME";
    cout << '\t';
    cout << "GPA";
    cout << endl;

    // ROW 1
    cout << "Ables, Jack";
    cout << '\t';
    cout << 3.1;
    cout << endl;

    // ROW 2
    cout << "Westermann, Celeste";
    cout << '\t';
    cout << 2.0;
    cout << endl;

    // ROW 3
    cout << "Johnson, Vonda";
    cout << '\t';
    cout << 3.67;
    cout << endl;
    cout << endl;


    cout << "-----------------------------------------------------------------------\n";


    cout << setprecision(2) << fixed;

    // Display headings
    cout << left << setw(NAME_COL_WIDTH) << "LAST NAME, FIRST NAME";
    cout << '\t';
    cout << right << setw(GPA_COL_WIDTH) << "GPA";
    cout << endl;

    // ROW 1
    cout << left << setw(NAME_COL_WIDTH) << "Ables, Jack";
    cout << '\t';
    cout << right;
    cout << setw(GPA_COL_WIDTH) << 3.1;
    cout << endl;

    // ROW 2
    cout << left << setw(NAME_COL_WIDTH) << "Westermann, Celeste";
    cout << '\t';
    cout << setw(GPA_COL_WIDTH) << 2.0;
    cout << endl;

    // ROW 3
    cout << left << setw(NAME_COL_WIDTH) << "Johnson, Vonda";
    cout << '\t';
    cout << setw(GPA_COL_WIDTH) << 3.67;
    cout << endl;


    cout << "-----------------------------------------------------------------------\n";


    // Display headings
    cout << left << setw(LNAME_COL_WIDTH) << "LAST NAME" << left << setw(FNAME_COL_WIDTH) << "FIRST NAME" << right << setw(GPA_COL_WIDTH) << "GPA" << endl;

    // ROW 1
    cout << left << setw(LNAME_COL_WIDTH) << "Ables" << left << setw(FNAME_COL_WIDTH) << "Jack" << right << setw(GPA_COL_WIDTH) << 3.1 << endl;

    // ROW 2
    cout << left << setw(LNAME_COL_WIDTH) << "Westermann" << left << setw(FNAME_COL_WIDTH) << "Celeste" << right << setw(GPA_COL_WIDTH) << 2.0 << endl;

    // ROW 3
    cout << left << setw(LNAME_COL_WIDTH) << "Johnson" << left << setw(FNAME_COL_WIDTH) << "Vonda" << right << setw(GPA_COL_WIDTH) << 3.67 << endl;



    return 0;
}


