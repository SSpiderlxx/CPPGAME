#pragma once

#include "Game.h"
#include "ECS.h"
#include "Components.h"

class KeyboardController : public Component{

public:
    TransformComponent *transform;

    const Uint8 *keyboard_state_array = SDL_GetKeyboardState(NULL);

    void init() override{
        transform = &entity->getComponent<TransformComponent>();
    }

    void update() override{

        /*if(Game::event.type == SDL_KEYDOWN || Game::event.type == SDL_KEYUP){
            if(keyboard_state_array[SDL_SCANCODE_UP]){
                transform->velocity.y = -1;
            }
            if(keyboard_state_array[SDL_SCANCODE_DOWN]){
                transform->velocity.y = 1;
            }
            if(keyboard_state_array[SDL_SCANCODE_RIGHT]){
                transform->velocity.x = 1;
            }
            if(keyboard_state_array[SDL_SCANCODE_LEFT]){
                transform->velocity.x = -1;
            }

            if(!keyboard_state_array[SDL_SCANCODE_UP] && !keyboard_state_array[SDL_SCANCODE_DOWN]){
                transform->velocity.y = 0;
            }
            if(!keyboard_state_array[SDL_SCANCODE_LEFT] && !keyboard_state_array[SDL_SCANCODE_RIGHT]){
                transform->velocity.x = 0;
            }

        }*/

        if(Game::event.type == SDL_KEYDOWN){
            switch (Game::event.key.keysym.sym){
            case SDLK_w:
                transform->velocity.y = -1;
                break;
            case SDLK_a:
                transform->velocity.x = -1;
                break;
            case SDLK_s:
                transform->velocity.y = 1;
                break;
            case SDLK_d:
                transform->velocity.x = 1;
                break;
            default:
                break;
            }
        }

        if(Game::event.type == SDL_KEYUP){
                switch (Game::event.key.keysym.sym){
            case SDLK_w:
                transform->velocity.y = 0;
                break;
            case SDLK_a:
                transform->velocity.x = 0;
                break;
            case SDLK_s:
                transform->velocity.y = 0;
                break;
            case SDLK_d:
                transform->velocity.x = 0;
                break;
            default:
                break;
            }
        }
    }

};
