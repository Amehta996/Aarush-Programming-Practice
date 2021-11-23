#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); // see Fast Input & Output
	freopen("promote.in","r",stdin);
	freopen("promote.out","w",stdout);



long long bf, ba;
long long sf, sa;
long long gf, ga;
long long pf, pa;
long long gg;
long long ss;
cin >> bf>> ba >> sf >> sa >> gf >> ga >> pf >> pa;

long long pp;
pp = pa - pf;

  gg = ga - gf + pp; 
  ss = sa - sf + gg;



  cout << ss << "\n" << gg << "\n" <<pp;
}

