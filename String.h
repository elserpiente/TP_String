#include <iostream>
#include <typeinfo>
#include <stdexcept>


class String{
protected:
  char* _str;
  int _len;
  int _storage;
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
  bool empty();
//Modifications
  void clear();
  void resize(int size_t,char c);
  void reserve (int size);
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
  delete(this->_str);
  this->_len=1;
  this->_str=new char[this->_len]();
  this->_str[0]=other;
  this->_str[1]='\0';
  this->_storage=0;
  return *this;
 }

String& operator=(const char* other){
  delete(this->_str);
  int nbchar=0;
  while(other[nbchar]!='\0'){
    nbchar++;
  }
  if (nbchar+1 <100){
    this->_str=new char[nbchar+1]();
    int i=0;
    while(other[i]!='\0' && i<100){
      this->_str[i]=other[i];
      i++;
    }
    this->_str[i]='\0';
    this->_len=nbchar;
    this->_storage=0;
  }else{
    throw std::invalid_argument( "max string size allowed is 99 char, please reduce your string's size" );
  }
  return *this;
}


String& operator+(const char* other){
  int nbchar=0;
  while(other[nbchar]!='\0'){
      nbchar++;
  }
  String s;
  int totalLen = this->_len + nbchar;
  if(totalLen +1 < 100){
    s._str=new char[totalLen+1]();
    int i = 0;
    while(i<totalLen){
      if(i<this->_len){
        s._str[i]=this->_str[i];
      }
      else{
        s._str[i]=other[i-this->_len];
      }
      i++;
    }
    s._len = totalLen;
    s._str[totalLen]='\0';
    return *new String(s);
  }
  else {
    throw std::invalid_argument( "max string size allowed is 99 char, please reduce your string's size" );
  }
}

const String operator+(char other){
  if (other=='\0'){
    return *this;
  }
  String s(*this);
  s.resize(this->_len+1,other);
  return s;
}

String& operator+(const String& other){
  String s;
  int totalLen = this->_len + other._len;
  if(totalLen +1 < 100){
    s._str=new char[totalLen+1]();
    int i = 0;
    while(i<totalLen){
      if(i<this->_len){
        s._str[i]=this->_str[i];
      }
      else{
        s._str[i]=other._str[i-this->_len];
      }
      i++;
    }
    s._len = totalLen;
    s._str[totalLen]='\0';
    return *new String(s);
  }
  else {
    throw std::invalid_argument( "max string size allowed is 99 char, please reduce your string's size" );
  }
}
};
