#include <stdio.h>
#define SIZE 100

int parent[SIZE];
void makeSet(int n) {
    for (int i = 0; i < n; i++)
        parent[i] = i;
}
int find(int x) {
    if (parent[x] == x)
        return x;
    return find(parent[x]);
}
void unionSets(int x, int y) {
    int rootX = find(x);
    int rootY = find(y);
    if (rootX == rootY)
        printf("%d and %d are already in the same set.\n", x, y);
    else {
        parent[rootY] = rootX;
        printf("Union done between %d and %d\n", x, y);
    }
}
void display(int n) {
    printf("\nElement : Parent\n");
    for (int i = 0; i < n; i++)
        printf("   %d    :   %d\n", i, parent[i]);
}
int main() {
    int n, choice, x, y;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    makeSet(n);
    while (1) {
        printf("\n--- Disjoint Set Menu ---\n");
        printf("1. Union\n");
        printf("2. Find\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter two elements to union: ");
                scanf("%d %d", &x, &y);
                unionSets(x, y);
                break;

            case 2:
                printf("Enter element to find its representative: ");
                scanf("%d", &x);
                printf("Representative of %d is %d\n", x, find(x));
                break;

            case 3:
                display(n);
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}

