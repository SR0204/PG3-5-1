#include "ClearScene.h"

void ClearScene::Initialize()
{
}

void ClearScene::Update(char* keys, char* preKeys)
{
	//�X�y�[�X�L�[���������u��
	if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == false) {
		//�V�[����TITLE�ɐ؂�ւ���
		sceneNo = /*enum Scene��TITLE*/;
	}
}

void ClearScene::Draw()
{
	Novice::ScreenPrintf(0, 0, "Clear Scene");
	Novice::ScreenPrintf(0, 30, "Push Space");
}
