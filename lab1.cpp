#include <iostream>
#include <string>
#include <math.h>
int main()
{
  int a = 2;
  double b = 19.03;
  double result = 0;
  result = (a/b)*((4,3*sin(((a/b)+1)*floor(M_PI)))/(1-cos(((a/b)-1)*floor(M_PI))))+log(b);
  std::cout<<result;
}