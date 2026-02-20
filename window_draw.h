#ifndef _WINDOW_DRAW_H
#define _WINDOW_DRAW_H

#include <raylib.h>
namespace window_draw {

class window {
private:
	const char *title;
public:
	Camera3D camera;
	window(const char *str);
	void init_3dcamera();
	void close_window();
}; /* class window */

} /* window_draw */

void CameraUpdate(Camera3D *camera);

#endif /* _WINDOW_DRAW_H */
