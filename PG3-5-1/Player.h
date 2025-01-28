#pragma once
#include <Novice.h>
#include "Vector2.h"

class Player
{
public:
	Player();

	void Init();
	void Update();
	void Draw();

	//�����o�֐�
	void MoveRight();
	void MoveLeft();

private:
	Vector2 position_{};

	float speed_ = 3.0f;
};

