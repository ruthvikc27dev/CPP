#include <iostream>

class DynamicMemory{

    int *arr = NULL;

    public:
        
        DynamicMemory(){
            arr = new int[10];
        }

        void setArray(){
            int i;
            for(i=0; i<10; i++){
                *(arr + i) = i;
            }
        }

        void getArray(){
            int i;
            for(i=0; i<10; i++){
                std::cout << *(arr + i) << "\t";
            }
            std::cout << std::endl;
        }

        ~DynamicMemory(){
            this->getArray();
            delete []arr;
            this->getArray();
        }

};

int main(){

    DynamicMemory dm;
    dm.setArray();

    return 0;
}