#ifndef TABLE_H
#define TABLE_H

class Table{
private:
    int	_t[9][9];
public:
    Table(int x);
    ~Table();
    void 	setRandomNumber(int sizeRandomNumber) ;
    int		isFinish();

    int 	addNumber(int i, int j, int number);
    void	deleteNumber(int i, int j);
    int		isSuitable(int i, int j, int number);
    int     getTable(int i, int j);
    //OUTPUT member functions
    void displayTable() const;
    void displayTable(int limit) const;
};

#endif // TABLE_H
