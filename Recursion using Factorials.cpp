#include <bits/stdc++.h>

using namespace std;
typedef long long ll;



long long factorial(int n){

  if(n <= 1){
    return 1;
  }else{

 return n * factorial(n-1);
   }
}


int main(){


cout << "This is a program to help calculate the factorial of a number\n" << "What number would you like to factorial?\n";
int n;
cin >> n;
cout << factorial(n);




}

