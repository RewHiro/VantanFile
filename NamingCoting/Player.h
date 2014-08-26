#pragma once
#include "Object.h"
class CPlayer :
	public Object
{
public:
	CPlayer();
	~CPlayer();
	void Update();
	void Draw();

private:
	int type;
	void Attack();
	void isHit();
	void Death();

};

