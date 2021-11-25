#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){

 

int a;
cin >> a;
int x[a];
int y[a];
string n[a];


for(int i = 0; i < a; i++){
  cin >> x[i] >> y[i];
  int xy = x[i]+y[i];
  if(x[i] > y[i]){
    if((2*y[i] >= x[i]) && (xy % 3 == 0)){
      n[i] = "YES";
      }
      else{
        n[i] = "NO";
      }
  } else if(y[i] > x[i]){
    if((2*x[i] >= y[i]) && (xy % 3 == 0)){
      n[i] = "YES";
     
    }
    else{
      n[i] = "NO";
    }
  } else if((y[i] == x[i]) && (xy % 3 == 0)){
    n[i] = "YES";}
 else{
      n[i] = "NO";}
}
for(int j = 0; j<a; j++){
  cout << n[j] << "\n";
  
  }


}

