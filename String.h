#include <iostream>


class String{
protected:
  char _str[100] ={};
  int _len;
public:
  String();
  String(const String* str); // Copy constructor
  ~String()=default;
  int length();
  char* getStr();
};
