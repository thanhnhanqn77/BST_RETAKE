#include <stdio.h>
#include <stdlib.h>
#include "KhoiTaoCay.c"
#include "TaoNode.c"
#include "TimMax.c"
#include "TimMin.c"
#include "ChieuCaoCay.c"
#include "DiTimNodeTheMang.c"
#include "XoaNode.c"
#include "Menu.c"
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
