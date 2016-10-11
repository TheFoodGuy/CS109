//1. return type deduction for normal functions 

auto multiply(double i){
    if(i ==1.123)
        return i;
    else
        return multiply(i-1)*1.123; 
}

