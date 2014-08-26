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
	std::cout << "�G�̎c��HP��" << hp << "�ł��B" << std::endl;
	std::cout << std::endl;

}

void CEnemy::Attack(){
	std::cout << "�G�̍U��" << std::endl;
	std::cout << power << "�̃_���[�W��^�����B" << std::endl;
	std::cout << std::endl;
	isHit();
}

void CEnemy::isHit(){
	CGame::player->hp -= power;
}

void CEnemy::Death(){
	if (hp <= 0){
		hp = 0;
		std::cout << "�G�����ɂ܂���" << std::endl;
		std::cout << std::endl;
	}
}