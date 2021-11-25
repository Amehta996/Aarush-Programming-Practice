#include <bits/stdc++.h>

using namespace std;
typedef long long ll;



long long factorial(int n){

if(n < 0){
  return -1;
}

int count = 0;
for(int i = 5; n/i >= 1; i *=5){
  count += n/i;
}

  return count;

}


int main(){


int n;
cin >> n;
cout << factorial(n);




}

