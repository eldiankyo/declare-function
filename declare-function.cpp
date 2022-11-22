#include <iostream>

//prototype declaration
int FindArea(int length, int width);

int main(){
    int lengthOfYard;
    int widthOfYard;
    int areaOfYard;

    std::cout << "How long is your yard? ";
    std::cin >> lengthOfYard;
    std::cout << "How wide is your yard? ";
    std::cin >> widthOfYard;
    std::cout << "\n";

    areaOfYard = FindArea(lengthOfYard, widthOfYard);

    std::cout << "Your yard is " << areaOfYard << " square feet." << std::endl;
    
    return 0;
}

//function definition
int FindArea(int l, int w){
    return l * w;
}