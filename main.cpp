#define RAYGUI_IMPLEMENTATION
#include "raygui/src/raygui.h"
#include <iostream>

int main() {
    InitWindow(800, 600, "Home Data Base");
    while(!WindowShouldClose()) {
	BeginDrawing();
	ClearBackground(RED);
	if(GuiButton({0, 0, 100, 100}, "HIBUTTON")) {
	    std::cout << "hi\n";
	}
	Vector2 mouse_cell;
	int g = GuiGrid({100, 100, 300, 300}, "text", 20.f, 1, &mouse_cell);
	if(g) std::cout << g << "\n";
	EndDrawing();
    }
    CloseWindow();
    return 0;
}
