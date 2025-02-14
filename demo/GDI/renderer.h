#define WIN32_LEAN_AND_MEAN
#ifndef RENDERER_H
#define RENDERER_H

#include <windows.h>
#include <wingdi.h>
#include "microui.h"

#define GET_X_LPARAM(lp)                        ((int)(short)LOWORD(lp))
#define GET_Y_LPARAM(lp)                        ((int)(short)HIWORD(lp))

extern int running;

void r_init(void);
void r_draw_rect(mu_Rect rect, mu_Color color);
void r_draw_text(const char* text, mu_Vec2 pos, mu_Color color);
void r_draw_icon(int id, mu_Rect rect, mu_Color color);
int r_get_text_width(const char* text, int len);
int r_get_text_height(void);
void r_set_clip_rect(mu_Rect rect);
void r_clear(mu_Color color);
void r_begin(void);
void r_end(void);
void r_handle_input(mu_Context* ctx);
int size_t2int(size_t val);
#endif