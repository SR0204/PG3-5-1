#pragma once
#include <memory>
#include "IScene.h"
#include "TitleScene.h"
#include "StageScene.h"
#include "ClearScene.h"

/// GameManeger�N���X
class GameManeger
{
private:
	//�V�[���ێ������o�֐�
	std::unique_ptr</*Scene�C���^�[�t�F�[�X*/> sceneArr_[3];

	//���݂̃V�[��
	int currentSceneNo_;

	//1�O�̃V�[��
	int prevSceneNo_;

public:
	GameManeger(); //�R���X�g���N�^
	~GameManeger(); //�f�X�g���N�^

	//�Q�[�����[�v�ŌĂяo���֐�
	int Run();
};

