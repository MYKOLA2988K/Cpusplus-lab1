#include <iostream>
#include <string>
#include <math.h>
int main()
{
  int a = 4;
  double b = 0.707;
  double result = 0;
  result = pow((exp(0.5*((1-cos(b)*floor(M_PI))/1-sin(a)*floor(M_PI)))+exp(0.3*((1+cos(a)*floor(M_PI))/1+sin(b)*floor(M_PI)))),1.5) ;
  std::cout<<result;
}