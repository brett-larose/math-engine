#pragma once
namespace Engine {
	class Vector3n
	{
	public:
		// dimensions
		float x;
		float y;
		float z;

		// Constructors
		Vector3n();
		Vector3n(float x, float y, float z);

		// Destructor
		~Vector3n();

		// Copy constructors
		Vector3n(const Vector3n& v);
		Vector3n& operator=(const Vector3n& v);

		// Addition
		void operator+=(const Vector3n& v);
		Vector3n operator+(const Vector3n& v) const;
		Vector3n add(const Vector3n& v) const;

		// Subtraction
		void operator-=(const Vector3n& v);
		Vector3n operator-(const Vector3n& v) const;
		Vector3n subtract(const Vector3n& v) const;

		// Scalar multiplication
		void operator *=(const float s);
		Vector3n operator *(const float s) const;
		Vector3n scalarMultiply(const float s) const;

		// Scalar division
		void operator /=(const float s);
		Vector3n operator /(const float s) const;
		Vector3n scalarDivide(const float s) const;

		// dot product
		float operator *(const Vector3n& v) const;
		float dot(const Vector3n& v) const;
	};
}


