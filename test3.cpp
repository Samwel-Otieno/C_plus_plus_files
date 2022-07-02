#include <iostream>
int sum(){
    int x=200;
    int y=300;


    for (int i=0; i<3;i++){
        int z= y-x;
        int z0=y*x;
        int z1=y+x;
        std::cout<< "the values of z are :"<<z<<'\n'<<"and "<<z0<<'\n'<<z1;
    }

}

int main(){
    sum();
}

