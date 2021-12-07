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

/*cout << "The Odd Numbers are:" ;
for(int i = 0; i < o.size(); i++){
  if(i == o.size()-1){
    cout << "and " << o[i]<< " "; 
  }else{
  cout << o[i] << ", ";
}
}*/

/*cout << "The Even Numbers are: ";
for(int i = 0; i < e.size(); i++){
  if(i == e.size()-1){
    cout << "and " << e[i] << " ";
  }else{
  cout << e[i] << ", ";
  */

  cout << "The even numbers are : ";
  for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
    if(*it % 2 == 0){
    cout <<*it << " ";
  }
  }

cout << endl;

cout << "The Odd numbers are: ";
for(vector<int>::iterator it = v.begin(); it!= v.end(); it++){
  if(*it % 2 != 0){
    cout << *it << " ";
  }
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

cout << "There are " << ocount << " odd numbers" << endl;
cout << "There are " << ecount << " even numbers" << endl;

if(ocount > ecount){
  cout << "There are " << ocount - ecount << " more odd numbers than even numbers";
} else if(ocount == ecount){
  cout << "The number of even numbers, and odd numbers are the same!";
}else{
  cout << "There are " << ecount - ocount << " more even numbers than odd numbers";
}

}

/*}
}*/



