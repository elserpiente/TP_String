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
  void resize(int size_t,char c);
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
  //Emma
  return *this;
}

String& operator=(const char* other){
  //Edgar
  return *this;
}

String& operator+(const char* other){
  //Emma
  return *this;
}

String& operator+(char other){
  if (other=='\0'){
    return *this;
  }
  String s(this);
  s.resize(1,other);
  return s;
}

String& operator+(const String& other){
  //Edgar
  return *this;
}

};
