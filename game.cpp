#include <iostream>
#include <string>
int Strikes(std::string guess, std::string answer) {
    int strikes = 0;
    for (int i = 0; i < 3; ++i) {
        if (guess[i] == answer[i]) {
            strikes++;
        }
    }
    return strikes;
}

int Balls(std::string guess, std::string answer) {
    int balls = 0;
    if(guess[0] == answer[1] || guess[0] == answer[2] ) {
        balls++;
    }
    if(guess[1] == answer[0] || guess[1] == answer[2] ) {
        balls++;
    }
    if(guess[2] == answer[0] || guess[2] == answer[1]) {
        balls++;
    }
    return balls;
}
std::string util();
void Game() {
    std::string answer = util();
    //std::cout << "Answer is " << answer << std::endl;
    int count = 5;
    while (1) {
        std::cout << count << " chances left." << std::endl;
        std::string guess;
        std::cout << "Enter a guess: ";
        std::cin >> guess;
        
        int strikes = Strikes(guess, answer);
        int balls = Balls(guess, answer);

        if (strikes == 3) {
            std::cout << "You Win!" << std::endl;
            break;
        }
        else std::cout << "Strikes: " << strikes << ", Balls: " << balls << std::endl;
        count--;
        if (count == 0) {
            std::cout << "You Lose!" << std::endl;
            break;
        }
    }
}
