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
  //Emma
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
  String s(this->c_str());
  delete(this->_str);
  int totalLen = s._len + other._len;
  if(totalLen +1 < 100){
    this->_str=new char[totalLen+1]();
    int i = 0;
    while(i<totalLen){
      if(i<s._len){
        this->_str[i]=s._str[i];
      }
      else{
        this->_str[i]=other._str[i-s._len];
      }
      i++;
    }
    this->_len = totalLen;
    this->_str[totalLen]='\0';
  }
  else {
    throw std::invalid_argument( "max string size allowed is 99 char, please reduce your string's size" );
  }
  return *this;
}
};
