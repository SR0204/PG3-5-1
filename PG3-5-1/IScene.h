#pragma once
#include <Novice.h>

// �V�[������񋓂Œ�`
enum Scene {
	TITLE,//�V�[���^�C�g��
	STAGE,//�V�[���X�e�[�W
	CLEAR,//�V�[���N���A
};

// �V�[�����ł̏������s�����N���X
class IScene
{
protected:
	//�V�[���ԍ����Ǘ�����ϐ�
	static int sceneNo;

public:
	//�p����Ŏ��������֐�
	//���ۃN���X�Ȃ̂ŏ������z�֐�

	// ����������
	virtual void Initialize() = 0;

	// �X�V����
	virtual void Update(char* keys, char* preKeys) = 0;

	// �`�揈��
	virtual void Draw() = 0;

	// ���z�f�X�g���N�^
	virtual ~IScene();

	// �V�[���ԍ��Q�b�^
	int GetSceneNo();
};
