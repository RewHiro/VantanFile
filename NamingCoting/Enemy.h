#pragma once
#include "Object.h"
class CEnemy :
	public Object
{

public:
	CEnemy();
	~CEnemy();
	void Update();
	void Draw();

private:
	void Attack();
	void isHit();
	void Death();
};

