#include <iostream>
#include <vector>

using namespace std;
int main() {

vector<int> e;
vector<int> o;

int n;
cout << "How many integers are you going to sort:";
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

cout << "The odd numbers are: ";
for(int element : o){
  if(element == o.size()-1){
    cout << ",and " << element << " ";  
  }else{
  cout << element << ", ";
}
}
cout << "The even numbers are : ";
for(int element : e){
  cout << element << " ";
}



cout << endl;

int ecount = 0;
int ocount = 0;

for(int i = 0; i < v.size(); i ++){
  if(v[i] % 2 == 0){
    ecount++;
  } else{
    ocount++;
  }
}








}



/*}
}*/



