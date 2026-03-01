#include "String.cpp"
#include <iostream>

int main(){
  String s("Hi", 2);
  std::cout << s.getstr() << std::endl;
  String s2(s);
  std::cout << s2.getstr() << std::endl;
}

