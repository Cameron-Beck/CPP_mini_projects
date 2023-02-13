#include <iostream>

using namespace std;

int main (){

    char Grade = 'A';
    string Phrase = "Girrafe Academy";
    int age = 50;
    double gpa = 4.5;

    cout << Phrase.find("Academy", 0) << endl;
    cout << Phrase.substr(8, 3) << endl;


    return 0;
}