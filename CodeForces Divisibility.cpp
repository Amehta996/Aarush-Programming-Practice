#include <bits/stdc++.h>
using namespace std;
int main() {

int t;
cin >> t;

int a[t],b[t];
int c[t];

for(int i = 0; i < t; i++){
  cin >> a[i] >> b[i];

  for(int j = 0; ; j++){
if(j*b[i] >= a[i]){
  c[i] = (j*(b[i])) - a[i];
  break;
}
}


}

for(int j = 0; j < t; j++){
  cout << c[j] << "\n";
}

}
