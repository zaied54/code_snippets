#include <stdio.h>
#include <iostream>
using namespace std;
void fastscan(int &num){
  char c;
  c = getchar();
  bool neg = false;
  if(c == '-'){
    neg = true;
    c = getchar();
  }

  num = 0;
  while(c > 47 && c < 58){

    num  = 10 * num + c - 48;
    c = getchar();
  }
  if(neg){
    num *= -1;
  }
}
