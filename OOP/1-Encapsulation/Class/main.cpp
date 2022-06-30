#include <iostream>

class Player{
    int x, y;
    int speed;

    public:
        
        void Move(int x, int y){
            this->x = x * speed;
            this->y = y * speed;
        }

        void setSpeed(int speed){
            this->speed = speed;
        }

        int getX(){
            return this->x;
        }

        int getY(){
            return this->y;
        }

        int getSpeed(){
            return this->speed;
        }

};

int main(int argc, char **argv){

    Player player;
    player.setSpeed(5); // 5kmps
    player.Move(1, 2);  // 1km & 2km

    std::cout << "Speed: " << player.getSpeed() << "kmps" << std::endl;
    std::cout << "X: " << player.getX() << "km, Y: " << player.getY() << "km" << std::endl;


    return 0;
}