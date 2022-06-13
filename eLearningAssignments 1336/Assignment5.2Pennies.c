#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
long pennies=1;
double tot=0;
int i,days;
cout<<"How many days did you work? ";
cin>>days;
while(days<1)
   {
   cout<<"you can't work < 1 day\n";
    cout<<"How many days did you work? ";
    cin>>days;
    }
cout<<"Day\tcents earned\n";
for(i=1;i<=days;i++)
    {cout<<i<<"\t"<<pennies<<endl;
    tot+=pennies/100.;
    pennies*=2;
   }
cout<<"Total amount earned is: $"<<setprecision(2)<<fixed<<tot<<endl;
system("pause");
return 0;
}
