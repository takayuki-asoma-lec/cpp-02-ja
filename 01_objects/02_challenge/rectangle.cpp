// コードを入力してください
#include "rectangle.h"

float Rectangle::get_area()const {
    return width * height;
}

float rectangle_area(const Rectangle & rec){
    return rec.get_area();
}