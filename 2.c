#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 255

char* join(char* words[], int n) {
    // Создаем буфер для объединенной строки
    char* result = (char*)malloc(MAX_LENGTH * sizeof(char));
    strcpy(result, "");

    // Объединяем строки с пробелами
    for (int i = 0; i < n; i++) {
        strcat(result, words[i]);
        strcat(result, " ");

        // Проверяем длину строки
        if (strlen(result) >= MAX_LENGTH)
            break;
    }

    // Удаляем лишний пробел в конце
    if (strlen(result) > 0)
        result[strlen(result) - 1] = '\0';

    return result;
}

int main() {
    char* words[] = { "Hello", "world", "!", "This", "is", "a", "test" };
    int num_words = sizeof(words) / sizeof(words[0]);

    char* joined_str = join(words, num_words);
    printf("Joined string: %s\n", joined_str);

    free(joined_str);
    return 0;
}
