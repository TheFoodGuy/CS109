//2. Generic Lambdas 
    auto myfun = [](auto x, auto y){
        cout << x + y << endl;
    };
    myfun(1,2.1324);
//auto can be nearly anything, even classes as such. 