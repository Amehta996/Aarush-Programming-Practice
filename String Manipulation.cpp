#include <iostream>
#include <string>

using namespace std;
int main() {
/*string name1;
cin >> name1;
cout << name1;

string name;
getline(cin >> ws, name);
cout << name;*/

string firstName;
string lastName;
cin >> firstName >> lastName;
string initials;

cout << firstName[0] << lastName[0]<< "\n";

string first3 = firstName.substr(0,3);
string last3 = lastName.substr(0,3);

cout << first3 << " " << last3;

} 