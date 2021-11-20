#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>

typedef long long int ll;

using namespace std;
int main() {

ll a,b,x,y; 
long long s = 0;
cin >> a >> b >> x >> y;


ll l = min(x,y);
ll r = max(x,y);

if(a<b){
  s += abs(l-a);
  s += abs(r-b);
} else {
  s += abs(r-a);
  s += abs(l-b);
}

cout << s << endl;


return 0;
}

