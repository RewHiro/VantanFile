#include "Game.h"
#include "Player.h"
#include "Enemy.h"


CPlayer *CGame::player;
CEnemy *CGame::enemy;

CGame::CGame()
{
	player = new CPlayer();
	enemy = new CEnemy();
}


CGame::~CGame()
{
	delete player;
	delete enemy;
}

void CGame::Update(){
	player->Update();
	enemy->Update();
}

void CGame::Draw(){
	player->Draw();
	enemy->Draw();
}
