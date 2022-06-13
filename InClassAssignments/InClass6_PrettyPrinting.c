
/* A program to demonstrate the use of the stream manipulators to format output.
   The program displays student names and GPA's in tabular form
*/

#include <iostream>
#include <iomanip>
#define NAME_COL_WIDTH 40
//#define FNAME_COL_WIDTH 20
//#define LNAME_COL_WIDTH 20
#define GPA_COL_WIDTH 4

using namespace std;

int main()
{
    // Display headings

    cout << "LAST NAME, FIRST NAME";
    cout << '\t';
    cout << "GPA";
    cout << endl;

    // Display the data in the table under the headings

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

    // Use stream manipulators to format

     cout << setprecision(2) << fixed;

    // Display headings
    cout << "LAST NAME, FIRST NAME";
    cout << '\t';
    cout << setw(28) << "GPA";
    cout << endl;

    // ROW 1
    cout << "Ables, Jack";
    cout << '\t';
    cout << setw(36) << 3.1;
    cout << endl;

    // ROW 2
    cout << "Westermann, Celeste";
    cout << '\t';
    cout << setw(28) << 2.0;
    cout << endl;

    // ROW 3
    cout << "Johnson, Vonda";
    cout << '\t';
    cout << setw(36) << 3.67;
    cout << endl;


    cout << "-----------------------------------------------------------------------\n";



   cout << endl;

    return 0;
}
/**

LAST NAME, FIRST NAME   GPA
Ables, Jack     3.1
Westermann, Celeste     2
Johnson, Vonda  3.67

-----------------------------------------------------------------------
LAST NAME, FIRST NAME                            GPA
Ables, Jack                                     3.10
Westermann, Celeste                             2.00
Johnson, Vonda                                  3.67
-----------------------------------------------------------------------
LAST NAME           FIRST NAME          GPA
Ables               Jack                3.10
Westermann          Celeste             2.00
Johnson             Vonda               3.67
*/
