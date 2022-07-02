#include <iostream>
#include <string>

int main(){
    //creating an n-dimensional array
    int arr[3]={1,2,3};
    std::string name;
    std::cout<<"Enter the name:\n";
    std::getline(std::cin,name);
    std::cout<<"Hello "<<name<< " The array is: "<< arr;
    
}
