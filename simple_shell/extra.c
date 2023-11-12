#include "shell.h"
void freearray(char **tab)
{
    int i;
    if (!tab)
    {
        return;
    }
    for ( i = 0; tab[i]; i++)
    {
        free(tab[i]);
        tab[i] = NULL;
    }
    free(tab);
    tab = NULL;
}
