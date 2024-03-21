// コードを入力してください
#include "stack.hpp"
#include <vector>
#include <cassert>

int main(){
    Stack<int> st;
    assert(st.is_empty());
    st.push(1);
    assert(!st.is_empty());
    assert(st.top() == 1);
    st.pop();
    assert(st.is_empty());
}