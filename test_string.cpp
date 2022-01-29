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

void testEmpty(String& s){
  bool result = s.empty();
  if (result){ std::cout<< "this string is empty : true"<<std::endl;}
  else { std::cout<< "this string is empty : false"<<std::endl;}
}

void testStringEg(){
  std::cout<<" test operator+(String&) : "<<std::endl;
  String s("non");
  String t("oui le test marche");
  s=t;
  std::cout<<s.length()<<std::endl;
  for(int i = 0; i<s.length(); i++){
    std::cout<<s.c_str()[i];
  }
  std::cout<<std::endl;
}

void testStringAdd(){
  String s1("test");
  String s2(" valide");
  s1+s2;
  for(int i = 0; i<s1.length(); i++){
    std::cout<<s1.c_str()[i]<<std::endl;
  }
}

void testReserve(String& s){
  int resize = 30;
  int size=s.length();
  s.reserve(30);
  if((s.capacity() == 30)&&(s.length()==size)){
    std::cout<<"le test de reserve est conforme.";
  }
  else {std::cout<<"le test de reserve n'est pas conforme";}
}

int main() {
  std::string true_string("banane_banane");
  String false_string("banane_banane");
  testC_str(true_string,false_string);
  testLength(true_string,false_string);
  testSize(true_string,false_string);
  testCapacity(true_string,false_string);
  testMaxSize(true_string,false_string);
  testEmpty(false_string);
  String emp("");
  testEmpty(emp);
  testStringEg();
  testStringAdd();
  testReserve(false_string);
}
