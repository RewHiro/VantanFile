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
	std::cout << "�v���C���[�̎c��HP��" << hp << "�ł��B" << std::endl;
	std::cout << std::endl;
}

void CPlayer::Attack(){
	std::cout << "1~3��I��ł�������" << std::endl;
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
		std::cout << "�U����������Ȃ�" << std::endl;
		std::cout << std::endl;
		power = 0;
		break;
	}
	isHit();
}

void CPlayer::isHit(){
	CGame::enemy->hp -= power;
	std::cout << "�v���C���[�̍U��" << std::endl;
	std::cout << power << "�̃_���[�W��^�����B"<<std::endl;
	std::cout << std::endl;
}

void CPlayer::Death(){
	if (hp <= 0){
		hp = 0;
		std::cout << "�v���C���[�����ɂ܂����B" << std::endl;
		std::cout << std::endl;
	}
}