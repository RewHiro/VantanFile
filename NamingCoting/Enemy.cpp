#include "Enemy.h"
#include "Game.h"
#include "Player.h"
#include <iostream>

CEnemy::CEnemy()
{
	hp = 100;
	power = 20;
}


CEnemy::~CEnemy()
{
}

void CEnemy::Update(){
	Attack();
	Death();
}

void CEnemy::Draw(){
	std::cout << "“G‚ÌŽc‚èHP‚Í" << hp << "‚Å‚·B" << std::endl;
	std::cout << std::endl;

}

void CEnemy::Attack(){
	std::cout << "“G‚ÌUŒ‚" << std::endl;
	std::cout << power << "‚Ìƒ_ƒ[ƒW‚ð—^‚¦‚½B" << std::endl;
	std::cout << std::endl;
	isHit();
}

void CEnemy::isHit(){
	CGame::player->hp -= power;
}

void CEnemy::Death(){
	if (hp <= 0){
		hp = 0;
		std::cout << "“G‚ªŽ€‚É‚Ü‚µ‚½" << std::endl;
		std::cout << std::endl;
	}
}