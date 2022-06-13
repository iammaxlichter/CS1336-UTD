/*This program displays a series of stars using a bunch of nested loops.*/

#include <iostream>
#include<iomanip>
using namespace std;
int main(){

   //Creating the variables used in the nested loops. q is basically rows in this program.
   int i, j, k, n;
   int q = 5;

   //Main for loop that controls the lines
   for(i = 1; i <= 5; i++){
       //nested for loop that displays the first and seconds parts
       for(n = 1; n <= 2; n++){
           for(k = 1; k <= i; k++){
               cout<<"*";//Prints first & second part in a line.
           }
           //When 'n' equals 1, it will print out the spaces in between the sections.
           if(n == 1){
               for(j = 1; j <= 15-2 * i;j++){
               cout<<" ";//Prints spaces between first and second part sections.
               }
           }
       }

       //This loop prints out the spaces after the first two lines
       for(j = 1; j <= 9; j++){
           cout<<" ";//Prints spaces after first two parts completed a line.
       }

       //This for loop prints out the stars on the third and fourth
       for(j = 1; j <= 2; j++){
           for(k = 1; k <= q; k++){
               cout<<"*";//Prints third and fourth parts on a line.
           }

           //This loop prints out the spaces after the third and fourth lines
           if(j == 1){
               for(n = 1; n <= 15-2 * q; n++){
                   cout<<" ";//Prints spaces between third and fourth lines.
               }
           }
       }
       q--; //q goes down by one each iteration.
       cout << endl; //Prints a new line after a line is completed.

   }

    return 0;
}

/* Output -
*             *         *****     *****
**           **         ****       ****
***         ***         ***         ***
****       ****         **           **
*****     *****         *             * */
