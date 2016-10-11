//6. Nullptr
void f(int){cout << "int" << endl;}
void f(char*){cout << "char" << endl; }
f(nullptr_t); //will return "char" instead of "int"