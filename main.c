#include <raylib.h>
#include <stdbool.h>

int main() {
    const int screenWidth = 860;
    const int screenHeight = 480;

    InitWindow(screenWidth, screenHeight, "BREAKOUT!");
    Vector2 ballPosition = { GetScreenWidth()/2.0f, GetScreenHeight()/2.0f};

    SetTargetFPS(60);

    while (!WindowShouldClose()) {

        // update game


        BeginDrawing();

        // start drawing 

        ClearBackground(BLACK);

        DrawCircleV(ballPosition, 20, RED);

        EndDrawing();
    }

    return 0;
}
