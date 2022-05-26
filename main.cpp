#include "bogdan.h"

int main() {
//init srand
    std::srand(time(NULL));
    //init game engine
    Bogdan game;
    //game loop
    while(game.running()) {
        //update
        game.update();
        //render
        game.render();
    }
    //end
    return 0;
}
