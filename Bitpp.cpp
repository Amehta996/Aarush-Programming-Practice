#include <bits/stdc++.h>
#include <vector>
using namespace std;


int main(){

long long t;
cin >> t;
long long y = 0;

while(t--){
  string n;
  cin >> n;
  if(n.find('+') != -1){
    y++;
  }else{
    y--;
  }

cin.ignore();

}

cout << y;
return 0;


}
