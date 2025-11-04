#include<stdio.h>
#include<stdlib.h>

int main(){
    int numbers[100];
    int i, j, choice, temp;
    int indexInsert, valueInsert;
    int indexDelete;
    int indexUpdate, valueUpdate;
    int searchValue;
    int cntNumbers;
    
    for(i = 0; i < 100; i++){
        numbers[i] = 0;
    }

    do{
        printf("\n===== Quan ly danh sach so nguyen =====\n");
        printf("1. Them phan tu vao vi tri bat ky\n");
        printf("2. Xoa phan tu o vi tri bat ky\n");
        printf("3. Cap nhat gia tri phan tu o vi tri bat ky\n");
        printf("4. Tim kiem phan tu trong mang\n");
        printf("5. Hien thi mang\n");
        printf("6. Sap xep mang tang dan\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Nhap vao chi so can them (0-99): ");
                do{
                    scanf("%d",&indexInsert);
                }while(indexInsert < 0 || indexInsert >= 100);

                printf("Nhap gia tri can them: ");
                scanf("%d",&valueInsert);

                numbers[indexInsert] = valueInsert;
                printf("Da them thanh cong!\n");
                break;

            case 2:
                printf("Nhap vao chi so can xoa (0-99): ");
                do{
                    scanf("%d", &indexDelete);
                }while(indexDelete < 0 || indexDelete >= 100);

                for(i = indexDelete; i < 99; i++){
                    numbers[i] = numbers[i + 1];
                }
                numbers[99] = 0;
                printf("Da xoa thanh cong!\n");
                break;

            case 3:
                printf("Nhap vao chi so can cap nhat (0-99): ");
                do{
                    scanf("%d", &indexUpdate);
                }while(indexUpdate < 0 || indexUpdate >= 100);

                printf("Nhap gia tri moi: ");
                scanf("%d", &valueUpdate);

                numbers[indexUpdate] = valueUpdate;
                printf("Da cap nhat thanh cong!\n");
                break;

            case 4:
                printf("Nhap vao gia tri can tim: ");
                scanf("%d", &searchValue);

                cntNumbers = 0;
                printf("Cac chi so co gia tri bang %d: ", searchValue);
                for(i = 0; i < 100; i++){
                    if(numbers[i] == searchValue){
                        printf("%d ", i);
                        cntNumbers++;
                    }
                }

                if(cntNumbers == 0)
                    printf("\nKhong tim thay phan tu!\n");
                else
                    printf("\nTim thay %d phan tu.\n", cntNumbers);

                break;

            case 5:
                printf("Gia tri cac phan tu: \n");
                for(i = 0; i < 100; i++){
                    printf("[%02d]=%d\t", i, numbers[i]);
                    if((i+1) % 10 == 0) printf("\n");
                }
                break;

            case 6:
                for(i = 0; i < 99; i++){
                    for(j = i + 1; j < 100; j++){
                        if(numbers[i] > numbers[j]){
                            temp = numbers[i];
                            numbers[i] = numbers[j];
                            numbers[j] = temp;
                        }
                    }
                }
                printf("Da sap xep mang thanh cong!\n");
                break;

            case 7:
                exit(0);

            default:
                printf("Lua chon khong hop le! Vui long nhap 1-7\n");
        }

    }while(1);

    return 0;
}