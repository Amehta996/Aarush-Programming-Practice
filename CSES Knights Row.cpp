#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){

 

int a;
cin >> a;

cout << 0 << "\n";
for(long long i = 2; i <= a; i++){
  cout << ((i*i) * (i*i-1)/2) -4* (i-2) * (i-1) << "\n";
}
}