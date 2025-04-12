#include <stdio.h>
#include <stdlib.h>
#include "KhoiTaoCay.c"
#include "TaoNode.c"
#include "ThemNodeVaoCay.c"
#include "TimMax.c"
#include "TimMin.c"
#include "ChieuCaoCay.c"
#include "DiTimNodeTheMang.c"
#include "XoaNode.c"
#include "Menu.c"

/// Hàm main
int main() {
    TREE t;
    KhoiTaoCay(&t);
    Menu(&t);
    return 0;
}
