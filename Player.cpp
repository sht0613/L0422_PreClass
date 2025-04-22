#include "Player.h"
#include <iostream>

APlayer::APlayer()
{
}

APlayer::~APlayer()
{
}

void APlayer::AGun()
{
	std::cout << "Player Attack" << std::endl;
}

void APlayer::Tick()
{
	Move();
	Hide();
	AGun();
}

void APlayer::Move()
{
	std::cout << "Player Move" << std::endl;
}

void APlayer::Hide()
{
	std::cout << "Player Hide" << std::endl;
}
