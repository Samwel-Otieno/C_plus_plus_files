#include<iostream>

// set up an infinite while loop to continuously ask for inputs
int main(){
    while(true){
        for(int i=0;i<3;i++){
            int x;
            std::cout<< " enter the numbers: \n\t";
            std::cin>> x;

            switch (x)
            {
            case 123:
                std::cout<<" welcome sam \n";
                break;
            case 456:
                std::cout<<"welcome Halisi \n";
                break;
            default:
                std::cout<<"unknown user please enter ID again again: \n";
                break;
        }

    }
    }
}
