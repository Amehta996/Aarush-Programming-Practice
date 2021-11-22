#include <iostream>

using namespace std;


int main() {

long long t;
cin >> t;
long long n = (t - (t % 10))/5;


if(t % 5 == 0){
  cout << t/5;
}else if (t % 10 <= 5){
cout << 1 + n;
} else{
cout << 2+n;
}
} 