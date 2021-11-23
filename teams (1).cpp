#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){

int n;
int total = 0;

cin>> n;

while(n){
  int a,b,c;
  cin >> a >> b >> c;

  if(a+b+c > 1){
total ++;
}
n--;
} 
cout << total;
return 0;
}