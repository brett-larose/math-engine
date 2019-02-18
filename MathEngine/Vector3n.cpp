#include "stdafx.h"
#include <cmath>
#include "Vector3n.h"
namespace Engine {
	// Constructors
	Vector3n::Vector3n() :x(0.0), y(0.0), z(0.0) {}

	Vector3n::Vector3n(float x, float y, float z) :x(x), y(y), z(z) {}

	// Destructor
	Vector3n::~Vector3n() {}

	// Copy constructors
	Vector3n::Vector3n(const Vector3n& v) :x(v.x), y(v.y), z(v.z) {}

	Vector3n& Vector3n::operator=(const Vector3n& v) {
		x = v.x;
		y = v.y;
		z = v.z;

		return *this;
	}

	// Addition
	void Vector3n::operator+=(const Vector3n& v) {
		x += v.x;
		y += v.y;
		z += v.z;
	}

	Vector3n Vector3n::operator+(const Vector3n& v) const {
		return add(v);
	}

	Vector3n Vector3n::add(const Vector3n& v) const {
		// Add 2 vectors together and return the result as a third vector
		return Vector3n(x + v.x, y + v.y, z + v.z);
	}

	// Subtraction
	void Vector3n::operator -=(const Vector3n& v) {
		x -= v.x;
		y -= v.y;
		z -= v.z;
	}

	Vector3n Vector3n::operator -(const Vector3n& v) const {
		return subtract(v);
	}

	Vector3n Vector3n::subtract(const Vector3n& v) const {
		// Subtract 2 vectors and return the result
		return Vector3n(x - v.x, y - v.y, z - v.z);
	}

	// Scalar multiplication
	void Vector3n::operator *=(const float s) {
		// multiply each dimension by scalar (s)
		x *= s;
		y *= s;
		z *= s;
	}

	Vector3n Vector3n::operator *(const float s) const {
		return scalarMultiply(s);
	}

	Vector3n Vector3n::scalarMultiply(const float s) const {
		// multiply each dimension by s and return new vector of the result
		return Vector3n(x * s, y * s, z * s);
	}

	// Scalar division
	void Vector3n::operator /=(const float s) {
		// divide each dimension by scalar (s)
		x /= s;
		y /= s;
		z /= s;
	}

	Vector3n Vector3n::operator /(const float s) const {
		return scalarDivide(s);
	}

	Vector3n Vector3n::scalarDivide(const float s) const {
		// divide each dimension by s and return new vector of the result
		return Vector3n(x / s, y / s, z / s);
	}

	// dot product
	float Vector3n::operator *(const Vector3n& v) const {
		return dot(v);
	}

	float Vector3n::dot(const Vector3n& v) const {
		return x * v.x + y * v.y + z * v.z;
	}

	// Cross product
	Vector3n Vector3n::cross(const Vector3n& v) const {
		return Vector3n(
			y * v.z - z * v.y, 
			z * v.x - x * v.z, 
			x * v.y - y * v.x
		);
	}

	void Vector3n::operator %=(const Vector3n& v) {
		*this = cross(v);
	}

	Vector3n Vector3n::operator %(const Vector3n& v) const {
		return cross(v);
	}

	// magnitude
	float Vector3n::magnitude() {
		float magnitude = std::sqrt(x * x + y * y + z * z);
		return magnitude;
	}

	// Unit vector
	void Vector3n::normalize() {
		float mag = magnitude();

		if (mag > 0.0f) {
			float oneOverMag = 1.0f / mag;

			x *= oneOverMag;
			y *= oneOverMag;
			z *= oneOverMag;
		}
	}
}

