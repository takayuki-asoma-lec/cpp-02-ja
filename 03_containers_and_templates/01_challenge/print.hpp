// コードを入力してください
#include <iostream>
#include <algorithm>

template <typename T>
void print_elements(const T &  container){
    std::for_each(std::begin(container), std::end(container), [](const auto &e)
                  { std::cout << e << std::endl; });
}