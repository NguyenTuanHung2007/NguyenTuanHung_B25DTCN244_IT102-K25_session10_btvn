#include <stdio.h>

int main()
{
    int n, i, j, x, temp_num, left, right, middle;
    int flag = 0;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("So phan tu phai lon hon 0");
        return 1;
    }
    int arrayInt[n];
    for (i = 0; i < n; i++)
    {
        printf("Nhap arrayInt[%d]: ", i);
        scanf("%d", &arrayInt[i]);
    }
    int min = arrayInt[0];
    // Linear search
    for (i = 0; i < n; i++) {
        if (arrayInt[i] < min) {
            min = arrayInt[i];
        }
    }
    printf("Gia tri nho nhat trong mang la: %d\n", min);
    // Selection sort
     for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arrayInt[i] > arrayInt[j]) {
                temp_num = arrayInt[i];
                arrayInt[i] = arrayInt[minIndex];
                arrayInt[minIndex] = temp_num;
            }
        }
    }
    printf("Mang sau khi sap xep tang dan: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arrayInt [i]);
    }
    printf("\n");
    // Binary search
    printf("Nhap gia tri x can tim: ");
    scanf("%d", &x);
    left = 0;
    right = n - 1;
    while (left <= right){ //Binary search
        middle = (left + right )/2;
        if(arrayInt[middle] == x){
            printf("Tim thay %d tai vi tri index %d ", x, middle);
            flag = 1;
            break;
        }
        else if(arrayInt[middle] < x){
            left = middle + 1;
        }
        else{
            right = middle - 1;
        }
    }
    if(!flag){
        printf("Khong tim thay %d trong mang \n", x);
    }
}
