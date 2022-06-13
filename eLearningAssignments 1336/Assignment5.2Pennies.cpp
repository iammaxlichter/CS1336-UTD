#include <iostream>
#include<iomanip>
using namespace std;
int main(){

    //creating variables. "Pennies" is a long function because the values will go into scientific notation if too high
    long Pennies=1;
    double i,Total=0;
    int days;

    //getting the input for the amount of days worked
    cout << "For how many days did you work? ";
    cin >> days;

    //the user cannot type in a days value less than one & if they do, they're prompted that they can't and to try again
    while (days < 1)
    {
        cout << "you can't work less than 1 day\n";
        cout << "How many days did you work? ";
        cin >> days;
    }

    //title of display
    cout<<"\nDay\tPennies earned\n";

    //when i is less than the amount of days inputted, the following code will run. We divide pennies by 100 to get an accurate dollar meassurement
    while (i < days)
    {
        i++;
        cout<<i << "\t" << Pennies <<endl;
        Total += (Pennies / 100);
        Pennies *= 2;
    }

    //displaying the total amount in 2 decimal format
    cout << setprecision(2) << fixed;
    cout<< "\nTotal pay: $" << Total << endl;

return 0;
}

/* First Output trial case -

For how many days did you work? 12

Day     Pennies earned
1       1
2       2
3       4
4       8
5       16
6       32
7       64
8       128
9       256
10      512
11      1024
12      2048

Total pay: $38.00 */

/* Second Output trial case -

For how many days did you work? 28

Day     Pennies earned
1       1
2       2
3       4
4       8
5       16
6       32
7       64
8       128
9       256
10      512
11      1024
12      2048
13      4096
14      8192
15      16384
16      32768
17      65536
18      131072
19      262144
20      524288
21      1048576
22      2097152
23      4194304
24      8388608
25      16777216
26      33554432
27      67108864
28      134217728

Total pay: $2684343.00 */





