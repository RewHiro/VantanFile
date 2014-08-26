#include "Player.h"
#include "Game.h"
#include "Enemy.h"
#include <iostream>

const int ATTACK1 = 1;
const int ATTACK2 = 2;
const int ATTACK3 = 3;

CPlayer::CPlayer()
{
	hp = 100;
	power = 0;
}


CPlayer::~CPlayer()
{
}

void CPlayer::Update(){
	Attack();
	Death();
}

void CPlayer::Draw(){
	std::cout << "プレイヤーの残りHPは" << hp << "です。" << std::endl;
	std::cout << std::endl;
}

void CPlayer::Attack(){
	std::cout << "1~3を選んでください" << std::endl;
	std::cin >> type;
	switch (type)
	{
	case ATTACK1:
		power = 10;
		break;
	case ATTACK2:
		power = 20;
		break;
	case ATTACK3:
		power = 30;
		break;

	default:
		std::cout << "攻撃が当たらない" << std::endl;
		std::cout << std::endl;
		power = 0;
		break;
	}
	isHit();
}

void CPlayer::isHit(){
	CGame::enemy->hp -= power;
	std::cout << "プレイヤーの攻撃" << std::endl;
	std::cout << power << "のダメージを与えた。"<<std::endl;
	std::cout << std::endl;
}

void CPlayer::Death(){
	if (hp <= 0){
		hp = 0;
		std::cout << "プレイヤーが死にました。" << std::endl;
		std::cout << std::endl;
	}
}