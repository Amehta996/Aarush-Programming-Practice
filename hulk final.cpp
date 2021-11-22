#include <bits/stdc++.h>
using namespace std;


int main(){


int n;
cin >> n;

while(n>1){
  cout << "I hate that ";
  n--;
  if(n>1){
  cout << "I love that ";
  }
  n--;
}
if(n%2 == 0){
  cout << "I love it";
} else{
  cout << "I hate it";
}
}



