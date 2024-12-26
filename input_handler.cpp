//
// Created by nithi on 12/22/2024.
//


#include "input_handler.h"

void InputHandler::handleInput(bool& running, int& paddle1Y, int& paddle2Y) {
    SDL_Event event;

    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) {
            running = false;
        } else if (event.type == SDL_KEYDOWN) {
            switch (event.key.keysym.sym) {
                case SDLK_UP:
                    paddle2Y -= 10;
                    break;
                case SDLK_DOWN:
                    paddle2Y += 10;
                    break;
                case SDLK_w:
                    paddle1Y -= 10;
                    break;
                case SDLK_s:
                    paddle1Y += 10;
                    break;
            }
        }
    }
}