#include "Scene.h"
#include <iostream>

//コンストラクタ
//@param nameシーン名
Scene::Scene(const char* name) : name(name) {

}
//デスストラクタ
//@param nameシーン名
Scene::~Scene() {
	Finelize();
}

//シーンを活動状態にする
void Scene::Play() {
	isActive = true;
}

//シーンを停止状態にする
void Scene::Stop() {
	isActive = false;
}

//シーンを表示する
void Scene::Show() {
	isVisible = true;
}
//シーンを非表示する
void Scene::Hide() {
	isVisible = false;
}

//シーンを取得する
//@return シーン名
const std::string& Scene::Name() const
{
	return name;
}
//シーンの活動状態を調べる
bool Scene::isActive() const
{
	return isActive;
}

/*
シーンの表示状態を調べる

@retval true　活動している
@retval false 停止している
*/

bool Scene::isVisible()const {
	return isVisible;
}

