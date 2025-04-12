#include <stdio.h>
#include <stdlib.h>
#include "KhoiTaoCay.c"
#include "TaoNode.c"
#include "ThemNodeVaoCay.c"
#include "TimMax.c"
#include "ChieuCaoCay.c"
#include "DiTimNodeTheMang.c"
#include "XoaNode.c"
#include "Menu.c"
int TimMin(TREE t)
{
    if (t == NULL) return -1;
    while (t->pLeft != NULL)
    {
        t = t->pLeft;
    }
    return t->data;
}
