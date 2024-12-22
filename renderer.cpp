#include "renderer.h"
#include <iostream> // For error messages
using namespace std;
Renderer::Renderer() : window(nullptr), renderer(nullptr) {
    if (!initialize()) {
        cerr << "Failed to initialize SDL window and renderer" << endl;
        cleanup();
    }

}

Renderer::~Renderer() {
    // Free the SDL renderer if it was created
    if (renderer) {
        SDL_DestroyRenderer(renderer);
        renderer = nullptr;
    }

    // Free the SDL window if it was created
    if (window) {
        SDL_DestroyWindow(window);
        window = nullptr;
    }

    // Quit SDL
    SDL_Quit();
}
bool Renderer::initialize() {

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        cerr << "SDL could not initialize! SDL Error: " << SDL_GetError() << endl;
        return false;
    }

    window = SDL_CreateWindow("Pong Game", SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (!window) {
        cerr << "Failed to create SDL window" << SDL_GetError() << endl;
        return false;
    }
}


void Renderer::renderFrame(int paddle1X, int paddle1Y, int paddle2X, int paddle2Y, int ballX, int ballY) {

    SDL_SetRenderDrawColor(renderer, COLOR_BACKGROUND[0], COLOR_BACKGROUND[1], COLOR_BACKGROUND[2], 255);

}

