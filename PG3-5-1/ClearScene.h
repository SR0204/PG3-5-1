#pragma once
#include "IScene.h"

class ClearScene : public IScene
{
public://ƒƒ“ƒoŠÖ”

	///‰Šú‰»ˆ—
	void Initialize() override;

	///XVˆ—
	void Update(char* keys, char* preKeys) override;

	///•`‰æˆ—
	void Draw() override;
};

