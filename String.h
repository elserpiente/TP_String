#include <iostream>


class String{
protected:
  char _str[100] ={};
  int _len;
public:
  // Constructors / Destructor
  String(); // Default constructor
  String(const String& str); // Copy constructor

};
