#include <iomanip>
#include <iostream>

using namespace std;

void rotatek(string&, int );

int main(){

    string str;
    cout << "Enter your string: ";
    getline(cin,str);

    int k;
    cout << "enter amt of rotations: ";
    cin >> k;


    rotatek(str,k);
    cout << str;


}

void rotatek(string &str, int k){


    int n = str.length();
    char temp;

    for(int i = 1; i <= k; i++){
        temp = str[0];

        for (int j = 0; j < n - 1; j++){
            str[j] = str[j+1];
        }

        str[n-1] = temp;
    }






}
