#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){




  
int a;
int b;
int c;
array<int,7>s;

cin >> s[0] >> s[1] >> s[2] >> s[3] >> s[4] >> s[5] >> s[6];

sort(s.begin(), s.end(), greater<int>());
a = s[0] - s[1];
c = s[2] - a;
b = s[0] - c - a; 

cout << a << " "<< b << " " << c;




}