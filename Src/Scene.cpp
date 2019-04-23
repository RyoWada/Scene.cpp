#include "Scene.h"
#include <iostream>

//�R���X�g���N�^
//@param name�V�[����
Scene::Scene(const char* name) : name(name) {

}
//�f�X�X�g���N�^
//@param name�V�[����
Scene::~Scene() {
	Finelize();
}

//�V�[����������Ԃɂ���
void Scene::Play() {
	isActive = true;
}

//�V�[�����~��Ԃɂ���
void Scene::Stop() {
	isActive = false;
}

//�V�[����\������
void Scene::Show() {
	isVisible = true;
}
//�V�[�����\������
void Scene::Hide() {
	isVisible = false;
}

//�V�[�����擾����
//@return �V�[����
const std::string& Scene::Name() const
{
	return name;
}
//�V�[���̊�����Ԃ𒲂ׂ�
bool Scene::isActive() const
{
	return isActive;
}

/*
�V�[���̕\����Ԃ𒲂ׂ�

@retval true�@�������Ă���
@retval false ��~���Ă���
*/

bool Scene::isVisible()const {
	return isVisible;
}

