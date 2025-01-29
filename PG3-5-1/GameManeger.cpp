#include "GameManeger.h"

/// �R���X�g���N�^�ɂ�鏉��������
GameManeger::GameManeger() {

	//�e�V�[���̔z��
	sceneArr_[TITLE] = std::make_unique<TitleScene>();//�V�[���^�C�g��
	sceneArr_[STAGE] = std::make_unique<StageScene>();//�V�[���Q�[��
	sceneArr_[CLEAR] = std::make_unique<TitleScene>();//�V�[���N���A

	//�����V�[�����^�C�g���ɐݒ肷��
	currentSceneNo_ = TITLE;
	prevSceneNo_ = 0;
}

//�f�X�g���N�^�ɂ��delete����
GameManeger::~GameManeger() {}

int GameManeger::Run() {

	// �L�[���͌��ʂ��󂯎�锠
	char keys[256] = { 0 };
	char preKeys[256] = { 0 };

	while (Novice::ProcessMessage() == 0) {
		Novice::BeginFrame(); //�t���[���̊J�n

		// �L�[���͂��󂯎��
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);

		//�V�[���̃`�F�b�N
		prevSceneNo_ = currentSceneNo_;
		currentSceneNo_ = sceneArr_[currentSceneNo_]->GetSceneNo();

		//�V�[���ύX�`�F�b�N
		if (prevSceneNo_ != currentSceneNo_)
			sceneArr_[currentSceneNo_]->Initialize();

		/// ���X�V������������
		//�V�[�����Ƃ̍X�V����
		sceneArr_[currentSceneNo_]->Update(keys, preKeys);
		/// ���X�V���������܂�

		/// ���`�揈����������
		//�V�[�����Ƃ̕`�揈��
		sceneArr_[currentSceneNo_]->Draw();
		/// ���`�揈�������܂�

		// �t���[���̏I��
		Novice::EndFrame();

		// ESC�L�[�������ꂽ�烋�[�v�𔲂���
		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0)
			break;
	}

	return 0;
}