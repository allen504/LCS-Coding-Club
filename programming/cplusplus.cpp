//C++ IDE: https://www.onlinegdb.com/online_c++_compiler

//this is how you include libraries
#include <iostream>

//some basic data types in c++

//integers
int age = 24;

//doubles
double time = 9.57;

//characters (need to use single quotes)
char letter = 'A';

//strings
const char* name = "Joseph";

//boolean (true or false)
bool p = true;

//print something out
std::cout<< "Hi, my name is " << name << ". I'm " << age << " years old. The first letter of my last name is " << letter << ", and I can run the 100-meter dash in " << time << " seconds.";

//if else statement
if (age > 12){
  std::cout << "You can watch Avengers!" << std::endl;
}
else{
  std::cout << "You're too young to watch Avengers!" << std::endl;
}

//for loop
for (int i = 0; i < 10; i++){
  std::cout << "hello" << i << std::endl;
}

//while loop?

//function?
