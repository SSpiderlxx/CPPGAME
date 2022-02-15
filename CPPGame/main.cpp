#include <Game.h>
#include "Time.h"

Game *game = nullptr;

int main( int argc, char* args[] )
{
    const int FPS = 120;
    const int frameDelay = 1000 / FPS;

    Uint32 frameStart;
    int frameTime;

    Uint32 deltaTime;
    Uint32 oldTime;
    game = new Game();
    game->init("Title", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 640, false);

    while(game->running()){
        frameStart = SDL_GetTicks();

        deltaTime = SDL_GetTicks() - oldTime;
        double fps = (1/deltaTime) * 1000;
        oldTime = SDL_GetTicks();

        //std::cout << deltaTime << std::endl;

        game->handleEvents();
        game->update();
        game->render();

        frameTime = SDL_GetTicks() - frameStart;

        if(frameDelay > frameTime){
            SDL_Delay(frameDelay - frameTime);
            //std::cout << frameDelay - frameTime << std::endl;
        }
    }

    game->clean();

	return 0;
}
