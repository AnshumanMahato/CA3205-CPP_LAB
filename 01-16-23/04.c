#include <stdio.h>

int ll[10][2], emptyPos[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, nodes = 10, head = -1;

int insertVal(int num, int preVal)
{
    int node = emptyPos[--nodes];
    ll[node][0] = num;
    if (head == -1)
    {
        ll[node][1] = -1;
        head = node;
    }
    else
    {
        int i = head;
        while (ll[i][0] != preVal && ll[i][1] != -1)
            i = ll[i][1];

        ll[node][1] = ll[i][1];
        ll[i][1] = node;
    }
    return node;
}

int deleteVal(int num)
{
    int i = head, pre;
    if (ll[head][0] == num)
    {
        emptyPos[nodes++] = head;
        head = ll[head][1];
    }
    else
    {
        while (ll[i][0] != num && i != -1)
        {
            pre = i;
            i = ll[i][1];
        }

        if (i != -1)
        {
            emptyPos[nodes++] = i;
            ll[pre][1] = ll[i][1];
        }
    }

    return i;
}

void traverse()
{
    int i = head;
    while (i != -1)
    {
        printf("%d ", ll[i][0]);
        i = ll[i][1];
    }
}

int main()
{
    int ch, val, preVal, i;
    do
    {
        printf("\nLinked List menu\n");
        printf("\n1. Insert value");
        printf("\n2. Delete value");
        printf("\n3. Traverse List");
        printf("\n4. Exit");
        printf("\nEnter Choice(1-4):");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (nodes)
            {
                if (head != -1)
                {
                    printf("Enter value after which new node is to be inserted:");
                    scanf("%d", &preVal);
                }
                printf("Enter value for the new node:");
                scanf("%d", &val);
                i = insertVal(val, preVal);
                printf("%d inserted at index %d", val, i);
            }
            else
            {
                printf("List is full.\n");
            }
            break;
        case 2:
            if (head != -1)
            {
                printf("Enter value to be deleted:");
                scanf("%d", &val);
                i = deleteVal(val);
                if (i == -1)
                    printf("Value not found");
                else
                    printf("%d deleted from index %d", val, i);
            }
            else
                printf("List is empty");
            break;
        case 3:
            if (head != -1)
            {
                printf("List is: ");
                traverse();
            }
            else
                printf("List is empty");
            break;
        case 4:
            printf("Exiting...");
            break;

        default:
            printf("Invalid choice.");
            break;
        }
    } while (ch != 4);
    return 0;
}