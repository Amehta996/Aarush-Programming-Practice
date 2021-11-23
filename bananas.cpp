#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){

int k,n,w;
int cur = 0;


cin >> k >> n >> w;
for(int i = w; i > 0; i--){
  cur += k*i;
}

cur -= n;

if(cur <= 0){
  cout << 0;
}else{
  cout << cur;
}



}