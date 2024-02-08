// Nelson Diaz

/*
Code decides if a desk fits in a room based on 4 inputs given by the user.
*/

// pre-processor directive
#include <stdio.h>

// function takes 4 arguments and calculates if desk fits in room
int sizeCheck(int roomLength, int roomWidth, int deskLength, int deskWidth){
    if(deskWidth > roomWidth || deskLength > roomLength)
    {
        return 0;
    }
    else
        return 1;
}

// driver function
int main(void)
{
    // Variable declaration
    int roomLength, roomWidth, deskLength, deskWidth;

    // Ask user for input for room and desk dimensions
    printf("Give width and length of room: ");
    scanf("%d %d", &roomWidth, &roomLength);
    printf("Give width and length of desk: ");
    scanf("%d %d", &deskWidth, &deskLength);

    // calling sizeCheck function
    sizeCheck;

    if(sizeCheck == 1)
    {
        printf("The desk will fit in the room");
    }else{
        printf("The desk will not fit in the room");
    }
}