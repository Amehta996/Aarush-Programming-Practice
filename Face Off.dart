import 'dart:io';


void main(){
print("What is your name");
String name = "Aarush";
print("Hello ${name}");
print("What is one cool thing about you? I am:");
String? cool1 = stdin.readLineSync();
 print("Great!... What is another cool thing about you? I am:");
String? cool2 = stdin.readLineSync();
  

 print("It's about drive");
  print("It's about power");
 print("We stay hungry");
 print("We devour");
 print("Put in the work");
 print("Put in the Hours");
  print("And take what's ours");
  print("${cool1} and ${cool2} in my veins my culture banging with strange");
  print("I change the game so what's my name?");
  name = name.toUpperCase();
  print(name);
}