// コードを入力してください
#include "scene.hpp"
#include "square.hpp"
#include "circle.hpp"


int main(){
    Scene scene;
    auto sq = std::make_shared<Square>();
    auto ci = std::make_shared<Circle>();
    scene.add(sq.get());
    scene.add(ci.get());
    scene.render();
}