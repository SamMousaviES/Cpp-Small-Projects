#include <iostream>


int main(){
	//else if statements
	std::cout << std::endl;
	std::cout << "else if statements" << std::endl;
	
    const int Pen{10}; // const initialise and doesnt let to change the A value in future. if it happened you will recieve compailer error
    const int Spray{20};
    const int Rectangle{30};
    const int Circle{40};
    const int Star{50};
    const int Elipse{60};
    const int Pencil{70};

    int tool{30};


    std::cout << std::endl;
    switch (tool)
    {
        case Pen:
        {
            std::cout << "Selected tool is Pen." << std::endl;
        }
        break;
        case Spray:
        {
            std::cout << "Selected tool is Spray." << std::endl;
        }
        break;
        case Rectangle:
        {
            std::cout << "Selected tool is Rectangle." << std::endl;
        }
        break;
        case Circle:
        {
            std::cout << "Selected tool is Circle." << std::endl;
        }
        break;
        case Star:
        {
            std::cout << "Selected tool is Star." << std::endl;
        }
        break;
        case Elipse:
        {
            std::cout << "Selected tool is Elipse." << std::endl;
        }
        break;
        case Pencil:
        {
            std::cout << "Selected tool is Pencil." << std::endl;
        }
        break;
    default:
        {
        std::cout << "Selected tool is not defiend." << std::endl;
        }
        break;
    }
    std::cout << "Moving on." << std::endl;
    return 0;




    std::cout << "Use several case with one outcome:" << std::endl;

     switch (tool)
    {
        case Pen:
        case Spray:
        case Rectangle:
        case Circle:
        case Star:
        case Elipse:
        case Pencil:
        {
            std::cout << "a tool is Selected." << std::endl;
        }
        break;
    default:
        {
        std::cout << "Selected tool is not defiend." << std::endl;
        }
        break;
    }
    std::cout << "Moving on." << std::endl;


    std::cout << "Reminder: string is not possible as a Case:" << std::endl;
    std::string name {"John!"};
    // switch (tool)
    // {
    //     case name:
    //     {
    //         std::cout << "a tool is Selected." << std::endl;
    //     }
    //     break;
    // default:
    //     {
    //     std::cout << "Selected tool is not defiend." << std::endl;
    //     }
    //     break;
    // }
    // std::cout << "Moving on." << std::endl;
}