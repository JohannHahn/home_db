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
	EndDrawing();
    }
    CloseWindow();
    return 0;
}
