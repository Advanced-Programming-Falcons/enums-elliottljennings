#include <iostream>

using namespace std;

enum GameMode {

    Easy = 1,
    Medium = 25,
    Hard = 30,


};

GameMode mode = Medium;


int main(void){

    switch(mode){

        case(Easy):
        cout << "A more relaxing experience with decreased enemy spawns and slower overall pace. Assist mode can be enabled to reduce boss health to " << mode <<"%";
        break;

        case(Medium):
        cout << "Baseline difficulty and the reccommended starting point of the game. Fast-paced gameplay with normal enemy spawns. Assist mode can be enabled to reduce boss health to " << mode << "%";
        break;


        case(Hard):
        cout << "Extremely difficult difficulty with enemy spawns through the roof. The devs strongly reccommend you know what you are doing before playing this mode. Your health will be permanently reduced to " << mode << "%";
        





    }




}