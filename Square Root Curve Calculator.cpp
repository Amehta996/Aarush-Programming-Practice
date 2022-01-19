#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
  int grade;
cout << "What grade did you get?\n";
cin >> grade;

int cg = sqrt(grade) * 10;

    cout << "Your new grade is a " << cg;
  
  } 