#pragma once
#include "IScene.h"

class ClearScene : public IScene
{
public://�����o�֐�

	///����������
	void Initialize() override;

	///�X�V����
	void Update(char* keys, char* preKeys) override;

	///�`�揈��
	void Draw() override;
};

