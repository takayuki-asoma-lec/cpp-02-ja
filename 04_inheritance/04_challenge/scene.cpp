// コードを入力してください
#include "scene.hpp"

void Scene::render() const{
    for(const auto & drawable : drawables_){
        if(drawable){
            drawable->draw();
        }
    }
}

void Scene::add(Drawable * drawable){
    drawables_.push_back(drawable);
}