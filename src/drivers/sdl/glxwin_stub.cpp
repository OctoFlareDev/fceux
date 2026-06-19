#include "glxwin.h"

glxwin_shm_t *glx_shm = nullptr;

int spawn_glxwin(int)
{
	return -1;
}

int init_gtk3_GLXContext(int)
{
	return -1;
}

int destroy_gtk3_GLXContext(void)
{
	return 0;
}

int gtk3_glx_render(void)
{
	return 0;
}
