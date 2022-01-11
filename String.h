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
  int size();
  int capacity();
  int max_size();
//Modifications
  void clear();
//Operators
String& operator=(const String& other){
  int l;
  if (this->_len>other._len){
    l=this->_len;
  }else{
    l=other._len;
  }
  int i;
  for(i=0;i<l;i++){
    _str[i]=other._str[i];
  }
  _str[i]='\0';
  _len = other._len;
  return *this;
}

String& operator=(char other){
  return *this;
}

String& operator=(const char* other){
  return *this;
}

String& operator+(const String& me,const char* other){
  return *this;
}

String& operator+(const String& me,char other){
  return *this;
}

String& operator+(const String& me, const String& other){
  return *this;
}

};
