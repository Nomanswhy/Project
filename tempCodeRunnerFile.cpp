#include <iostream>
using namespace std;

int main() {

    int Number_of_players;
    std::string Player_Names[Number_of_players] = {"Player1", "Player2", "Player3", "Player4", "Player5"}; 

    for (int i = 0; i < Number_of_players ; i++){

        cout << Player_Names[i] << " " << flush;

    }

    return 0;

}
