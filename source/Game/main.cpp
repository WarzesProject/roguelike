#include "stdafx.h"
//-----------------------------------------------------------------------------
#pragma comment(lib, "Engine.lib")
#pragma comment(lib, "winmm.lib")
//-----------------------------------------------------------------------------
int main(
	[[maybe_unused]] int argc,
	[[maybe_unused]] char *argv[])
{
	InitWindow(800, 600, "Roguelike");
	//SetTargetFPS(60);

	while( !WindowShouldClose() )
	{
		BeginDrawing();
		ClearBackground(RAYWHITE);
		DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
		EndDrawing();
	}
	CloseEngine();

	return 0;
}
//-----------------------------------------------------------------------------