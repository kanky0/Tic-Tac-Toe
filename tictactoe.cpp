#include <iostream>

int tictactoe[9][1] = {
{1}, {2}, {3},
{4}, {5}, {6},
{7}, {8}, {9}
};
int tictactoe_cross[9][1] = {
{1}, {2}, {3},
{4}, {5}, {6},
{7}, {8}, {9}
};

bool returnBool(int n) {
  if (tictactoe_cross[0][0] == n && tictactoe_cross[1][0] == n && tictactoe_cross[2][0] == n ||
      tictactoe_cross[3][0] == n && tictactoe_cross[4][0] == n && tictactoe_cross[5][0] == n ||
      tictactoe_cross[6][0] == n && tictactoe_cross[7][0] == n && tictactoe_cross[8][0] == n || 
      tictactoe_cross[0][0] == n && tictactoe_cross[3][0] == n && tictactoe_cross[6][0] == n || 
      tictactoe_cross[1][0] == n && tictactoe_cross[4][0] == n && tictactoe_cross[7][0] == n || 
      tictactoe_cross[2][0] == n && tictactoe_cross[5][0] == n && tictactoe_cross[8][0] == n || 
      tictactoe_cross[0][0] == n && tictactoe_cross[4][0] == n && tictactoe_cross[8][0] == n || 
      tictactoe_cross[2][0] == n && tictactoe_cross[4][0] == n && tictactoe_cross[6][0] == n) {
    return true;
  } else {
    return false;
  }
}

void printBoard(int player_one, int player_two) {
  if (player_one != 0) {
    tictactoe_cross[player_one - 1][0] = 0;
    for (int i=0; i<9; i++) {
      if (tictactoe_cross[i][0] == 0) {
        std::cout << " X";
      } else if (tictactoe_cross[i][0] == -1) {
        std::cout << " O";
      } else {
        std::cout << " " << tictactoe[i][0];
      }
      if (i == 0 || i == 1 || i == 3 || i == 4 || i == 6 || i == 7) {
        std::cout << " |";
      } else if (i == 2 || i == 5) {
        std::cout << "\n---+---+---\n";
      } else if (i == 8) {
        std::cout << "\n";
      }
    }
  }

  if (player_two !=0) {
    tictactoe_cross[player_two - 1][0] = -1;
    for (int j=0; j<9; j++) {
      if (tictactoe_cross[j][0] == -1) {
        std::cout << " O";
      } else if (tictactoe_cross[j][0] == 0) {
        std::cout << " X";
      } else {
        std::cout << " " << tictactoe[j][0];
      }
      if (j == 0 || j == 1 || j == 3 || j == 4 || j == 6 || j == 7) {
        std::cout << " |";
      } else if (j == 2 || j == 5) {
        std::cout << "\n---+---+---\n";
      } else if (j == 8) {
        std::cout << "\n";
      }
    }
  }
}

int main() {
  int choice_one, choice_two, counter = 0;
  
  std::cout << "Welcome to the game of Tic Tac Toe!\n";
  std::cout << " 1 | 2 | 3 \n";
  std::cout << "---+---+---\n";
  std::cout << " 4 | 5 | 6 \n";
  std::cout << "---+---+---\n";
  std::cout << " 7 | 8 | 9 \n";
    
  do {
    do {
      std::cout << "\nPlayer 1, please choose your position: ";
      std::cin >> choice_one;
      if (choice_one < 1 || choice_one > 9) {
        std::cout << "\nInvalid choice. Try again.\n";
        continue;
      } else if (choice_one != tictactoe_cross[choice_one - 1][0]) {
        std::cout << "\nPosition already taken. Try again.\n";
        continue;
      } else {
        printBoard(choice_one, 0);
        counter++;
        break;
      }
    } while (1);
    
    if (returnBool(0)) {
      std::cout << "\nPlayer 1 wins!\n";
      break;    
    }

    do {
      std::cout << "\nPlayer 2, please choose your position: ";
      std::cin >> choice_two;
      if (choice_two < 1 || choice_two > 9) {
        std::cout << "\nInvalid choice. Try again.\n";
        continue;
      } else if (choice_two != tictactoe_cross[choice_two - 1][0]) {
        std::cout << "\nPosition already taken. Try again.\n";
        continue;
      } else {
        printBoard(0, choice_two);
        counter++;
        break;
      }
    } while (1);

    if (returnBool(-1)) {
      std::cout << "\nPlayer 2 wins!\n";
      break;
    }
  } while (counter < 9);
  
  if (counter == 9) {
    std::cout << "\nIt's a draw!\n";
  }
  return 0;
}