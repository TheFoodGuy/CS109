//5. variadic templates 
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