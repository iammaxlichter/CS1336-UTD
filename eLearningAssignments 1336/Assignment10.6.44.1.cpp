#include <iostream>
#include <fstream>

using namespace std;

double Non(string dog){
    ifstream inFile;
    inFile.open(dog);
    char ch;
    int nonalpha = 0;
    while (inFile >> ch){
        if (ch >= ' ' && ch <= '@'){
            nonalpha++;
        }
    }
    cout << "The number of non alphabets is " << nonalpha << "\n";
    return 0;
}

double Upper(string dog){
   ifstream inFile;
    inFile.open(dog);
    char ch;

    if (!inFile){
       cout << "Can't open file\n";
       return 0;
    }

    int count[26];

    for(int i=0;i<26;i++){
        count[i] = 0;
    }

    while(!inFile.eof()){
        inFile>>ch;
        if(ch>='A'&&ch<='Z'){
            count[ch-'A']++;
        }
    }

    int Upper = 0;
    for(int i=0;i<26;i++){
        if (count[i] == 0){
          cout << "";
       }
       else{
          Upper = Upper + count[i];
       }
    }
    cout << "The number of upper case letters are " << Upper;
    inFile.close();
    return 0;
}
double Lower(string dog){


    ifstream inFile;
    inFile.open(dog);
    char ch;

    if (!inFile){
       cout << "Can't open file\n";
       return 0;
    }

    int count[26];

    for(int i=0;i<26;i++){
        count[i] = 0;
    }
    while(!inFile.eof()){
        inFile>>ch;
        if(ch>='a'&&ch<='z'){
            count[ch-'a']++;
        }
    }
    int totallower = 0;
    for(int i=0;i<26;i++){
        if (count[i] == 0){
            cout << "";
        }
        else {
            totallower = totallower + count[i];
        }
    }
    cout << "The number of lower case alphabets alphabets is " << totallower;
    inFile.close();
    return 0;

}
double Alpha(string dog){
    ifstream inFile;
    inFile.open(dog);
    char ch;

    if (!inFile){
       cout << "Can't open file\n";
       return 0;
    }

    int count[26];

    for(int i=0;i<26;i++){
        count[i] = 0;
    }
    while(!inFile.eof()){
        inFile>>ch;
        if(ch>='a'&&ch<='z'){
            count[ch-'a']++;
        }
        if(ch>='A'&&ch<='Z'){
            count[ch-'A']++;
        }
    }
    int totalUpperAndLower = 0;
    for(int i=0;i<26;i++){
        if (i == 9){
           i = 10;
        }
        if (i == 16){
           i = 17;
        }
        if (i == 25){
           break;
        }
        totalUpperAndLower = totalUpperAndLower + count[i];
    }
    cout << "The number of  alphabets is " << totalUpperAndLower;
    inFile.close();
    return totalUpperAndLower;

}
double Char(string dog){

    ifstream inFile;
    inFile.open(dog);
    char ch;

    int characters = 0;

    while (inFile.get(ch))
        {
            characters++;
        }
    cout << "The number of characters is " << characters;
    return 0;
}


double Uppercase(string dog){
    ifstream inFile;
    inFile.open(dog);
    char ch;

    if (!inFile){
       cout << "Can't open file\n";
       return 0;
    }

    int count[26];

    for(int i=0;i<26;i++){
        count[i] = 0;
    }

    while(!inFile.eof()){
        inFile>>ch;
        if(ch>='A'&&ch<='Z'){
            count[ch-'A']++;
        }
    }

    int totalupper = 0;
    for(int i=0;i<26;i++){
        if (count[i] == 0){
          cout << "";
       }
       else{
          cout << "The letter " << char(i+'A')<< " in index " << i << " occurs " <<count[i]<<" times\n";
          totalupper = totalupper + count[i];
       }
    }
    cout << "The total number of uppercase letters are " << totalupper;
    inFile.close();
    return 0;
}
double Lowercase(string dog){
    ifstream inFile;
    inFile.open(dog);
    char ch;

    if (!inFile){
       cout << "Can't open file\n";
       return 0;
    }

    int count[26];

    for(int i=0;i<26;i++){
    count[i] = 0;
    }

    while(!inFile.eof()){
        inFile>>ch;
        if(ch>='a'&&ch<='z'){
            count[ch-'a']++;
        }
    }

    int totallower = 0;
    for(int i=0;i<26;i++){
        if (count[i] == 0){
            cout << "";
        }
        else {
            cout << "The letter " << char(i+'a')<< " in index " << i << " occurs " <<count[i]<<" times\n";
            totallower = totallower + count[i];
        }
    }
    cout << "The total number of lowercase letters are " << totallower << "\n";
    inFile.close();
    return 0;

}


int main(){
    Non("Ass10_fileread.txt");
    Upper("Ass10_fileread.txt");
    cout << "\n";
    Lower("Ass10_fileread.txt");
    cout << "\n";
    Alpha("Ass10_fileread.txt");
    cout << "\n";
    Char("Ass10_fileread.txt");

    cout << "\n\n";
    Uppercase("Ass10_fileread.txt");
    cout << "\n\n";
    Lowercase("Ass10_fileread.txt");


}



