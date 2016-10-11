//5. variable template 

template<typename T> 
constexpr T initialY = T(10);

auto slopeY = [](auto a){
    return initialY<decltype(a)>  - 5;
};