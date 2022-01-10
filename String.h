#include <iostream>


class String{
protected:
  char _str[100] ={};
  int _len;
public:
//Constructors~Destructors
  String();
  String(const char *str);
  String(const String* str); // Copy constructor
  ~String()=default;
//Convertions
  char* c_str();
//Measurements
  int length();
  //int size();
  int capacity();
  int max_size();
//Modifications
};
