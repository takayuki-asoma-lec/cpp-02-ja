// コードを入力してください
#include <vector>

template <typename T>
class Stack{
public:
    void push(const T &value){
        container_.push_back(value);
    };
    void pop(){
        if(container_.size()==0)
            return;
        container_.pop_back();
    };
    T top() const{
        return container_.back();
    };
    bool is_empty() const{
        return container_.size() == 0;
    };
private:
    std::vector<T> container_;
};
