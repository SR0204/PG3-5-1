#include "StageScene.h"

void Initilize() {}

void StageScene::Update(char* keys, char* preKeys) {

	//�X�y�[�X�L�[���������u��
	if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == false) {
		//�V�[����CLEAR�ɕς���
		sceneNo = CLEAR;
	}
}

void StageScene/*�`�揈��*/() {
	Novice::ScreenPrintf(0, 0, "Stage Scene");
	Novice::ScreenPrintf(0, 30, "Push Space");
}