#include <iostream>
using namespace std;
class Matrix {
// Список методов используемых в классе
private:
    int lineLength, columnLength, i,j; //Скрываем компоненты векторов

// список методов доступных другим функциям и объектам программы
public:

//Конструктор вектора, который имеет 3 координаты x y z
 Matrix(int line, int column) {
        lineLength = line;
        columnLength = column;

    }

// SetValueX Придание значения координате X
    void setValueI(int valueI) {
        i = valueI;
    }

// SetValueY Придание значения координате  Y
    void setValueJ(int valueJ) {
        j = valueJ;
    }



    int getSizeLine() const {
        return lineLength;
    }


    int getSizeColumn() const {
        return columnLength;
    }

    int getValueI()  {
        return i;
    }

    int getValueJ()  {
        return j;
    }

    void plusI()  {
        i++;
    }

    void plusJ()  {
        j++;
    }

    //Вывод вектора
    void printInfo() const {
        cout << "Line length = " << lineLength << "  Column length = " << columnLength << " i = " << i << " j  = " << j << endl;
    }

    //Констркутор матрицы
    void makeMatrix (Matrix Obj){
    double array[Obj.lineLength][Obj.columnLength];
        for (Obj.setValueI(0); Obj.getValueI() < Obj.getSizeLine(); Obj.plusI()){
            for (Obj.setValueJ(0); Obj.getValueJ() < Obj.getSizeColumn(); Obj.plusJ()){
                array[Obj.getValueI()][Obj.getValueJ()] = 4;
                cout << "[" << array[Obj.getValueI()][Obj.getValueJ()]<< "] ";
        }
            cout << endl;
    }
}
    //void printMatrix(Matrix Obj)

};



int main() {
    Matrix mat1(2,7);
    mat1.printInfo();
    mat1.makeMatrix(mat1);
}
