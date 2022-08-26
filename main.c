#include <raylib.h>
#include <stdbool.h>

int main() {
    const int screenWidth = 980;
    const int screenHeight = 620;

    InitWindow(screenWidth, screenHeight, "BREAKOUT!");
    Vector2 ballPosition = {GetScreenWidth() / 2.0f, GetScreenHeight() / 2.0f};

    bool pause = 0;
    int framesCounter = 0;

    SetTargetFPS(60);

    while (!WindowShouldClose()) {

        // update game

        BeginDrawing();

        // start drawing

        ClearBackground(BLACK);

        DrawCircleV(ballPosition, 20, RED);

        if (pause && ((framesCounter / 30) % 2))
            DrawText("PAUSED", 350, 200, 30, GRAY);

        DrawFPS(10, 10);

        EndDrawing();


        if (IsKeyPressed(KEY_X)) break;
    }

    return 0;
}
