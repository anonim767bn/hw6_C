#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* join(char* array[], int n){
    char* string = malloc(sizeof(char)*255);//инициализируем строку(массив чар) на 255 символов
    *string = '\0'; //перестраховываемся, чтобы строка наверняка была пустая
    for(int i = 0; i < n; i++){
        strcat(string, array[i]);
        strcat(string, " ");
        //c помощью strcat циклом присоединяем к концу строки string i-тую строку из массива, а после пробел
    }
    return string; //возвращаем указатель на строку
}

int main () {
    char* array[] = {"test", "randon", "text"};
    printf("%s\n", join(array, 3));

}