#include <iostream>
#include <typeinfo>
#include <stdexcept>


class String{
protected:
  char* _str;
  int _len;
public:
//Constructors~Destructors
  String();
  String(const char *str);
  String(const String& str); // Copy constructor
  ~String();
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
  delete(this->_str);
  this->_str=new char[other._len]();
  int i;
  for(i=0;i<other._len;i++){
    this->_str[i]=other._str[i];
  }
  this->_str[i]='\0';
  this->_len = other._len;
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

const String operator+(char other){
  if (other=='\0'){
    return *this;
  }
  String s(*this);
  std::cout<<this->_len+1<<'\n';
  s.resize(this->_len+1,other);
  return s;
}

String& operator+(const String& other){
  //Edgar
  return *this;
}
};
