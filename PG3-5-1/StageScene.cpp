#include "StageScene.h"

void StageScene::Initialize()
{
}

void StageScene::Update(char* keys, char* preKeys)
{
	//�X�y�[�X�L�[���������u��
	if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == false) {
		//�V�[����CLEAR�ɕς���
		sceneNo = /*enum Scene��CLEAR*/;
	}
}

void StageScene::Draw()
{
	Novice::ScreenPrintf(0, 0, "Stage Scene");
	Novice::ScreenPrintf(0, 30, "Push Space");
}
