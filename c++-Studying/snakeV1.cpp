#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int gDificulty , x , y , goal;
    cout << "Choose game dificulty : " << endl << "1 - 7 x 7\n2 - 10 x 10\n3 - 13 x 13" ;
    cin >> gDificulty;
    
    switch (gDificulty){
        case 1:
            x = 7;
            y = 7;
            goal = 20;
            break;
        case 2:
            x = 10;
            y = 10;
            goal = 30;
            break;
        default:
            x = 13;
            y = 13;
            goal = 40;
    }
    
    string display[x][y];
    
    for (int a = 0; a < x; a++){
        for (int b = 0; b < y; b++){
            display[a][b] = "• ";
        }
    }
    
    display[0][0] = "● ";
    
    int posx = 0 , posy = 0 , points = 0 , posXF , posYF;
    
    unsigned seed = time(0);
    srand(seed);
    posXF = rand()%x;
    posYF = rand()%y;
    if (posXF == 0 && posYF == 0){
        posXF = 1;
        posYF = 1;
    }
    display[posXF][posYF] = "☆ ";
    while (true){
        system("clear");
        
        cout << "Points : " << points << endl;
        for (int a = 0; a < x; a++){
            for (int b = 0; b < y; b++){
                cout << display[a][b];
            }
            cout << endl;
        }
        
        int move;
        cout << "move : [1/2/3/4] ";
        cin >> move;
        
        display[posx][posy] = "• ";
        
        switch(move){
            case 1:
                posx += 1;
                break;
            case 2:
                posx -= 1;
                break;
            case 4:
                posy += 1;
                break;
            case 3:
                posy -= 1;
        }
        
        if (posx == posXF and posy == posYF){
            points += 1;
            posXF = rand()%x;
            posYF = rand()%y;
            display[posXF][posYF] = "☆ ";
        }
        
        display[posx][posy] = "● ";
        
        if (posx < 0 || posy < 0 || posx > x -1 || posy > y - 1){
            system("clear");
            cout << "You Lose!";
            break;
        }
        if (points == goal){
            system("clear");
            cout << "You won!";
            break;
        }
    }
    return 0;
}