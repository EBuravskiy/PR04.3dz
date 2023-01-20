#include <stdio.h>
#include <locale.h>
//Домашнее задание 4.3. Сортировка методом пузырька.

int main()
{
    setlocale(0, "");
    int array[100], n;
    printf("Введите количество элементов массива (не более 100): ");
    scanf_s("%i", &n);
    if (n > 0 && n <= 100) {
        printf("Введите элементы массива:\n");
        for (int i = 0; i < n; i++) {
            scanf_s("%i", &array[i]);
        }
        printf("Элементы массива: ");
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
        printf("\nОтсортированные элементы массива: ");
        for (int i = 0; i < n; i++) {
            printf("%i ", array[i]);
        }
        printf("\nКоличество произведенных циклов сортировки: %i", counter);
    }
    else printf("Ошибка. Введенное количество элементов превышает размер массива");
    return 0;
}