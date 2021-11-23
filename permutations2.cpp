#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int main() {

int n;
int t;
cin >> n;
t = n;
string a;


if(n == 1){
  cout << n;
  return 0;
} 

if (n>1 &&  n <=3){
cout << "NO SOLUTION";
return 0;
}


for(int m = 1; m <= n; m++){
if(m % 2 == 0){
cout << m << " ";  
}
else {
  a += to_string(m) + " ";
}

  }
  cout << a + " ";
}



