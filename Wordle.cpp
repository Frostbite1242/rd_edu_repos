#include <iostream>
#include <string>
#include <fstream>
#include <random>
std::string wordGeneration(std::string dataBase[]);
void wordGuess(std::string word, std::string playerWord);
void dateBaseTest();
int main()
{
    int menu;
    //dateBaseTest(); 
    std::cout << "Hello Player! Glad to see you!\n";
    std::string dataBase[50];
    std::ifstream file("DataBase.txt");
    if (!file.is_open()) {
        std::cerr << "Error opening file." << std::endl;
    }
    for (int i = 0; i < 50; i++) {
        if (!(file >> dataBase[i])) {
            break;
        }
    }
    file.close();
    do {
        std::cout << "1 - Start\n2 - etc\n 0 - Exit\n";
        std::cin >> menu;
        std::string word = wordGeneration(dataBase);
        wordGuess(word, "*****");

    } while (menu != 0);
}std::string wordGeneration(std::string dataBase[]) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 49);
    int randomWordIndex = dis(gen);
    return dataBase[randomWordIndex];
}void wordGuess(std::string word, std::string playerWord) {
    std::string playerCurrentTry ;
    int amountTries = 0;
    do {
        playerCurrentTry = "*****";
        std::cout << "Guess the word:\n";
        std::cin >> playerWord;
        if (playerWord == "0") {
            std::cout << "see you soon:)";
            return ;
        }
        else {
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                    if (std::tolower(playerWord[j]) == word[i]) {
                        playerCurrentTry[j] = word[i];
                    }
                    if (std::tolower(playerWord[j]) == word[j]) {
                        playerCurrentTry[j] = std::toupper(word[j]);
                    }

                }

            }
        }
        
        if (playerCurrentTry == word) {
            std::cout << "Player win, player word: " << playerCurrentTry << ", computer word: " << word;
        }
        amountTries++;
        std::cout << playerCurrentTry << "\n";
        std::cout << "Tries amount: " << amountTries << "\n";
        
    } while (playerWord != word);
}void dateBaseTest() {
    std::string dataBaseFileTest[50];
    std::ifstream file("DataBase.txt");
    if (!file.is_open()) {
        std::cerr << "Error opening file." << std::endl;
    }
    for (int i = 0; i < 50; i++) {
        if (!(file >> dataBaseFileTest[i])) {
            break;
        }
    }
    file.close();
    for (int i = 0; i < 50; i++) {
        std::cout << dataBaseFileTest[i] << " \n";
    }

}

