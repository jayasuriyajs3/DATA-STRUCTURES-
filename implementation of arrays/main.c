#include <stdio.h>
#define MAX 10

int loop, arr[MAX], num;

void create() {
    printf("Enter number of elements: ");
    scanf("%d", &num);
    printf("Enter %d elements:\n", num);
    for (loop = 0; loop < num; loop++) {
        scanf("%d", &arr[loop]);
    }
}

void insert() {
    int pos, value;

    printf("Enter the position (1-%d): ", num + 1);
    scanf("%d", &pos);

    if (pos <= 0 || pos >=MAX) {
        printf("Invalid position! Position should be between 1 and %d.\n", num + 1);
        return;
    }

    printf("Enter the value: ");
    scanf("%d", &value);

    for (loop = num; loop >= pos; loop--) {
        arr[loop] = arr[loop - 1];
    }

    arr[pos - 1] = value;
    num++;
}

void display() {
    printf("Array elements: ");
    for (loop = 0; loop < num; loop++) {
        printf("%d ", arr[loop]);
    }
    printf("\n");
}

void delete1() {
    int place;
    printf("Enter the position to delete (1-%d): ", num);
    scanf("%d", &place);

    if (place<=0 || place >=MAX) {
        printf("Invalid position! Position should be between 1 and %d.\n", num);
        return;
    }

    for (loop = place; loop < num ; loop++) {
        arr[loop-1] = arr[loop];
    }

    num--;
}

int main() {
    int n;

    while (1) {
        printf("\nMenu:\n");
        printf("1.Create\n");
        printf("2.Insert\n");
        printf("3.Display\n");
        printf("4.Delete\n");
        printf("5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &n);

        switch (n) {
            case 1:
                create();
                break;
            case 2:
                insert();
                break;
            case 3:
                display();
                break;
            case 4:
                delete1();
                break;
            case 5:
                printf("Exiting program\n");
                return 0;
            default:
                printf("Invalid input\n");
        }
    }
}

