#include <stdio.h>

int main(){

    FILE *pF = fopen("a.c", "w");

    fprintf(pF, "#include <stdio.h>\n\n\nint main(){\n\n\n\n    return 0;\n}");

    fclose(pF);

    return 0;
}