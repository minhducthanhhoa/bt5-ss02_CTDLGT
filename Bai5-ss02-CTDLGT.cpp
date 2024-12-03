#include<stdio.h>

int main(){
	int n, k, index = -1;

    do {
        printf("Nhap so phan tu cua mang: ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

    int arr[n];

    printf("Nhap %d phan tu cua mang:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Nhap phan tu can x�a
    printf("Nhap phan tu can x�a (k): ");
    scanf("%d", &k);

    // T�m chi so cua phan tu can x�a
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        // Neu kh�ng t�m thay phan tu k
        printf("Kh�ng c� ph?n t? %d trong m?ng.\n", k);
    } else {
        // X�a phan tu tai vi tr� index
        for (int i = index; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; // Giam k�ch thuoc mang

        // In mang sau khi x�a
        printf("Mang sau khi x�a phan tu %d:\n", k);
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

	return 0;
}

