#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int main() {

int s;
int v[2];
int t[2];

cin >> s >> v[0] >> v[1] >> t[0] >> t[1];

if(t[0] + s * v[0] + t[0] == t[1]+ s * v[1] + t[1]){
  cout << "Friendship";
}else if(t[0] + s * v[0] + t[0] < t[1]+ s * v[1] + t[1] ){
  cout << "First";
} else{
  cout << "Second";
}



}



