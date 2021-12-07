#include <iostream>
#include <vector>

using namespace std;
int main() {

vector<int> e;
vector<int> o;

int n;
cout << "How many integers are you going to sort: \n";
cin >> n;

vector<int> v(n);
for(int i = 0; i < v.size(); i++){
cin >> v[i];
}

for(int i = 0; i < v.size(); i++){
  if(v[i] % 2 == 0){
    e.push_back(v[i]);
  }else{
    o.push_back(v[i]);
  }
  }

cout << "The Odd Numbers are:" ;
for(int i = 0; i < o.size(); i++){
  if(i == o.size()-1){
    cout << "and " << o[i]<< " "; 
  }else{
  cout << o[i] << ", ";
}
}

cout << "The Even Numbers are: ";
for(int i = 0; i < e.size(); i++){
  if(i == e.size()-1){
    cout << "and " << e[i] << " ";
  }else{
  cout << e[i] << ", ";
}
}
}



