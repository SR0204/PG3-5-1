#include "TitleScene.h"

void Initilize() {}

void TitleScene::Update(char* keys, char* preKeys) {

	//スペースキーを押した瞬間
	if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == false) {
		//シーンをSTAGEに切り替える
		sceneNo = STAGE /*enum SceneのSTAGE*/;
	}
}

void TitleScene/*描画処理*/() {
	Novice::ScreenPrintf(0, 0, "Title Scene");
	Novice::ScreenPrintf(0, 30, "Push Space");
}
