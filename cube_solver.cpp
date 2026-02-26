#include "window_draw.h"

#include <raylib.h>

using namespace window_draw;

static void game_loop (Camera3D *, Vector3);

/**
* cube_solver - core function for solving a virtual Rubik's cube
*
* Return: n/a
*/

void cube_solver(void)
{
	window window("Virtual Rubik's Cube Solver");

	window.init_3dcamera();

	// init cube position
	Vector3 cube_position = { 0.0f, 0.0f, 0.0f };

	while(!WindowShouldClose())
		game_loop(&window.camera, cube_position);

	window.close_window();
}

/**
* game_loop - handles the game loop
*
* @camera: camera for viewport
* @cube_pos: position of the cube
*
* Return: n/a
*/

static void game_loop(Camera3D *camera, Vector3 cube_pos)
{
	// Update
	CameraUpdate(camera);

	// Drawing
	BeginDrawing();
		ClearBackground(RAYWHITE);
		BeginMode3D(*camera);

			DrawCube(cube_pos, 2.0f, 2.0f, 2.0f, RED);
			DrawGrid(10, 1.0f);

		EndMode3D();

	EndDrawing();
}
