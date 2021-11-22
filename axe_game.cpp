#include "raylib.h"


int main()
{
   
    float root_beer = 1.99;
    double cheese_burger{5.99};
    bool shouldHaveLunch {};
    // shouldHaveLunch = true;

    int width = 350;
    int height = 200;
    InitWindow(width, height, "Axe Game");
    int circle_x = width/2;
    int circle_y = height/2;
    int rect_x = 300;
    int rect_y = 0;
    int rect_width = 50, rect_height = 50;

    SetTargetFPS(60);
    while (WindowShouldClose() == false){
        BeginDrawing();
        ClearBackground(BLUE);
        
        DrawCircle(circle_x,circle_y, 25, RED);
        DrawRectangle(rect_x, rect_y, rect_width, rect_height, RED);
        // rect_x = rect_x + 10;
        rect_y += 10;

        if(IsKeyDown(KEY_D) && circle_x < width){
            circle_x = circle_x + 10;
        }
        if(IsKeyDown(KEY_A) && (circle_x >0)){
            circle_x = circle_x - 10;
        }

        EndDrawing();
    }

}
