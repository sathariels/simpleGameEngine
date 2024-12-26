#include "engine.h"
#include <iostream>

Engine::Engine() : running(true) {
    // Initialize the renderer
    if (!renderer.initialize()) {
        std::cerr << "Failed to initialize renderer" << std::endl;
        running = false; // Stop the game if the renderer fails
    }
}

Engine::~Engine() {
    // Resources are cleaned up automatically by the destructors
}

void Engine::run() {
    // Sample positions for paddles and ball
    int paddle1X = 50, paddle1Y = 250;
    int paddle2X = 750, paddle2Y = 250;
    int ballX = 400, ballY = 300;

    // Main game loop
    while (running) {
        // Handle user input (this will later use input_handler.cpp)
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                running = false; // Exit the game loop
            }
        }
        inputHandler.handleInput(running, paddle1Y, paddle2Y);
        // Update game state (placeholder for now)

        // Render the frame
        renderer.renderFrame(paddle1X, paddle1Y, paddle2X, paddle2Y, ballX, ballY);

        // Simulate ~60 FPS (16ms delay)
        SDL_Delay(16);
    }
}
