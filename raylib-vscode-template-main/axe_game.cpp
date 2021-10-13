#include "raylib.h"

int main()
{
    int width = 350;

    InitWindow(width, 200, "Kevin-Brandon's Window!");

    while (WindowShouldClose() != true)
    {
        BeginDrawing();
        ClearBackground(WHITE);

DrawCircle(175, 100, 25, BLUE);

        EndDrawing();
    }
} 


