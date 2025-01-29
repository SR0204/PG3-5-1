#include "ClearScene.h"

void Initilize() {}

void ClearScene::Update(char* keys, char* preKeys) {
	//スペースキーを押した瞬間
	if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == false) {
		//シーンをTITLEに切り替える
		sceneNo = TITLE/*enum SceneのTITLE*/;
	}
}

void Clear/*描画処理*/() {
	Novice::ScreenPrintf(0, 0, "Clear Scene");
	Novice::ScreenPrintf(0, 30, "Push Space");
}