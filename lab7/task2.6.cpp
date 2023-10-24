#include <iostream>

int main()
{
    int steps=0;
    int c0;
    
    std::cout << "Enter a natural number:";
    std::cin>> c0;
    
    while(c0 !=1&& c0>0){
        if(c0 % 2==0){
            c0/=2;
            }
            else {
            c0=3*c0+1;
            }
            std::cout<< c0 << std:: endl;
            steps++;
            }
            std::cout<<"steps = "<< steps << std::endl;
            return 0;
}
