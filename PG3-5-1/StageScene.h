#pragma once
#include "IScene.h"

/// <summary>
/// IScene�N���X���p������StageScene��錾
/// </summary>
class StageScene : public IScene
{
public://�����o�֐�

	///����������
	void Initialize() override;

	///�X�V����
	void Update(char* keys, char* preKeys) override;

	///�`�揈��
	void Draw() override;

};