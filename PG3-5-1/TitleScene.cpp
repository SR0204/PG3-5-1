#include "TitleScene.h"

void Initilize() {}

void TitleScene::Update(char* keys, char* preKeys) {

	//�X�y�[�X�L�[���������u��
	if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == false) {
		//�V�[����STAGE�ɐ؂�ւ���
		sceneNo = STAGE /*enum Scene��STAGE*/;
	}
}

void TitleScene/*�`�揈��*/() {
	Novice::ScreenPrintf(0, 0, "Title Scene");
	Novice::ScreenPrintf(0, 30, "Push Space");
}
