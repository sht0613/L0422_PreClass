#pragma once
#include "Actor.h"

class APlayer : public AActor

{
public:
	APlayer();
	virtual ~APlayer();
	virtual void AGun();
	
	virtual void Tick();
	virtual void Move();
	virtual void Hide();
};

