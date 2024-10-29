#include <stdio.h>
#include <locale.h>
#include <math.h>
#define row 50
#define col 50

int main()

{
    setlocale(LC_ALL, "RUS");

    int array[row][col];
    int n, m;
    printf("¬ведите количество строк:\n ");
    scanf("%d", &n);

    printf("¬ведите количество столбцов:\n ");
    scanf("%d", &m);

    printf("\n");

    if (!(n < 50) || !(m < 50)) return;
    //ввод элементов массива


    for (int i = 0; i < n; i++) //цикл по строкам
    {
        for (int j = 0, sum = 0; j < m; j++) {     // цикл по столбцам
            sum = i + j;
            array[i][j] = sum;

        }
    }

    //вывод элементов массива
    for (int i = 0; i < n; i++) //цикл по строкам
    {
        for (int j = 0; j < m; j++) //цикл по столбцам

        {
            //printf("%d %d  ", i, array[i][j]);

            printf("[%d][%d] = %d  ", i, j, array[i][j]);
        }
        printf("\n");
    }
    //Ёлемент расположенный в правом верхнем углу массива
    printf("\n");
    printf("Ёлемент расположенный в правом верхнем углу массива: %d\n", array[0][m - 1]);

    //поиск минимального элемента в заданной строке
    int z;
    printf("\n¬ведите строку: \n");
    scanf("%d", &z);

    int minelement = array[z][0];
    printf("ћинимальный элемент в строке %d равен: %d", z, minelement);

}