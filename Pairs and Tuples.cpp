#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main() {

pair<int, string> aPair = make_pair(3, "4.66");cout << aPair.first << " " << aPair.second << "\n";

tuple<int, string, char> aTuple = make_tuple(67, "Hello",'d');

cout << get<2>(aTuple) << " " << get<1>(aTuple) << " "<< get<0>(aTuple) << "\n";

cout << get<0>(aPair) << get<1>(aPair);
} 