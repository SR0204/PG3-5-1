#include "TitleScene.h"

void TitleScene::Initialize()
{
}

void TitleScene::Update(char* keys, char* preKeys)
{
	//�X�y�[�X�L�[���������u��
	if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == false) {
		//�V�[����STAGE�ɐ؂�ւ���
		sceneNo = /*enum Scene��STAGE*/;
	}
}

void TitleScene::Draw()
{
	Novice::ScreenPrintf(0, 0, "Title Scene");
	Novice::ScreenPrintf(0, 30, "Push Space");
}
