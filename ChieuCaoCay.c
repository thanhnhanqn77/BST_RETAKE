#include <stdio.h>
#include <stdlib.h>
#include "KhoiTaoCay.c"
#include "TaoNode.c"
#include "ThemNodeVaoCay.c"
#include "TimMax.c"
#include "TimMin.c"
#include "DiTimNodeTheMang.c"
#include "XoaNode.c"
#include "Menu.c"
int ChieuCaoCay(TREE t)
{
    if (t == NULL)
        return 0;
    int leftHeight = ChieuCaoCay(t->pLeft);
    int rightHeight = ChieuCaoCay(t->pRight);
    return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}
