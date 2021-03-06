#pragma once
#include <GL\freeglut.h>
#include "Triangle.h"
#include "Log.h"
#include "Window.h"

class Square
{
public:
	static void Draw(Vector2, Vector2);
	static void Draw(Vector2, Vector2, Vector3);
	static bool IsHovering(Vector2, Vector2, Vector2);
};