#pragma once
#include <vector>

class AActor;

class UWorld
{
public:
	UWorld();
	virtual ~UWorld();

	std::vector<AActor*> GetAllActors()
	{
		return Actors;
	}
	void Run();
	void SpawnActor(AActor* SpawnActor);

protected:
	std::vector<AActor*> Actors;
};

