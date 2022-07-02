#include <iostream>
int x=0;
int num(){
    std::cout<<"enter the number: \n \t";
    std::cin>>x;
    return x;
}
int use(){
    std::cout<<"add numbers \n";
    int result=10+x;
    std::cout<<"the results is:= "<<result;
}
int main(){
    num();
    use();
}