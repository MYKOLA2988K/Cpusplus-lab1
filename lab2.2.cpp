#include <iostream>
#include <string>
using namespace std;

int main()
{
int x;
int y;



cout<<"Enter x:";
 cin >> x;
 cout<<"Enter y:";
 cin>> y;
 if(pow(x,2)+pow(y,2)<=-1&&pow(pow(x,2)+pow(y,2),1./2)<=1) {
     cout<<"WIN";
     }
     else {
          cout<<"LOSE";
      
         }
}