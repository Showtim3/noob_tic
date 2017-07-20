#include <IOSTREAM>


using namespace std;

char board[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

struct person {
    int choice;
};

void showboard();

void check();

void win();

void clrscr() {
    system("clear");
}

void getch() {
    getchar();
}


int main() {
    clrscr();
    person p1, p2;
    int max = 9;

    cout << "\n\n";
    showboard();

    while (max > 0) {
        cout << "\n\n\t Player 1 (X) -> ";
        cin >> p1.choice;
        board[p1.choice - 1] = 'X';
        showboard();
        check();
        cout << "\n\n\t Player 2 (O) -> ";
        cin >> p2.choice;
        board[p2.choice - 1] = 'O';
        showboard();
        max--;
    }

    getch();
}

void play_game() {

}


void showboard() {
    clrscr();
    cout << "\n\n\n";
    cout << "\t    " << board[0] << "|" << board[1] << "|" << board[2] << "\n";
    cout << "\t    " << board[3] << "|" << board[4] << "|" << board[5] << "\n";
    cout << "\t    " << board[6] << "|" << board[7] << "|" << board[8] << "\n";
}

void check() {
    if (board[0] == board[1] && board[1] == board[2]) { win(); }
    else if (board[0] == board[3] && board[3] == board[6]) { win(); }
    else if (board[0] == board[4] && board[4] == board[8]) { win(); }
    else if (board[1] == board[4] && board[4] == board[7]) { win(); }
    else if (board[2] == board[5] && board[5] == board[8]) { win(); }
    else if (board[2] == board[4] && board[4] == board[6]) { win(); }
    else if (board[3] == board[4] && board[4] == board[5]) { win(); }
    else if (board[6] == board[7] && board[7] == board[8]) { win(); }
    else if (board[1] == board[4] && board[4] == board[7]) { win(); }
}

void win() {
    int x = 0, o = 0, i;
    char again;
    for (i = 0; i <= 8; i++) {
        if (board[i] == 'X') {
            x++;
        } else if (board[i] == 'O') {
            o++;
        }

    }
    if (x > o) {
        cout << "\n\nPlayer 1 with 'X' wins.";
    } else if (x < o) {
        cout << "\n\nPlayer 2 with 'Y' wins.";
    } else cout << "Tie.";
    cout << "\n\n\tPlay Again? Y/y\\n->";
    cin >> again;
    if (again == 'Y' || again == 'y') {
        for (int i = 1; i < 10; i++) {
            sprintf(board+i-1,"%d",i);
        }
        main();
    } else exit(0);
}





