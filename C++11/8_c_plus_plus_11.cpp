//8. Final keyword - any class can not derived from dog. 
struct dog final{};
struct cat : dog{}; //error cannot inherit or derived from dog class