//1. return type deduction 
int fall(int j, double k, float yo){
    auto check = j + k + yo;
    return check; 
}

//2. Generic Lambdas 
    auto myfun = [](auto x, auto y){
        cout << x + y << endl;
    };
    myfun(1,2.1324);
//auto can be nearly anything, even classes as such. 

//3. [[deprecated]] Attribute 
[[deprecated]] void chickenbutt(char chickenname, char target){}

//4. digit separators 
int a = 100000000;
int b = 100'000'000;

//5. variable template 
template<typename T> 
T n = T(5);
<int>n = 10; //=10
n<double> // = 5
