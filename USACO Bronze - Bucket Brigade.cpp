#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){


  	ios_base::sync_with_stdio(0); cin.tie(0); // see Fast Input & Output
	freopen("buckets.in","r",stdin);
	freopen("buckets.out","w",stdout);


int bi, bj, ri, rj, li, lj;
for(int i = 0; i < 10; i++){
  string row;
  cin >> row;

  for(int j = 0; j < 10; j++){
    if (row[j] == 'B'){
      bi = i;
      bj = j;
    } else if(row[j] == 'R'){
      ri = i;
      rj = j;
    }else if(row[j] == 'L'){
      li = i;
      lj = j;
    }
  }
}

int c = abs(bi - li) + abs(bj-lj) -1;

if(bi == li && li == ri && ((lj < rj && rj < bj) || (bj < rj && rj < lj))){
  c +=2;
} 

if(bj == lj && lj == rj && ((li < ri && ri < bi) || (bi < ri && ri < li))){
  c +=2;
}

cout << c;

}

