#include <iostream>
#include <cstdlib>

int main() {

  //the Magic 8 ball is talking
  std::cout << "Magic 8 Ball:\n";

  //generates random numbers to figure out what the 8 ball is going to say
  srand(time(NULL));
int answer = std::rand()%10;

switch(answer){
  case 0: std::cout <<"It is certain";
  break;
  case 1: std::cout <<"Don't count on it";
  break;
  case 2: std::cout <<"It is decidedly so";
  break;
  case 3: std::cout <<"Very doubtful";
  break;
  case 4: std::cout <<"You may rely on it";
  break;
  case 5: std::cout <<"Outlook not so good";
  break;
  case 6: std::cout <<"Signs point to yes";
  break;
  case 7: std::cout <<"Concentrate and ask again";
  break;
  case 8: std::cout <<"Reply Hazy, try again";
  break;
  case 9: std::cout <<"It is best you wait and find out for yourself";
  break;
  default: std::cout <<"I can't answer that... please try again";

}
return 0;
} 