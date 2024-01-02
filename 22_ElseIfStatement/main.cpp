#include <iostream>


int main(){
	//else if statements
	std::cout << std::endl;
	std::cout << "else if statements" << std::endl;
	
    const int A{10}; // const initialise and doesnt let to change the A value in future. if it happened you will recieve compailer error
    const int B{20};
    const int C{30};
    const int D{40};
    const int E{50};
    const int F{60};
    const int G{70};

    int selectedChar{30};


    std::cout << std::endl;
	if(selectedChar == A){
        std::cout << "A is selected." << std::endl;
    }
    else if (selectedChar == B) {
        std::cout << "B is selected." << std::endl;
    }
    else if (selectedChar == C) {
        std::cout << "C is selected." << std::endl;
    }
    else if (selectedChar == D) {
        std::cout << "C is selected." << std::endl;
    }
    else if (selectedChar == E) {
        std::cout << "D is selected." << std::endl;
    }
    else if (selectedChar == F) {
        std::cout << "E is selected." << std::endl;
    }
    else if (selectedChar == G) {
        std::cout << "F is selected." << std::endl;
    }
    
    std::cout << "Moving on." << std::endl;
    return 0;
}