#include <iostream>
#include <iomanip>
using namespace std;
const int ROW = 3;           // Number of divisions
const int COL = 3;

void addMatrix(double [][COL], double [][COL], double [][COL]);
void printResult(double [][COL],double [][COL], double [][COL], char);
int main()
{
   // Enter matrix1
    srand(time(NULL));
    double matrix1[ROW][COL] = {0}; int row, col;
    cout << "Matrix1 is : ";
    cout << endl ;
    for (row = 0; row < ROW; row++)
    {
        for (col = 0; col < COL; col++)
        {
            matrix1[row][col] = (rand()%50);
            cout << matrix1[row][col] << " ";
        }
    cout << endl;
    }
    cout << endl;
    double matrix2[ROW][COL] = {0};
    cout << "Matrix2 is : ";
    cout << endl;
    for (row = 0; row < ROW; row++)
    {
        for (col = 0; col < COL; col++)
        {
            matrix2[row][col] = (rand()%50);
            cout << matrix2[row][col] << " ";
        }
        cout << endl;
    }

    cout << endl;



    double resultMatrix[ROW][COL] = {0};
    // Add two matrices and print the result
    addMatrix(matrix1, matrix2, resultMatrix);
    cout << "The addition of the matrices is " << endl;
    printResult(matrix1, matrix2, resultMatrix, '+');
  }

  /** The method for adding two matrices */
 void addMatrix(double m1[ROW][COL], double m2[ROW][COL],double m3[ROW][COL] )
  {

    for (int i = 0; i < ROW; i++)
      for (int j = 0; j < COL; j++)
        m3[i][j] = m1[i][j] + m2[i][j];


  }

  /** Print result */
   void printResult(
      double m1[ROW][COL], double m2[ROW][COL], double m3[ROW][COL], char op)
       {
        for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++)
        {
            cout << " " <<  m1[i][j];
        }


        if (i == ROW / 2)
            cout <<  "  " << op << "  " ;
        else
            cout <<  "     " ;

      for (int j = 0; j < COL; j++)
        cout << " " << m2[i][j];

          if (i == ROW / 2)
            cout <<  "  =  " ;
          else
            cout <<  "     " ;

          for (int j = 0; j < COL; j++)
            cout << " " << m3[i][j];

       cout << endl;
    }
}
