#include <stdio.h>
#include <locale.h>
//�������� ������� 4.3. ���������� ������� ��������.

int main()
{
    setlocale(0, "");
    int array[100], n;
    printf("������� ���������� ��������� ������� (�� ����� 100): ");
    scanf_s("%i", &n);
    if (n > 0 && n <= 100) {
        printf("������� �������� �������:\n");
        for (int i = 0; i < n; i++) {
            scanf_s("%i", &array[i]);
        }
        printf("�������� �������: ");
        for (int i = 0; i < n; i++) {
            printf("%i ", array[i]);
        }
        bool fl = true;
        int counter = 0;
        do {
            fl = false;
            for (int i = 0; i < n - 1; i++) {
                if (array[i] > array[i + 1]) {
                    int bufer = array[i];
                    array[i] = array[i + 1];
                    array[i + 1] = bufer;
                    fl = true;
                }
            }
            counter++;
        } while (fl);
        printf("\n��������������� �������� �������: ");
        for (int i = 0; i < n; i++) {
            printf("%i ", array[i]);
        }
        printf("\n���������� ������������� ������ ����������: %i", counter);
    }
    else printf("������. ��������� ���������� ��������� ��������� ������ �������");
    return 0;
}