// コードを入力してください
#pragma once

struct Rectangle{
    float get_area() const;

    float width{0};
    float height{0};
};

float rectangle_area(const Rectangle &rec);
