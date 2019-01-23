/* Faruqui, Nishat
Week1   Homework #1    Program #1
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
string day; //declaring string variables for day, month, and year
string month;
string year;

cout << "What day is it today?" << endl;
cin >> day;
cout << endl;

cout << "What month is it?" << endl;
cin >> month;
cout << endl;

cout << "What year is this?" << endl;
cin >> year;
cout << endl;

cout << "Today is:\n";
//cout << day << endl;
cout << left << setw(10) << day << endl;
cout << "\t" << month << endl;
cout << "\t\t" << year << endl;

  return 0;
}
