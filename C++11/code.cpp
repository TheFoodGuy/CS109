//this is a file to hold all the snippets of code. 
//1. lambda expression 
//2. auto deduction type. 

auto subtract = [](int x, int y){ return x - y;};
cout << subtract(10,4) << endl; 


//3. Ranged for loop 
int balanceThis[5] = {1,2,3,4,5}; 
for (int i : c){
    cout << i << endl; 
} //prints 1 2 3 4 5 (with \n in between)\

//4. enum classes or strongly typed enumeration 
enum class landAnimals {elephant, landdog, lion};
enum class seaAnimals {whale, seadog, shark};

//vs. 
enum  landAnimals1 {elephant, landdog, lion};
enum  seaAnimals1 {whale, seadog, shark};
//respectively, with class, they are distinct types, but with no class, 
//they are integers 

//5. variadic templates much like variadic function 
template<typename T>
int rectangle_area(T a, T b){
    return a * b; 
}

template<typename T, typename... Calcul>
int rectangle_area(T a, T b, Calcul... calcul){
    return a * b + rectangle_area(calcul...);
}
int comehere = rectangle_area(1,2,3,4,5,6,7,8,9,10); //190
//would need a base case in order for it to recusively act. 

//6. Nullptr
void f(int){cout << "int" << endl;}
void f(char*){cout << "char" << endl; }
f(nullptr_t); //will return "char" instead of "int"

//7. Delegating Constructor 
class find {
    public:
        find(){missing(char item);}
        find(char location, int coordinates) : find() {findLocation();}
};

//8. Final keyword - any class can not derived from dog. 
struct dog final{};
struct cat : dog{}; //error cannot inherit or derived from dog class


//9. Constexpr
constexpr int A(){return 3;}
int arr[A() + 3] //works 
//it will always be a constant no matter what and forces the computation
//to occur at compile time. 


//10. Rvalue Reference - fix this after work.

int&& ref_r = 99; 
int& ref_l = 10; 

