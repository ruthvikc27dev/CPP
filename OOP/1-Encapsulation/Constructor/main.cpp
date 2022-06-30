#include <iostream>

class Animal{

    char *name;

    public:
        
        Animal(char *name){
            this->name = name;
        }

        char *getName(){
            return this->name;
        }       

};

int main(int argc, char **argv){

    Animal cow((char *)"Cow");
    std::cout << "Animal name: " << cow.getName() << std::endl;

    return 0;
}