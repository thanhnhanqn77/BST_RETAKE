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
void Menu(TREE* t)
{
    while (1)
    {
        system("cls");
        printf("\n\n\t\t========== MENU ==========");
        printf("\n\t1. Nhap du lieu");
        printf("\n\t2. Tim max cua cay");
        printf("\n\t3. Tim min cua cay");
        printf("\n\t4. Chieu cao cua cay");
        printf("\n\t5. Xoa 1 node bat ki");
        printf("\n\t0. Ket thuc");

        int luachon;
        printf("\n\tNhap lua chon: ");
        scanf("%d", &luachon);

        if (luachon == 0)
        {
            break;
        }
        else if (luachon == 1)
        {
            int x;
            printf("Nhap gia tri x: ");
            scanf("%d", &x);
            ThemNodeVaoCay(t, x);
        }
        else if (luachon == 2)
        {
            if (*t != NULL)
                printf("Max: %d\n", TimMax(*t));
            else
                printf("Cay rong!\n");
            system("pause");
        }
        else if (luachon == 3)
        {
            if (*t != NULL)
                printf("Min: %d\n", TimMin(*t));
            else
                printf("Cay rong!\n");
            system("pause");
        }
        else if (luachon == 4)
        {
            printf("Chieu cao cua cay: %d\n", ChieuCaoCay(*t));
            system("pause");
        }
        else if (luachon == 5)
        {
            int x;
            printf("Nhap gia tri can xoa: ");
            scanf("%d", &x);
            XoaNode(t, x);
            printf("Da xoa!\n");
            system("pause");
        }
        else
        {
            printf("Lua chon khong hop le!\n");
            system("pause");
        }
    }
}
