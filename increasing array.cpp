#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int main() {
ll n,t,ans = 0, last;
cin >>n>> last;

  for(int i = 1; i < n; i ++){
    cin >> t;
    if(last > t){
      ans += last - t;
    } else{
      last = t;
    }
  }
  cout << ans;
  return 0;
}





