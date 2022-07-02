#include<iostream>

int add(){
    std::cout<< "enter the values of X and Y: \n";
    int x=0;
    std::cin>> x;

    int y=0;
    std::cin>>y;
    
    int result=x+y; 
    std::cout<<"the results is:"<< result;
}

int main(){
    add();
}