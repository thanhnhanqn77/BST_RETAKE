#include <stdio.h>
#include <stdlib.h>
#include "KhoiTaoCay.c"
#include "TaoNode.c"
#include "ThemNodeVaoCay.c"
#include "TimMax.c"
#include "TimMin.c"
#include "ChieuCaoCay.c"
#include "DiTimNodeTheMang.c"
#include "Menu.c"
void XoaNode(TREE* t, int data)
{
    if (*t == NULL)
        return;

    if (data < (*t)->data)
    {
        XoaNode(&(*t)->pLeft, data);
    }
    else if (data > (*t)->data)
    {
        XoaNode(&(*t)->pRight, data);
    }
    else
    {
        NODE* X = *t;
        if ((*t)->pLeft == NULL)
        {
            *t = (*t)->pRight;
        }
        else if ((*t)->pRight == NULL)
        {
            *t = (*t)->pLeft;
        }
        else
        {
            NODE* Y = (*t)->pRight;
            DiTimNodeTheMang(&X, &Y);
        }
        if (X != *t)
            free(X);
    }
}
