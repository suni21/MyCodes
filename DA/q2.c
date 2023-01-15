#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int arr[20] = {0};
    int t;

    int seat = 0; // seats
    int s_position = 0;   // seat position
    int s_available = 0;   // seat available

    printf("\n1.Tickets Booking");
    printf("\n2.Diplay available tickets");
    printf("\n0.Exit\n");
    do
    {
        printf("Enter choice: ");
        scanf("%d", &t);
        switch (t)
        {
        case 1:
            printf("Enter no. of seats: ");
            scanf("%d", &seat);
            for (int i = 0; i < seat; i++)
            {
                printf("Enter seat position: ");
                scanf("%d", &s_position);
                if (arr[s_position - 1] == 0)
                    arr[s_position - 1]++;
                else
                    printf("\nSeat is already booked\n");
            }
            printf("\nSeats are booked\n");
            break;
        case 2:
            for (int i = 0; i < 20; i++)
            {
                if (arr[i] == 0)
                    s_available++;
            }
            printf("\n%d seats are availabe\n", s_available);
            break;
        case 0:
            exit(0);

        default:
            printf("\nError 404");
            break;
        }
    } while (t!= 3);
}
