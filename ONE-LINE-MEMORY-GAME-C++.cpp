// code by Abdlerhman Reda Mohamed

#include <bits/stdc++.h>
#include <stdlib.h>
#include <cstdlib>
#include <unistd.h>


using namespace std;

int player1_score = 0;
int player2_score = 0;

string arr[20] = {"1" ,"2" ,"3" ,"4" ,"5" , "6", "7", "8", "9", "10" , "11", "12", "13", "14", "15", "16", "17", "18", "19","20"};
string charachters[20] = {"A","B","C","D","E","F","G","H","I","J","A","B","C","D","E","F","G","H","I","J"};

void player1(){
    int player1_num1 , player1_num2;
    cout << "Score is : " << "[ Player 1 ] : " << player1_score << "[ Player 2 ]  : " << player2_score << "\n" ;
    cout <<"Welcome :";
    cout << "| ";
    for (const auto & item : arr)
    {
        cout << item << " | ";
    }

    cout << endl << "Player#1 Turn : "<< endl;

    cout << "Enter a First Number From [1,20] : "<< endl ;
    cin >> player1_num1 ;

    cout << "Enter a Second Number From [1,20] : "<< endl ;
    cin >> player1_num2 ;

    player1_num1 = player1_num1-1;
    player1_num2 = player1_num2-1;

    if ( player1_num1 < 20 && player1_num1 >= 0  && player1_num2 < 20 && player1_num2 >= 0 && player1_num1 != player1_num2 ){
        if (charachters[player1_num1] == charachters[player1_num2])
        {
            if (arr[player1_num1] == "*" or arr[player1_num2] == "*")
            {
                cout <<"Stop Cheating !! , The Number is Taking Before ..";
                player1();
            }else {
                arr[player1_num1] = charachters[player1_num1];
                arr[player1_num2] = charachters[player1_num2];
                cout << "| ";
                for (const auto & item : arr)
                {
                    cout << item << " | ";
                }
                cout << endl;
                    charachters[player1_num1] = "*";
                    charachters[player1_num2] = "*";
                    player1_score += 1;
                    arr[player1_num1] = "*";
                    arr[player1_num2] = "*";
                    sleep(1);
                    system("CLS");
                    cout << "SCREEN CLEARED " << endl;

            }

        }
        else
        {
            if (arr[player1_num1] == "*" or arr[player1_num2] == "*")
            {
                cout <<"Stop Cheating !! , The Number is Taking Before .."<< endl;
                player1();
            }else {
                int j=0;
                string temp[20];
                for (int i = 0 ; i<20; i++ ){
                    temp[j]=arr[i];
                    j++;
                }
                temp[player1_num1] = charachters[player1_num1];
                temp[player1_num2] = charachters[player1_num2];
                for (const auto & item : temp)
                {
                    cout << item << " | ";
                }
                cout << endl;
                sleep(1);
                system("CLS");
                cout << "SCREEN CLEARED "<< endl;
            }
        }
    }
    else {
        cout << " Invaild numbers !! be sure that you add a number from [1:20].."<< endl ;
        player1();
    }
}

void player2(){
    cout << "Score is : " << "[ Player 1 ] : " << player1_score << "[ Player 2 ] : " << player2_score << "\n" ;
    int player2_num1 , player2_num2;
    cout <<"Welcome :";
    cout << "| ";
    for (const auto & item : arr)
    {
        cout << item << " | ";
    }

    cout << endl << "Player#2 Turn " << endl;

    cout << "Enter a First Number From [1,20] : "<< endl ;
    cin >> player2_num1 ;

    cout << "Enter a Second Number From [1,20] : "<< endl ;
    cin >> player2_num2 ;

    player2_num1 = player2_num1-1;
    player2_num2 = player2_num2-1;

    if ( player2_num1 < 20 && player2_num1 >= 0  && player2_num2 < 20 && player2_num2 >= 0 && player2_num1 != player2_num2 )
        {
        if (charachters[player2_num1] == charachters[player2_num2])
            {
            if (arr[player2_num1] == "*" ||  arr[player2_num2] == "*")
            {
                cout <<"Stop Cheating !! , The Number is Taking Before .."<< endl;
                player2();
            }else
                {
                arr[player2_num1] = charachters[player2_num1];
                arr[player2_num2] = charachters[player2_num2];
                cout << "| ";
                for (const auto & item : arr)
                {
                    cout << item << " | ";
                }
                cout << endl ;
                player2_score += 1;
                arr[player2_num1] = "*";
                arr[player2_num2] = "*";
                sleep(1);
                system("CLS");
                cout << "SCREEN CLEARED "<< endl;
                }
            }
        else
        {
            if (arr[player2_num1] == "*" ||  arr[player2_num2] == "*")
            {
                cout <<"Stop Cheating !! , The Number is Taking Before .."<< endl;
                player2();
            } else {
            int j=0;
            string temp[20];
            for (int i = 0 ; i<20; i++ ){
                temp[j]=arr[i];
                j++;
            }
            temp[player2_num1] = charachters[player2_num1];
            temp[player2_num2] = charachters[player2_num2];
            for (const auto & item : temp)
            {
                cout << item << " | ";
            }
            cout << endl;
            sleep(1);
            system("CLS");
            cout << "SCREEN CLEARED "<< endl;
            }
        }
    }else {
        cout << " Inviald numbers !! be sure that you add a number from [1:20].."<< endl ;
        player2();
    }
}

int main()
{
    while(true)
    {
        player1();
        if (player2_score >= 6 || player1_score >= 6)
        {
            if ( player1_score > player2_score ){
                cout << "Score is : " << "[ Player 1 ] : " << player1_score << "[ Player 2 ] : " << player2_score << "\n" ;
                cout << "PLAYER 1 WIN";
                break;
            }
            else{
                cout << "Score is : " << "[ Player 1 ] : " << player1_score << "[ Player 2 ] : " << player2_score << "\n" ;
                cout << "PLAYER 2 WIN";
                break;
            }
        }
        else if ( player1_score == 5 && player2_score == 5 ){
            cout << "GAME DRAW ";
            break;
        }
        player2();
        if (player2_score >= 6 || player1_score >= 6)
        {
           if ( player1_score > player2_score ){
                cout << "Score is : " << "[ Player 1 ] : " << player1_score << "[ Player 2 ] : " << player2_score << "\n" ;
                cout << "PLAYER 1 WIN";
                break;
           }
            else{
                cout << "Score is : " << "[ Player 1 ] : " << player1_score << "[ Player 2 ] : " << player2_score << "\n" ;
                cout << "PLAYER 2 WIN";
                break;
            }
        }
        else if ( player1_score == 5 && player2_score == 5 ){
            cout << "Score is : " << "[ Player 1 ] : " << player1_score << "[ Player 2 ] : " << player2_score << "\n" ;
            cout << "GAME DRAW ";
            break;
        }
    }
    return 0;
}



