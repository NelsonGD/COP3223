// Nelson Diaz

/*
Code decides if a desk fits in a room based on 4 inputs given by the user.
*/

// pre-processor directive
#include <stdio.h>

// function takes 4 arguments and calculates if desk fits in room
int sizeCheck(int roomLength, int roomWidth, int deskLength, int deskWidth)
{
    int temp;

    // Adjust room length to be greater thanor equal to its width
    if(roomLength < roomWidth)
    {
        temp = roomLength;
        roomLength = roomWidth;
        roomWidth = temp;
    }

    // Adjust desk length to be greater than or equal to its width.
    if(deskLength < deskWidth)
    {
        temp = deskLength;
        deskLength = deskWidth;
        deskWidth = temp;
    }

    // Compare corresponding dimensions and output the result
    if(deskLength <= roomLength && deskWidth <= roomWidth)
    {
        return 1;
    }else{
        return 0;
    }
}

// driver function
int main(void)
{
    // Variable declaration
    int roomLength, roomWidth, deskLength, deskWidth;

    // Ask user for input for room and desk dimensions
    printf("Enter the length and width of the room: \n");
    scanf("%d %d", &roomWidth, &roomLength);

    printf("Enter the length and width of the desk: \n");
    scanf("%d %d", &deskWidth, &deskLength);

    // calling sizeCheck function
    if(sizeCheck(roomLength, roomWidth, deskLength, deskWidth))
    {
        printf("The desk will fit in the room.\n");
    }else{
        printf("The desk will not fit in the room.\n");
    }
}