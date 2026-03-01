#include <cstdint>
#include <iostream>

class String{
public:
  String(const char* str, uint8_t size){
    this->str = new char[size+1];
    this->size = size;
    for(int i = 0; i < this->size; ++i) this->str[i] = str[i];
    this->str[size] = '\0';
  }
  ~String(){
    delete[] str;
  }
  char* getstr(){
    return this->str;
  }
  uint8_t getlen(){
    return this->size;
  }
private:
  char* str;
  uint8_t size;
};
