#include <stdio.h>
#include <stdlib.h>
#include "KhoiTaoCay.c"
#include "TaoNode.c"
#include "ThemNodeVaoCay.c"
#include "TimMin.c"
#include "ChieuCaoCay.c"
#include "DiTimNodeTheMang.c"
#include "XoaNode.c"
#include "Menu.c"
int TimMax(TREE t)
{
    if (t == NULL) return -1; // cây rỗng
    while (t->pRight != NULL)
    {
        t = t->pRight;
    }
    return t->data;
}
