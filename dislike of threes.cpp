#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main() {
int t;
int n;
vector<int> a;
cin >> t;

for(int i = 0; i < t; i++){
  cin >> n;

 
  if((n-3 % 10 == 0) || (n%3 == 0)){
  }else{
    a.push_back(n);
  }
}
for(int j = 0; j < a.size(); j++){
  cout << a[j] << "\n";
}
}
