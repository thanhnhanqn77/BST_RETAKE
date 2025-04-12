#include <stdio.h>
#include <stdlib.h>
#include "caynhiphan.h"

void ThemNodeVaoCay(TREE* t, int x)
{
    if (*t == NULL)
    {
        *t = TaoNode(x);
    }
    else
    {
        if (x < (*t)->data)
        {
            ThemNodeVaoCay(&(*t)->pLeft, x);
        }
        else if (x > (*t)->data)
        {
            ThemNodeVaoCay(&(*t)->pRight, x);
        }
    }
}
