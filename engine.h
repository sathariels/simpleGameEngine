#ifndef ENGINE_H
#define ENGINE_H

#include "input_handler.h"
#include "renderer.h"
#include "input_handler.h"

class Engine {
public:
    Engine();  // Constructor
    ~Engine(); // Destructor

    void run(); // Main game loop

private:
    Renderer renderer;  // Renderer to handle graphics
    bool running;       // Boolean to track if the game is running
    InputHandler inputHandler;
};

#endif // ENGINE_H
