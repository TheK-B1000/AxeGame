#include "raylib.h"

int main()
{
    // window dimensions
    int width{350};
    int height{200};
    InitWindow(width, 200, "Kevin-Brandon's Window!");

    // circle coordinates
    int circle_x{175};
    int circle_y{100};

    SetTargetFPS(60);

    while (WindowShouldClose() != true)
    {
        BeginDrawing();
        ClearBackground(WHITE);

        // Game logic begins
        DrawCircle(175, 100, 25, BLUE);

        if (IsKeyDown(KEY_D))
        {
            circle_x = circle_x + 10;
        }

        if (IsKeyDown(KEY_A))
        {
            circle_x = circle_x - 10;
        }

        // Game logic ends
        EndDrawing();
    }
} 


