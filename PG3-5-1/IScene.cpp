#include "IScene.h"

//�V�[���̓^�C�g���ŏ�����
int IScene::sceneNo = TITLE;/*enum Scene��TITLE*/

//���z�f�X�g���N�^��`
IScene::~IScene() {}

//�V�[���ԍ��Q�b�^�[
int IScene::GetSceneNo() { return sceneNo; }