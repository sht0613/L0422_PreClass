#pragma once
#include "Vector3D.h"

class AActor
{
public:
	AActor();
	virtual ~AActor();
	virtual void Tick();
	void AddActorWorldOffset(Vector3D Delta);
	
protected:
	Vector3D Location;

};

