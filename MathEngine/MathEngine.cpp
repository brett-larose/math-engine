// MathEngine.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Vector3n.h"

int main()
{
	Engine::Vector3n vector1(2, 3, 1);
	Engine::Vector3n vector2(1, 2, 0);

	vector1.normalize();

    return 0;
}
