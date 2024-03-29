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
	std::cout << "敵の残りHPは" << hp << "です。" << std::endl;
	std::cout << std::endl;

}

void CEnemy::Attack(){
	std::cout << "敵の攻撃" << std::endl;
	std::cout << power << "のダメージを与えた。" << std::endl;
	std::cout << std::endl;
	isHit();
}

void CEnemy::isHit(){
	CGame::player->hp -= power;
}

void CEnemy::Death(){
	if (hp <= 0){
		hp = 0;
		std::cout << "敵が死にました" << std::endl;
		std::cout << std::endl;
	}
}