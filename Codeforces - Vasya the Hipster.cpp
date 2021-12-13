#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
  int r, b;
  int smaller = 0;
  int left;
  int bigger = 0;
  int ok;

  cin >> r >> b;

if(r > b){
  bigger += r;
  smaller += b;
}else{
  smaller += r;
  bigger += b;
}

cout << smaller << " " <<floor((bigger - smaller)/2);
}
