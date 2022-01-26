#include "String.h"
#include <string>

void testC_str(std::string& v_str,String& f_str){
  if (v_str.c_str()==f_str.c_str()){
    std::cout<<"Test c_str() conforme"<<'\n';
  } else {
    std::cout<<"Test c_str() non conforme"<<'\n';
  }
}

void testLength(std::string& v_str,String& f_str){
  if (v_str.length()==f_str.length()){
    std::cout<<"Test length() conforme"<<'\n';
  } else {
    std::cout<<"Test length() non conforme"<<'\n';
  }
}

void testSize(std::string& v_str,String& f_str){
  if (v_str.size()==f_str.size()){
    std::cout<<"Test size() conforme"<<'\n';
  } else {
    std::cout<<"Test size() non conforme"<<'\n';
  }
}

void testCapacity(std::string& v_str,String& f_str){
  if (v_str.capacity()==f_str.capacity()){
    std::cout<<"Test capacity() conforme"<<'\n';
  } else {
    std::cout<<"Test capacity() non conforme"<<'\n';
  }
}

void testMaxSize(std::string& v_str,String& f_str){
  if (100==f_str.max_size()){
    std::cout<<"Test max_size() conforme"<<'\n';
  } else {
    std::cout<<"Test max_size() non conforme"<<'\n';
  }
}

int main() {
  std::string true_string("banane_banane");
  String false_string("banane_banane");
  testC_str(true_string,false_string);
  testLength(true_string,false_string);
  testSize(true_string,false_string);
  testCapacity(true_string,false_string);
  testMaxSize(true_string,false_string);

  return 0;
}
