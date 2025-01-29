#include "StageScene.h"

void Initilize() {}

void StageScene::Update(char* keys, char* preKeys) {

	//スペースキーを押した瞬間
	if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == false) {
		//シーンをCLEARに変える
		sceneNo = CLEAR;
	}
}

void StageScene/*描画処理*/() {
	Novice::ScreenPrintf(0, 0, "Stage Scene");
	Novice::ScreenPrintf(0, 30, "Push Space");
}