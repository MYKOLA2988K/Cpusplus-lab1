#include <iostream>
#include <string>
using namespace std;

int main()
{
int x;
int a;
int c;
double w;

cout<<"Enter x:";
 cin >> x;
 cout<<"Enter a:";
 cin >> a;
 cout<<"Enter c:";
 cin>> c;
 if(x <=0) {
     w=(2*pow(x,1./2))+a;
     }
     if(x>0){
         w= (x+3*a)*c;
         }
 cout<<"Result:"<< w;
}