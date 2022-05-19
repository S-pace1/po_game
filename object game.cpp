#include <iostream>
#include "Board.h"
using namespace std;



int main()
{
    std::cout << "Hello World!\n";
    Board b = Board(10, 5);
    b.SetPosition('w', 5, 2);
    b.DisplayBoard();
}
