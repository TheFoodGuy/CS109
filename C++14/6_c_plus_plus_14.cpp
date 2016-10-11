//6. decltype(auto)

decltype(auto) square_it = [](auto x){
    return x * x;
};

auto ya = 12.2;
auto ha = square_it(ya);
cout << ha << endl;
