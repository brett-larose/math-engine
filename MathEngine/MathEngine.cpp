// MathEngine.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Vector3n.h"

int main()
{
	Engine::Vector3n vector1(2, 3, 1);
	Engine::Vector3n vector2(1, 2, 0);

	float dot = vector1.dot(vector2);
	float dot1 = vector1 * vector2;

    return 0;
}
