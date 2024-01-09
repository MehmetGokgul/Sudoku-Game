
#include "Table.h"
# include <iostream>
# include <random>


Table::Table(int x) { //Constructs a Sudoku table, initializing all cells to zero and populating a specified number of random cells with negative values.
    for (int i=0; i<9; i++)
    {
        for (int j=0; j<9; j++)
        {
            _t[i][j] = 0;
        }
    }
    setRandomNumber(x);
}

void Table::setRandomNumber(int sizeRandomNumber)  //Populates the table with a given number of random negative values, avoiding conflicts with existing numbers.
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(0, 8);

    int i, j, number;
    int x = 0;
    while (x < sizeRandomNumber)
    {
        i = dist(mt);
        j = dist(mt);
        number = dist(mt);
        if (_t[i][j] == 0 && !isSuitable(i+1, j+1, number))
        {
            _t[i][j] = -number;
            x++;
        }
    }
}

Table::~Table(){

}

int	Table::isFinish(){ //Checks if the Sudoku table is fully filled, returning 1 if finished and 0 otherwise.
    for (int i=0; i<9; i++)
    {
        for (int j=0; j<9; j++)
        {
            if (_t[i][j] == 0)
                return (0);
        }
    }
    return (1);
}

/**************************************************************/
/*                   OUTPUT member functions                  */
/*                                                            */
/*  ->void	Table::displayTable() const                       */
/*                                                            */
/*                                                            */
/**************************************************************/

void	Table::displayTable() const{ //Displays the Sudoku table with colored output for better visualization.

    for (int i=0; i<9; i++)
    {
        std::cout << "Satir " << i+1 << "=> ";
        for (int j=0; j<9; j++)
        {
            if (_t[i][j] < 0)
                std::cout << "\033[33m" <<(-1*_t[i][j]) << "\033[0m";
            else if (_t[i][j] != 0)
                std::cout << "\033[32m" << _t[i][j] << "\033[0m";
            else
                std::cout << _t[i][j];
            if (j%3 == 2)
                std::cout << " ";
        }
        std::cout << std::endl;
        if (i % 3 == 2)
            std::cout << "\n";
    }

}

void	Table::displayTable(int limit) const{ //Displays the table with an additional message indicating the number of erroneous inputs.

    std::cout << "Hatali Girdi : " << limit << "/3" << std::endl;
    for (int i=0; i<9; i++)
    {
        std::cout << "Satir " << i+1 << "=> ";
        for (int j=0; j<9; j++)
        {
            if (_t[i][j] < 0)
                std::cout << "\033[33m" <<(-1*_t[i][j]) << "\033[0m";
            else if (_t[i][j] != 0)
                std::cout << "\033[32m" << _t[i][j] << "\033[0m";
            else
                std::cout << _t[i][j];
            if (j%3 == 2)
                std::cout << " ";
        }
        std::cout << std::endl;
        if (i % 3 == 2)
            std::cout << "\n";
    }

}

/**************************************************************/
/*                    INPUT member functions                  */
/*                                                            */
/*  ->void  Table::addNumber(int i, int j, int number)        */
/*  ->void  Table::deleteNumber(int i, int j)                 */
/*  ->int   Table::isSuitable(int i, int j, int number)       */
/*                                                            */
/*           Explanation                                      */
/*  insert and delete function firstly checks                 */
/*     _t[i][j] is suitable to be deleted or inserted         */
/*     if stuitable -> performs the operation                 */
/*     if not suitable ->  displays error message             */
/**************************************************************/

int	Table::addNumber(int i, int j, int number){ //Adds a number to the table at the specified position if it doesn't violate Sudoku rules, returning -1 for an invalid operation.
    if (!isSuitable(i, j, number))
        _t[i-1][j-1] = number;
    else
        return -1;
    return 0;
}

void	Table::deleteNumber(int i, int j){ //Deletes a number from the table at the specified position, displaying an error message for an invalid operation
    if (_t[i-1][j-1] < 0)
    {
        std::cout << "Hatalı silme islemi!" << std::endl;
        return ;
    }
    else
        _t[i-1][j-1] = 0;
}

int		Table::isSuitable(int i, int j, int number){ //Checks if adding a number to a specific position in the table violates Sudoku rules, returning 1 if unsuitable and 0 otherwise.

    i--;
    j--;

    //Table oluştuğunda oluşan random sayılardan mı
    if (_t[i][j] < 0)
        return (1);

    //Aynı satır ya da sütunda o sayıdan var mı
    for (int x=0; x<9; x++)
    {
        if (x != j && (_t[i][x] == number || _t[i][x] == -number))
            return (1);
        if (x != i && (_t[x][j] == number || _t[x][j] == -number))
            return (1);
    }
    int tmp_i;
    int tmp_j;

    // 3x3 matrixte aynı sayı var mı
    for (int x=0; x<3; x++)
    {
        tmp_i = ((i/3)*3) + x;
        for (int y=0; y<3; y++)
        {
            tmp_j = ((j/3)*3) + y;
            if (tmp_i == i && tmp_j == j)
                ;
            else if (_t[tmp_i][tmp_j] == number ||  _t[tmp_i][tmp_j] == -number)
                return (1);
        }
    }
    return (0);
}
int     Table::getTable(int i, int j) //Returns the absolute value of the number in the specified position of the table, considering negative values used for initial random numbers.
{
    int number =_t[i][j];
    if(number <0)
        number *=-1;
    return number;
}
