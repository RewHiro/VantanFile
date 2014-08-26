#pragma once

class CPlayer;
class CEnemy;

class CGame
{
public:
	CGame();
	~CGame();
	void Update();
	void Draw();

	static CPlayer *player;
	static CEnemy *enemy;
};

