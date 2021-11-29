#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main() {
int t;
string n;



cin >> t;

for(int i = 0; i < t; i ++){
  cin >> n;
if(n.length() > 10){
  cout << n[0] << n.length() - 2 << n[n.length()-1] << "\n";
} else{
  cout << n << "\n";
}
}

}




