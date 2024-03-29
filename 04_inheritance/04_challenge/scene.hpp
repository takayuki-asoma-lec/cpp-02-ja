// コードを入力してください
#pragma once
#include "drawable.hpp"
#include <vector>

class Scene{
public:
    void render() const;
    void add(Drawable*  drawable);

private:
    std::vector<Drawable*> drawables_;
};
