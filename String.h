#include <iostream>


class String{
protected:
  char _str[100] ={};
  int _len;
public:
  String();
<<<<<<< HEAD
  String(const String* str); // Copy constructor
  ~String()=default;
=======
  String(const String& str); // Copy constructor

>>>>>>> ea6aa71d2ceba2b691b6c14763fcd70b9800c2ba
  int length();
  ~String()=default;
  char* getStr();

  int capacity();
};
