#include <iostream>
#include <iomanip>

using namespace std;

void reverse(string&);

void reverse(string &str){

    int first = 0;
    int length = str.length();
    int last = length - 1;
    char temp;

    while (first < last){
        temp = str[first];
        str[first] = str[last];
        str[last] = temp;
        first++;
        last--;
    }
}

int main()
{
    string str;

    cout << "Enter the name of the string: ";

    cin >> str;
    reverse(str);
    cout << "The reverse of the given string is " << str << endl;
}
