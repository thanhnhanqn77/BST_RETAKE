#include <stdio.h>
#include <stdlib.h>
#include "KhoiTaoCay.c"
#include "TaoNode.c"
#include "ThemNodeVaoCay.c"
#include "TimMax.c"
#include "TimMin.c"
#include "ChieuCaoCay.c"
#include "XoaNode.c"
#include "Menu.c"
void DiTimNodeTheMang(NODE** x, NODE** y)
{
    if ((*y)->pLeft != NULL)
    {
        DiTimNodeTheMang(x, &(*y)->pLeft);
    }
    else
    {
        (*x)->data = (*y)->data;
        NODE* temp = *y;
        *y = (*y)->pRight;
        free(temp);
    }
}
