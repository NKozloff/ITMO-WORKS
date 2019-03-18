#include <io.h>
#include <stdlib.h>
#include <stdio.h>
#include <dirent.h>

int main(int ac, char *av[]) {
    int check;
    struct dirent *de;
    FILE *file;
    // Читаем аргументы
    for (int i = 1; i < ac; i++) {
        check = mkdir(av[i]);
        if (!check)
            printf("Directory \"%s\" created successfully\n", av[i]);
        else {
            printf("Directory \"%s\" can not be created\n", av[i]);
        }
    }
    // Открываем файл
    DIR *dr = opendir(".");
    if (dr == NULL) {
        printf("Could not open current directory");
        return 0;
    }

    if ((file = fopen("directory.txt", "w")) == NULL) {
        printf("Can not open or create file\n");
        return 0;
    }
    //Читаем, записываем в файл
    while ((de = readdir(dr)) != NULL) {
        if (de->d_type == DT_DIR) {
            printf("%s\n", de->d_name);
            fprintf(file, "%s\n", de->d_name);
        }
    }
    // Выходим
    closedir(dr);
    fclose(file);

    return 0;
}