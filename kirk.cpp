#include <iostream>
// #include <fstream>
#include <string>
using namespace std;

class Game {
public:
    Game() { }
    string getEducation();
    void startGame();
    void loadGame();
private:
    string playerName;
    string gameFile;
    string education;
    void universityStory();
    void workStory();
};

void Game::startGame() {
    cout << "Welcome to the Game!\n";
    cout << "1. New Game\n";
    cout << "2. Load Game\n";
    cout << "3. Quit Game\n";

    int choice;
    cin >> choice;
    if (choice == 1) {
        cout << "Enter your name: ";
        cin >> playerName;

        gameFile = playerName + ".txt";
        ofstream outfile(gameFile);

        outfile << "Player name: " << playerName << endl;
        outfile.close();

        cout << "Starting new game...\n";
        universityStory();
    }
    else if (choice == 2) {
        loadGame();
    }
    else if (choice == 3) {
        cout << "Goodbye!\n";
        exit(0);
    }
    else {
        cout << "Invalid choice. Please try again.\n";
        startGame();
    }
}

void Game::loadGame() {
    cout << "Enter your name: ";
    cin >> playerName;

    gameFile = playerName + ".txt";
    ifstream infile(gameFile);

    if (!infile) {
        cout << "No saved game found for " << playerName << ".\n";
        startGame();
    }

    string line;
    while (getline(infile, line)) {
        cout << line << endl;
    }
    infile.close();

    cout << "Loading saved game...\n";
}
int attendUniversity(Game& game) {
    cout << "You have chosen to attend university." << endl;
    cout << "Please choose one of the following universities:" << endl;
    cout << "1. Harvard" << endl;
    cout << "2. MIT" << endl;
    cout << "3. Stanford" << endl;
    cout << "4. Oxford" << endl;
    cout << "5. Cambridge" << endl;

    int universityChoice;
    cin >> universityChoice;

    switch (universityChoice) {
        case 1:
            cout << "You have chosen Harvard." << endl;
            break;
        case 2:
            cout << "You have chosen MIT." << endl;
            break;
        case 3:
            cout << "You have chosen Stanford." << endl;
            break;
        case 4:
            cout << "You have chosen Oxford." << endl;
            break;
        case 5:
            cout << "You have chosen Cambridge." << endl;
            break;
        default:
            cout << "Invalid choice. Please choose a number between 1 and 5." << endl;
            attendUniversity(game);
            break;
    }

    cout << "Please choose your major:" << endl;
    if (universityChoice == 1 || universityChoice == 2 || universityChoice == 3) {
        cout << "1. Computer engineering" << endl;
        cout << "2. Electrical engineering" << endl;
    } else {
        cout << "1. Law" << endl;
        cout << "2. Geography" << endl;
    }

    int majorChoice;
    cin >> majorChoice;

    if (universityChoice == 1 || universityChoice == 2 || universityChoice == 3) {
        switch (majorChoice) {
            case 1:
                cout << "You have chosen computer engineering." << endl;
                game.setEducation("Computer Engineering");
                break;
            case 2:
                cout << "You have chosen electrical engineering." << endl;
                pgame.setEducation("Electrical Engineering");
                break;
            default:
                cout << "Invalid choice. Please choose 1 or 2." << endl;
                attendUniversity(player);
                break;
        }
    } else {
    switch (majorChoice) {
        case 1:
            cout << "You have chosen law." << endl;
            game.setEducation("Law");
            break;
        case 2:
            cout << "You have chosen geography." << endl;
            game.setEducation("Geography");
            break;
        default:
            cout << "Invalid choice. Please choose 1 or 2." << endl;
            attendUniversity(game);
            break;
    }
}

    cout << "Did you study well?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;

    int studyChoice;
    cin >> studyChoice;

    if (studyChoice == 1) {
        cout << "Congratulations! You graduated with flying colors." << endl;
        player.setStatus("Graduated with flying colors");
    } else if (studyChoice == 2) {
        cout << "You did not pass well. Learn from your mistakes and try again." << endl;
        player.setStatus("Did not pass well");
    } else {
        cout << "Invalid choice. Please choose 1 or 2." << endl;
        attendUniversity(player);
    }
}
void startWorking() {
    cout << "You decided to start working.\n";
    cout << "Do you want to work for yourself or for someone else? (Enter 1 for yourself, 2 for someone else): ";
    int choice;
    cin >> choice;

    if (choice == 1) {
        cout << "You decided to work for yourself.\n";
        cout << "You work hard and eventually become successful.\n";
        saveToFile("success");
    }
    else if (choice == 2) {
        cout << "You decided to work for someone else.\n";
        cout << "You are tasked to work with a colleague who is more skilled than you to compete for a promotion.\n";
        cout << "Do you want to go against some of your employer's rules to achieve this or continue working in your current position without taking the risk? (Enter 1 to take the risk, 2 to continue working): ";
        int choice2;
        cin >> choice2;

        if (choice2 == 1) {
            cout << "You take a risky approach and try to make a fortune.\n";
            cout << "After some time, you are caught and sent to jail.\n";
            cout << "You are advised not to cut corners in life.\n";
            saveToFile("jail");
        }
        else if (choice2 == 2) {
            cout << "You decide to work hard and wait for a promotion.\n";
            cout << "Do you work very hard or just work hard? (Enter 1 for very hard, 2 for just hard): ";
            int choice3;
            cin >> choice3;

            if (choice3 == 1) {
                cout << "You work very hard and are eventually promoted.\n";
                saveToFile("promotion");
            }
            else if (choice3 == 2) {
                cout << "You work hard but not hard enough to get promoted.\n";
                cout << "You are advised to work hard to achieve what you want in life.\n";
                saveToFile("hard work");
            }
            else {
                cout << "Invalid choice.\n";
            }
        }
        else {
            cout << "Invalid choice.\n";
        }
    }
    else {
        cout << "Invalid choice.\n";
    }
}
// function to handle the "start working" path
void startWorking() {
    cout << "You decided to start working.\n";
    cout << "Do you want to work for yourself or for someone else? (Enter 1 for yourself, 2 for someone else): ";
    int choice;
    cin >> choice;

    if (choice == 1) {
        cout << "You decided to work for yourself.\n";
        cout << "You work hard and eventually become successful.\n";
        saveToFile("success");
    }
    else if (choice == 2) {
        cout << "You decided to work for someone else.\n";
        cout << "You are tasked to work with a colleague who is more skilled than you to compete for a promotion.\n";
        cout << "Do you want to go against some of your employer's rules to achieve this or continue working in your current position without taking the risk? (Enter 1 to take the risk, 2 to continue working): ";
        int choice2;
        cin >> choice2;

        if (choice2 == 1) {
            cout << "You take a risky approach and try to make a fortune.\n";
            cout << "After some time, you are caught and sent to jail.\n";
            cout << "You are advised not to cut corners in life.\n";
            saveToFile("jail");
        }
        else if (choice2 == 2) {
            cout << "You decide to work hard and wait for a promotion.\n";
            cout << "Do you work very hard or just work hard? (Enter 1 for very hard, 2 for just hard): ";
            int choice3;
            cin >> choice3;

            if (choice3 == 1) {
                cout << "You work very hard and are eventually promoted.\n";
                saveToFile("promotion");
            }
            else if (choice3 == 2) {
                cout << "You work hard but not hard enough to get promoted.\n";
                cout << "You are advised to work hard to achieve what you want in life.\n";
                saveToFile("hard work");
            }
            else {
                cout << "Invalid choice.\n";
            }
        }
        else {
            cout << "Invalid choice.\n";
        }
    }
    else {
        cout << "Invalid choice.\n";
    }
}

// main function to handle the game flow
int main() {
    // display homepage
    cout << "Welcome to the game!\n";
    cout << "Do you want to start a new game or load an existing game file or quit the game? (Enter 1 for new game, 2 for load game, 3 to quit): ";
    int choice;
    cin >> choice;

    if (choice == 1) {
        // create a new game file using user's name
        string name;
        cout << "Enter your name: ";
        cin >> name;
        createNewFile(name);

        // display initial part of the story
        cout << "You are at a crossroad in life. Do you want to attend university or start working? (Enter 1 for attend university, 2 for start working): ";
        int choice2;
        cin >> choice2;

        if (choice2 == 1) {
            attendUniversity();
        }
        else if (choice2 == 2) {
            startWorking();
        }
        else {
            cout << "Invalid choice.\n";
        }
    }
    else if (choice == 2) {
        // load existing game file
        string name;
        Game::loadGame();
    }
    else if (choice == 3){
        exit(0);
    }

}