#include <iostream>
#include <iomanip>
using namespace std;
int main() {

    int total = 95;
    double statetax = .04;
    double countytax = .02;

    double totaltax = statetax + countytax;
    double totalmoney = total * totaltax;

    cout << totalmoney << endl;





   return 0;
}
