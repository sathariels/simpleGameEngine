//
// Created by Nithilan on 12/9/2024.
//

#ifndef CONFIG_H
#define CONFIG_H

// Screen Settings
extern int SCREEN_WIDTH;
extern int SCREEN_HEIGHT;

// Paddle settings
extern int PADDLE_WIDTH;
extern int PADDLE_HEIGHT;
extern int PADDLE_SPEED;

// Ball settings
extern int BALL_SIZE;
extern int BALL_SPEED;

// Colors (RGB values)
extern int COLOR_BACKGROUND[3];
extern int COLOR_PADDLE[3];
extern int COLOR_BALL[3];

// Function to initialize config (with default or user-defined values)
void initializeConfig();








#endif //CONFIG_H