#include "window_draw.h"

#define WINDOW_WIDTH 1280
#define WINDOW_HEIGHT 720
#define FRAME_RATE 60

namespace window_draw {

window::window(const char *str)
: title(str) {
	InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, title);
	SetTargetFPS(FRAME_RATE);
}

void window::init_3dcamera() {
	camera = { 0 };
	camera.position = { 10.0f, 10.0f, 10.0f };
	camera.target = { 0.0f, 0.0f, 0.0f };
	camera.up = (Vector3){ 0.0f, 1.0f, 0.0f };
	camera.fovy = 45.0f;
	camera.projection = CAMERA_PERSPECTIVE;
}

void window::close_window() {
	CloseWindow();
}

} // namespace window_draw

void CameraUpdate(Camera3D *camera) {
	
}