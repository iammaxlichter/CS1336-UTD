/*This program reads 3 edges of a triangle and computers the perimeter if it's valid (the sum of every pair of
every two edges is greater than the third edge*/

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    //Get the three edges
    double edge1,edge2,edge3;
    cout << "Enter three edges to a triangle: ";
    cin >> edge1;
    cin >> edge2;
    cin >> edge3;

    //This boolean 'valid' means that it is 'true' if all the conditions apply
    bool valid = (edge1 + edge2 > edge3 && edge2 + edge3 > edge1 && edge1 + edge3 > edge2);

    //If the boolean 'valid' is true (all the conditions are met), the following code will run
    if (valid == true)
        {
        int perimeter = edge1 + edge2 + edge3;
        cout << "The inputs of the edges are valid because the sum of any two edges was greater than the third edge" << endl;
        cout << "The perimeter is " << perimeter << endl;
        }

    //If the boolean valid is not true (all the conditions are not met), the following code will run
    else if (!valid)
        {
        cout << "Input is invalid" << endl;
        }

    return 0;
}

/*Output 1- Enter three edges to a triangle: 1
1
2
Input is invalid*/


/*Output 2- Enter three edges to a triangle: 12
14
16
The inputs of the edges are valid because the sum of any two edges was greater than the third edge
The perimeter is 42*/


/*Output 3- Enter three edges to a triangle: 2
16
24
Input is invalid*/


/*Output 4- Enter three edges to a triangle: 10
10
10
The inputs of the edges are valid because the sum of any two edges was greater than the third edge
The perimeter is 30*/
