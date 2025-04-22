#include "Actor.h"

AActor::AActor()
{
}

AActor::~AActor()
{
}

void AActor::Tick()
{
}

void AActor::AddActorWorldOffset(Vector3D Delta)
{
	Location.Add(Delta);
}
