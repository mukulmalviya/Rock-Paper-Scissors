#include<bits/stdc++.h>
using namespace std;

int ai()
{
    int choice = rand() % 100;
    choice = choice%3;
    return choice;
}

int main()
{
    string tools[] ={"Rock","Paper","Scissors"};
    int playerInput, aiOutput;
    static int playerScore = 0;
    static int aiScore = 0;
    char playagain;

    cout<<"\n\nWelcome to Rock-Paper-Scissors Game\nEnter your choice \n 0 for Rock \n 1 for Paper \n 2 for Scissors \n";
    cin>>playerInput;
    while(playerInput <0 || playerInput >2){
        cout<<"Invalid Choice, Re-Enter Your Choice\n";
        cin>>playerInput;
    }

    aiOutput = ai();

    cout<<"\nYou chose "<<tools[playerInput]<<"\nAI chose "<<tools[aiOutput]<<endl;

    //gamelogic
    if(aiOutput == playerInput){
        cout<<"Tie!\n";
        playerScore++;
        aiScore++;
    }


    if((playerInput == 0 && aiOutput == 2) || (playerInput == 2 && aiOutput == 0)){
        cout<<tools[0]<<" destroyed scissor.\n";
        if(playerInput == 0){
            cout<<"Player Wins !!\n";
            playerScore++;
        }
        else{
            cout<<"AI wins !!\n";
            aiScore++;
        }
    }
    if((playerInput == 0 && aiOutput == 1) || (playerInput == 1 && aiOutput == 0)){
        cout<<tools[1]<<" covered Rock.\n";
        if(playerInput == 1){
            cout<<"Player Wins !!\n";
            playerScore++;
        }
        else{
            cout<<"AI wins !!\n";
            aiScore++;
        }
    }
    if((playerInput == 2 && aiOutput == 1) || (playerInput == 1 && aiOutput == 2)){
        cout<<tools[2]<<" shredded paper.\n";
        if(playerInput == 2){
            cout<<"Player Wins !!\n";
            playerScore++;
        }
        else{
            cout<<"AI wins !!\n";
            aiScore++;
        }
    }

    cout<<"\n\nScores-----------------\nPlayer = "<<playerScore<<"\nAI = "<<aiScore<<endl<<"------------------------\n";
    cout<<"Enter 'Y' to Play Again! Any other key to quit\n";
    cin>>playagain;
    if(playagain == 'y' || playagain == 'Y')
        main();

    return 0;
}
