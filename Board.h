#pragma once
class Board{
protected:
    char** board;
    int size[2];
public:
    Board(int x, int y);
    void DisplayBoard();
    void CreateBoard();
    void ResetBoard();
    void SetPosition(char target, int x, int y);
};

