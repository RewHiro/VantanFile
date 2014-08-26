#pragma once
class Object
{
public:

	int hp;
	virtual void Update() = 0;
	virtual void Draw() = 0;

protected:
	int power;
};

