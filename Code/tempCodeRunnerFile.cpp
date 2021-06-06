#include <iostream>
using namespace std;

int main() {

    int Number_of_players;
    string Player_Names[Number_of_players] = {"Player1", "Player2", "Player3", "Player4", "Player5"}; 

    cout << Number_of_players << endl;

    for (int i = 0; i < 5 ; i++){

        cout << Player_Names[i] << endl;

    }

    return 0;

}
