#include <stdio.h>
#include <string.h>

int main()
{
    char message[100];
    int windowSize, i, j, n;

    printf("Enter window size: ");
    scanf("%d", &windowSize);

    printf("Enter message: ");
    scanf("%s", message);

    n = strlen(message);

    printf("\nSliding Window Protocol\n");

    for (i = 0; i < n; i += windowSize)
    {
        printf("\nSending Frames:\n");

        for (j = i; j < i + windowSize && j < n; j++)
        {
            printf("Frame %d : %c\n", j, message[j]);
        }

        printf("\nAcknowledgements:\n");

        for (j = i; j < i + windowSize && j < n; j++)
        {
            printf("ACK %d received\n", j);
        }
    }

    printf("\nAll frames transmitted successfully.\n");

    return 0;
}