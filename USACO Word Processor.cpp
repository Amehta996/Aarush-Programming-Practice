#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){


	ios_base::sync_with_stdio(0); cin.tie(0); 
	freopen("word.in","r",stdin);
	freopen("word.out","w",stdout);


  
int n;
int k;
int wl = 0;

cin >> n >> k;

for(int i = 0; i < n; i++){
string j;
cin >> j;

wl += j.length();
 if(wl <= k){
  if(i) cout << " ";
  cout << j;
}else{
  cout << "\n" << j;
  wl = j.length();
}

}


}