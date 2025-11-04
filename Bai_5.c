#include <stdio.h>

int main()
{
    int n, i, x;
    int count = 0;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("So phan tu phai lon hon 0");
        return 1;
    }
    int arrayInt[n];
    int min = arrayInt[0];
    for (i = 0; i < n; i++)
    {
        printf("Nhap arrayInt[%d]: ", i);
        scanf("%d", &arrayInt[i]);
    }
    printf("Nhap gia tri x can tim: ");
    scanf("%d", &x);  
    for (i = 0; i < n; i++) {
        if (arrayInt[i] < min) {
            count+=1;
        }
    }
    printf("Gia tri %d xuat hien trong mang va xuat hien %d lan \n", x, count);

    if (!count) {
        printf("Gia tri %d khong xuat hien trong mang\n", x);
    }

}