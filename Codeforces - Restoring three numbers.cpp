#include <bits/stdc++.h>
using namespace std;


int main() {

long long a,b,c;
array<int,4> x;

cin>> x[0] >> x[1] >> x[2] >> x[3];


sort(x.begin(), x.end(), greater<int>());

a = x[0] - x[1];
b = x[0] - x[2];
c = x[0] - a - b;

cout << a << " " << b << " " << c << "\n";



} 