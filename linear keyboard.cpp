#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >> t;
  for(int i = 0;i<t; i++){
    string f;
    cin >> f;
    string g;
    cin >> g;
    int j = 0; int k = 0;
    int leng = g.length();
   int ind= 0;
   int count = 0;
   while(g[j]!= g[leng])
   {
     count=k+1;
     k=0;
     while(g[j] != f[k])
     {
       k++;
     }
     if(j>=1)
     {
       ind = ind + abs(count-(k+1));
     }
     j++;
   }
     cout << ind << "\n";

  }
}