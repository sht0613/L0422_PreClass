#pragma once
#include "Actor.h"
class AEnemy : public AActor
{
public:
	AEnemy();
	virtual ~AEnemy();
	virtual void Tick() override;
	virtual void Move();
	virtual void Hide();
	virtual void Attack();
};

