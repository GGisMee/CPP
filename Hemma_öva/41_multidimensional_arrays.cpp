#include <iostream>

int main()
{
    std::string cars[][3] = {{"Mustang", "Escape", "F-150"},{"Corvette","Equinox", "Silverado"}, {"Challanger", "Durango", "Ram 1500"}};
    std::cout<<cars[1][2]<<"\n\n";

    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    for (int i=0; i< rows; i++){
        for (int j=0; j<columns;j++){
            std::cout<<cars[i][j]<<" ";
        }
        std::cout<<"\n";
    }
    
}