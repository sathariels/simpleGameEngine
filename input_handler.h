#ifndef INPUT_HANDLER_H
#define INPUT_HANDLER_H

#include <SDL.h>

class InputHandler {
public:
    // Handles input, updates paddle positions, and checks for game quit events
    void handleInput(bool& running, int& paddle1Y, int& paddle2Y);
};

#endif // INPUT_HANDLER_H
