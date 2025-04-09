#include <stdio.h>
#include <stdlib.h>

typedef struct NODE {
    int data;
    struct NODE* pLeft;
    struct NODE* pRight;
} NODE;

typedef NODE* TREE;

/// Hàm khởi tạo cây
void KhoiTaoCay(TREE* t) {
    *t = NULL;
}

/// Hàm tạo node mới
NODE* TaoNode(int x) {
    NODE* p = (NODE*)malloc(sizeof(NODE));
    if (p == NULL) return NULL;
    p->data = x;
    p->pLeft = NULL;
    p->pRight = NULL;
    return p;
}

/// Thêm node vào cây nhị phân
void ThemNodeVaoCay(TREE* t, int x) {
    if (*t == NULL) {
        *t = TaoNode(x);
    } else {
        if (x < (*t)->data) {
            ThemNodeVaoCay(&(*t)->pLeft, x);
        } else if (x > (*t)->data) {
            ThemNodeVaoCay(&(*t)->pRight, x);
        }
    }
}

/// Hàm tìm max của cây
int TimMax(TREE t) {
    if (t == NULL) return -1; // cây rỗng
    while (t->pRight != NULL) {
        t = t->pRight;
    }
    return t->data;
}

/// Hàm tìm min của cây
int TimMin(TREE t) {
    if (t == NULL) return -1; // cây rỗng
    while (t->pLeft != NULL) {
        t = t->pLeft;
    }
    return t->data;
}

/// Tính chiều cao của cây
int ChieuCaoCay(TREE t) {
    if (t == NULL)
        return 0;
    int leftHeight = ChieuCaoCay(t->pLeft);
    int rightHeight = ChieuCaoCay(t->pRight);
    return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}

/// Tìm node thế mạng (trái nhất của cây con phải)
void DiTimNodeTheMang(NODE** x, NODE** y) {
    if ((*y)->pLeft != NULL) {
        DiTimNodeTheMang(x, &(*y)->pLeft);
    } else {
        (*x)->data = (*y)->data;
        NODE* temp = *y;
        *y = (*y)->pRight;
        free(temp);
    }
}

/// Xóa node bất kỳ trong cây
void XoaNode(TREE* t, int data) {
    if (*t == NULL)
        return;

    if (data < (*t)->data) {
        XoaNode(&(*t)->pLeft, data);
    } else if (data > (*t)->data) {
        XoaNode(&(*t)->pRight, data);
    } else {
        NODE* X = *t;
        if ((*t)->pLeft == NULL) {
            *t = (*t)->pRight;
        } else if ((*t)->pRight == NULL) {
            *t = (*t)->pLeft;
        } else {
            NODE* Y = (*t)->pRight;
            DiTimNodeTheMang(&X, &Y);
        }
        if (X != *t) free(X);
    }
}

/// Menu chức năng
void Menu(TREE* t) {
    while (1) {
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
        else if (luachon == 2) {
            if (*t != NULL)
                printf("Max: %d\n", TimMax(*t));
            else
                printf("Cay rong!\n");
            system("pause");
        }
        else if (luachon == 3) {
            if (*t != NULL)
                printf("Min: %d\n", TimMin(*t));
            else
                printf("Cay rong!\n");
            system("pause");
        }
        else if (luachon == 4) {
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

/// Hàm main
int main() {
    TREE t;
    KhoiTaoCay(&t);
    Menu(&t);
    return 0;
}
