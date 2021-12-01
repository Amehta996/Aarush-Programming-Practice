#include <bits/stdc++.h>


using namespace std;
int main() {
  int n;
  cin >> n;
  int p[n];
  for(int i = 0; i < n; i++){
    cin >> p[i];
  }

  int ph = 0;
  for(int i = 0; i < n; i++){
    for(int j = i; j < n; j++){
      int tp = 0;
      for(int k = i; k <=j; k++){
        tp += p[k];
      }
      bool pr = false;
      for(int k = i; k<=j; k++){
        if(p[k] * (j-i+1) == tp){
          pr = true;
        }
      }
      if(pr){
        ph++;
      }
    }
  }
cout << ph;
}