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
  std::cout << "nbchar=" << nbchar << std::endl;
  std::cout << "tot size=" << this->size()+nbchar << std::endl;
  if (this->size()+nbchar+1 <100){
    String save(this->c_str());
    std::cout << "save=" << save.c_str() << std::endl;
    delete(this->_str);
    this->_str=new char[this->size()+nbchar+1]();

    int i=0;
    while(save.c_str()[i]!='\0' && i<100){
      this->_str[i]=save.c_str()[i];
      i++;
    }
    std::cout << "new str=" << this->c_str() << std::endl;

    int j=0;
    while(other[j]!='\0' && i<100){
      this->_str[i]=other[j];
      i++;
      j++;
    }
    std::cout << "new str=" << this->c_str() << std::endl;
    this->_str[i]='\0';
    this->_len=this->size()+nbchar;
    this->_storage=0;
    std::cout << "new str=" << this->c_str() << std::endl;
  }else{
    throw std::invalid_argument( "max string size allowed is 99 char, please reduce the added string's size" );
  }
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
