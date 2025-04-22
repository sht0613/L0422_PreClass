#include <iostream>
#include <vector>
#include "Enemy.h"
#include "Obstacle.h"
#include "StartPoint.h"
#include "EndPoint.h"
#include "Actor.h"
#include "Player.h"
#include "World.h"
#include "Vector3D.h"

using namespace std;

int main() 
{
	UWorld* MyWorld = new UWorld();

	MyWorld->SpawnActor(new APlayer());
	MyWorld->SpawnActor(new AEnemy());
	MyWorld->SpawnActor(new AObstacle());
	MyWorld->SpawnActor(new AObstacle());
	MyWorld->SpawnActor(new AObstacle());
	MyWorld->SpawnActor(new AObstacle());
	MyWorld->SpawnActor(new AObstacle());
	MyWorld->SpawnActor(new AStartPoint());
	MyWorld->SpawnActor(new AEndPoint());

	MyWorld->Run();

	delete MyWorld;
	MyWorld = nullptr;

	return 0;
}