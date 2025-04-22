#pragma once
struct Vector3D
{
	int X;
	int Y;
	int Z;

	Vector3D()
	{
		X = 0;
		Y = 0;
		Z = 0;
	}

	~Vector3D()
	{

	}
	void Add(Vector3D Delta)
	{
		X += Delta.X;
		Y += Delta.Y;
		Z += Delta.Z;
	}
};

