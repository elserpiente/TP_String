#include <iostream>


class String{
protected:
  char _str[100] ={};
  int _len;
public:
  String();
  String(const String& str); // Copy constructor
  int length(String s);
  ~String()=default;

  char* c_str();
  int size(String s);
};
