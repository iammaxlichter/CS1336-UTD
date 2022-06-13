#include <iostream>
#include <iomanip>

using namespace std;

bool isPalindrome(string str){

    int first;
    int last;
    int length;

    first = 0;
    length = str.length();
    last = length - 1;

    while (first < last){
        if (str[first] != str[last]){
            return 0;
        }
        first++;
        last--;
    }
    return 1;

}

int main(){

    string str;
    cout << "enter string ";
    cin >> str;

    if (isPalindrome(str)){
        cout << "palindrome";
    }
    else{
        cout << "not palindrome";
    }


}
