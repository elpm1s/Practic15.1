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
    printf("������� ���������� �����:\n ");
    scanf("%d", &n);

    printf("������� ���������� ��������:\n ");
    scanf("%d", &m);

    printf("\n");

    if (!(n < 50) || !(m < 50)) return;
    //���� ��������� �������


    for (int i = 0; i < n; i++) //���� �� �������
    {
        for (int j = 0, sum = 0; j < m; j++) {     // ���� �� ��������
            sum = i + j;
            array[i][j] = sum;

        }
    }

    //����� ��������� �������
    for (int i = 0; i < n; i++) //���� �� �������
    {
        for (int j = 0; j < m; j++) //���� �� ��������

        {
            //printf("%d %d  ", i, array[i][j]);

            printf("[%d][%d] = %d  ", i, j, array[i][j]);
        }
        printf("\n");
    }
    //������� ������������� � ������ ������� ���� �������
    printf("\n");
    printf("������� ������������� � ������ ������� ���� �������: %d\n", array[0][m - 1]);

    //����� ������������ �������� � �������� ������
    int z;
    printf("\n������� ������: \n");
    scanf("%d", &z);

    int minelement = array[z][0];
    printf("����������� ������� � ������ %d �����: %d", z, minelement);

}