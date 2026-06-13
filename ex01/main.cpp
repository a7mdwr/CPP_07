#include "iter.hpp"

template <typename T> void printing(T &obj){
    std::cout << obj << " ";
}

int main(){
    int arrays[] = {1, 2, 3, 4};
    size_t len = 4;

    iter(arrays, len, printing<int>);
    std::cout << std::endl;
}