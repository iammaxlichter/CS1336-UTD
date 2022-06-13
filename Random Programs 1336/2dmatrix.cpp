#include <iomanip>
#include <iostream>

using namespace std;

const int ROW = 3;           // Number of divisions
const int COL = 3;

int main(){

    srand(time(NULL));
    int matrix1[ROW][COL] = {};


    for (int i = 0; i < ROW; i++){
        for (int j = 0; j < COL; j++){
            matrix1[i][j] = rand() % 51;
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    int matrix2[ROW][COL] = {};
    for (int k = 0; k < ROW; k++){
        for (int l = 0; l < COL; l++){
            matrix2[k][l] = rand() % 51;
            cout << matrix2[k][l] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;

    int matrix3[ROW][COL] = {0};
    for (int k = 0; k < ROW; k++){
        for (int l = 0; l < COL; l++){
            matrix3[k][l] = matrix2[k][l] * matrix1[k][l];
            cout << matrix3[k][l] << " ";
        }
        cout << endl;
    }





}
