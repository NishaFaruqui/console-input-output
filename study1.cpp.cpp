/* Faruqui, Nishat
Week1   Homework #1    Program #2
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
string major;
string college;

cout << "What is your major?" << endl;
cin >> major; //requesting input for variable major
cout << endl;

cout << "What four-year school do you plan to attend?" << endl;
cin >> college;
cout << endl;

cout << "You will be studying " << major << " at " << college << "." << endl;

return 0;
}
