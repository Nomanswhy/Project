#include <iostream>
#include "Player_Class.h"
using namespace std;

int main() {

    cout << "Hello" << endl;

    int Number_of_players;
    string Player_Names[Number_of_players] = {"Player1", "Player2", "Player3", "Player4", "Player5"}; 

    int Players_Ranks[Number_of_players] = {2231, 2322, 2134, 2233, 2412};

    int Players_ID[Number_of_players]; 

    for (i = 0; i < Number_of_players; i++){

        Players_ID[i] += i;

    }

    for (int i = 0; i < Number_of_players ; i++){

        Class_definition_player Player[i];  

        Player.Player_Name = Player_Name[i];
        Player.Player_Rank = Player_Rank[i];
        Player.Player_ID = Player_ID[i];
        

        cout << "Players name is > " << Player_Name[i] << endl;
        cout << "Players rank is > " << Player_Rank[i] <<endl;
        cout << "Players ID is > " << Players_ID[i] <<endl;

    }

    return 0;

}
