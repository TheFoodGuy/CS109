//4. enum classes or strongly typed enumeration 

enum class landAnimals {elephant, landdog, lion};
enum class seaAnimals {whale, seadog, shark};

//vs. 
enum  landAnimals1 {elephant, landdog, lion};
enum  seaAnimals1 {whale, seadog, shark};

if(landAnimals1 == seaAnimals1){} //will work 
if(landAnimals == seaAnimals){} //will not work as they are distinct 