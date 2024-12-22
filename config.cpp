#include "config.h"
#include <iostream> // For user input
using namespace std;



// Screen settings
int SCREEN_WIDTH = 800;
int SCREEN_HEIGHT = 600;

// Paddle settings
int PADDLE_WIDTH = 10;
int PADDLE_HEIGHT = 100;
int PADDLE_SPEED = 10;

// Ball settings
int BALL_SIZE = 10;
int BALL_SPEED= 5;

// Colors (RGB values)
int COLOR_BACKGROUND[3] = {0, 0, 0};     // Black (Default)
int COLOR_PADDLE[3] = {255, 255, 255};   // White (Default)
int COLOR_BALL[3] = {255, 255, 255};     // White (Default)

void initializeConfig() {
    char choice;
    cout << "Would you like to customize the game settings? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        cout << "Enter screen width: ";
        cin >> SCREEN_WIDTH;
        cout << "Enter screen height: ";
        cin >> SCREEN_HEIGHT;

        cout << "Enter paddle width: ";
        cin >> PADDLE_WIDTH;
        cout << "Enter paddle height: ";
        cin >> PADDLE_HEIGHT;
        cout << "Enter paddle speed: ";
        cin >> PADDLE_SPEED;

        cout << "Enter ball size: ";
        cin >> BALL_SIZE;
        cout << "Enter ball speed: ";
        cin >> BALL_SPEED;

        cout << "Enter background color (RGB): ";
        cin >> COLOR_BACKGROUND[0] >> COLOR_BACKGROUND[1] >> COLOR_BACKGROUND[2];

        cout << "Enter paddle color (RGB): ";
        cin >> COLOR_PADDLE[0] >> COLOR_PADDLE[1] >> COLOR_PADDLE[2];

        cout << "Enter ball color (RGB): ";
        cin >> COLOR_BALL[0] >> COLOR_BALL[1] >> COLOR_BALL[2];
    } else {
        cout << "Using default settings. \n";

    }


}