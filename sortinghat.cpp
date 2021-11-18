#include <iostream>
int main(){
  //This is where we do the coding
  int gryffindor = 0, hufflepuff = 0, slytherin = 0, ravenclaw = 0;
  int answer1, answer2, answer3, answer4;

  //starts the quiz
  std::cout << "The Sorting hat Quiz!\n";
  std::cout<< "Q1) When I'm dead, I want people to remember me as\n" << "1) The Good \n" << "2) The Great\n" << "3) The Wise\n" << "4) The Bold\n";
  std::cin >> answer1;

if (answer1 == 1){
  hufflepuff++;
} else if(answer1 ==2){
  slytherin++;
} else if(answer1 ==3){
  ravenclaw++;
} else if(answer1 ==4 ){
  gryffindor++;
} else{
  std::cout << "Something's not quite right... Please try again\n";
}

std::cout<< "Q2) Dawn or Dusk?\n" << "\n" << "1) Dawn\n" << "2) Dusk\n";
std::cin >> answer2; 

if (answer2 == 1){
  gryffindor++;
  ravenclaw++;
} else if(answer2 ==2){
  slytherin++;
  hufflepuff++;
} else{
    std::cout << "Something's not quite right... Please try again\n";
}

std::cout<< "Q3) Which instrument do you enjoy to listen to the most?\n" << "1) The violin \n" << "2) The trumpet\n" << "3) The piano\n" << "4) The drum\n"; 
std::cin >> answer3;
if (answer3 == 1){
  slytherin++;
} else if(answer3 ==2){
  hufflepuff++;
} else if(answer3 ==3){
  ravenclaw++;
} else if(answer3 ==4 ){
  gryffindor++;
} else{
  std::cout << "Something's not quite right... Please try again\n";
}
std::cout<< "Q4) Which road tempts you the most?\n" << "1) The wide, sunny grassy lane \n" << "2) The narrow, dark, lantern-lit alley\n" << "3) The  twisting, leaf-strewn path through woods\n" << "4) The cobbled street lined (ancient buildings)\n"; 
std::cin >> answer4;
if (answer4 == 1){
  hufflepuff++;
} else if(answer4 ==2){
  slytherin++;
} else if(answer4 ==3){
  gryffindor++;
} else if(answer4 ==4 ){
  ravenclaw++;
} else{
  std::cout << "Something's not quite right... Please try again\n";
}

std::string house;
int max = 0;

if (gryffindor > max) {
  max = gryffindor;
  house = "Gryffindor";
}

if (hufflepuff > max) {
  max = hufflepuff;
  house = "Hufflepuff";
}

if (slytherin > max) {
  max = slytherin;
  house = "Slytherin";
}

if (ravenclaw > max) {
  max = ravenclaw;
  house = "Ravenclaw";
}

std::cout <<house <<"\n";

}