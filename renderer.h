#ifndef RENDERER_H
#define RENDERER_H
// nice hello
#include <SDL.h>
#include "config.h"
using namespace std;
class Renderer {
public:
    Renderer(); // intilizes all the objects int eh SDL window
    ~Renderer(); // destroys all the objects ensures the SDL resrouces  are properly cleaned up

    bool initialize(); // intilizes the renderer, creates the SDL rendere object


    // Renders the game frame
    void renderFrame(int paddle1X, int paddle1Y, int paddle2X, int paddle2Y, int ballX, int ballY); //Decalres a method to render a single frame of the game

    // Cleans up resources
    void cleanup(); //release all resources
private:
    SDL_Window* window;
    SDL_Renderer* renderer; // Declares private member variables that the Renderer class uses internally:

};

#endif // RENDERER_H