#include <iostream>
#include "MazeAlgoritham.h"

using namespace std;

void printMaze()
{
    for (int i = 0; i < rows; i++)
    {
        cout << "   ";

        for (int j = 0; j < columns; j++)
        {
            if (horizontalWalls[i][j] == true)
                cout << "___ ";
            else
                cout << "- - ";
        }
        cout << endl;

        for (int j = 0; j < columns; j++)
        {
            if (verticalWalls[i][j] == true)
                cout << " || " << cells[i][j];
            else
                cout << " : " << cells[i][j];
            if (i == position[0] && j == position[1])
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{

    initialized();
    firstFillMaze();
    printMaze();

    addVerticalWall(9, 1);
    addVerticalWall(8, 1);
    addVerticalWall(7, 1);
    addVerticalWall(6, 1);
    addVerticalWall(5, 1);
    addVerticalWall(4, 1);
    addVerticalWall(3, 1);
    addVerticalWall(2, 1);
    addVerticalWall(1, 1);
    addVerticalWall(2, 2);
    addVerticalWall(1, 2);
    addVerticalWall(0, 2);
    addHorizontalWall(4, 3);
    addHorizontalWall(4, 4);
    addHorizontalWall(4, 5);
    addHorizontalWall(4, 2);
    addHorizontalWall(4, 1);
    addHorizontalWall(4, 6);
    addHorizontalWall(4, 7);
    addHorizontalWall(4, 8);
    addVerticalWall(3, 6);
    addHorizontalWall(2, 5);
    addHorizontalWall(2, 4);
    addHorizontalWall(2, 6);
    addVerticalWall(1, 6);
    addVerticalWall(2, 6);
    printMaze();

    cellsVicit[position[0]][position[1]] = true;
    while (!(position[0] == targetRow && position[1] == targetColum))
    {
        wakeMouse();
        getNeighbour(position[0], position[1]);
        position[0] = minCell[0];
        position[1] = minCell[1];
        cout << directon << " " << mineCellDirection << endl;
        directon = mineCellDirection;
        printMaze();
        cellsVicit[position[0]][position[1]] = true;
    }

    searchRun = false;
    while (!(position[0] == startRow && position[1] == startColumn))
    {
        wakeMouseBack();
        getNeighbour(position[0], position[1]);
        position[0] = maxCell[0];
        position[1] = maxCell[1];
        directon = maxCellDirection;
        cellsVicit[position[0]][position[1]] = true;
        printMaze();
    }

    while (!(position[0] == targetRow && position[1] == targetColum))
    {
        wakeMouse();
        getNeighbour(position[0], position[1]);
        position[0] = minCell[0];
        position[1] = minCell[1];
        directon = mineCellDirection;
        printMaze();
    }
}