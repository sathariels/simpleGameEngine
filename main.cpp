#include <iostream>
#include <SDL.h>

int main(int argc, char* argv[]) {
    // Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "Failed to initialize SDL: " << SDL_GetError() << std::endl;
        return -1;
    }

    // Create an SDL window
    SDL_Window* window = SDL_CreateWindow(
        "Test Window",                // Window title
        SDL_WINDOWPOS_CENTERED,       // X position (centered)
        SDL_WINDOWPOS_CENTERED,       // Y position (centered)
        800,                          // Width of the window
        600,                          // Height of the window
        SDL_WINDOW_SHOWN              // Flags (make the window visible)
    );

    if (!window) {
        std::cerr << "Failed to create SDL window: " << SDL_GetError() << std::endl;
        SDL_Quit();
        return -1;
    }

    // Wait for 3 seconds before closing
    SDL_Delay(1000); // edit

    // Destroy the window and quit SDL
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
