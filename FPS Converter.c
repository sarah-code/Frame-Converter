#include <stdio.h>

void menu();
void f2s();
void s2f();
void about();

int choice;

int main ()
{
    printf("Welcome to FPS Converter! What do you want to do today? Select 1-4\n===================================================================\n");
    menu();
    return (0);
}
void menu()
{
    printf("1 - Frames to Seconds\n2 - Seconds to Frames\n3 - About\n4 - Exit\n=====================\n");
    printf("Select: ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            f2s();
            break;
        case 2:
            s2f();
            break;
        case 3:
            about();
            break;
        case 4:
            return (0);
            break;
        default:
           printf("Error 1: Invalid keystroke. Try again:\n");
           menu();
           break;
    }
}
void f2s()
{
    float frames;
    float fps;
    float seconds;
    printf("Please enter the numbers of frames:\n");
    scanf("%f", &frames);
    printf("Please enter the numbers of frames in a seconds. Hint: NTSC: 29.97, PAL 25, Cinema 24.\n");
    scanf("%f", &fps);
    seconds = frames / fps;
    printf("The duration of the sequence with %.0f Frames in %.2f FPS is %.2f.\n=================================\n", frames, fps, seconds);
    menu();
}
void s2f()
{
    float frames;
    float fps;
    float seconds;
    printf("Please enter the duration of the sequence:\n");
    scanf("%f", &seconds);
    printf("Please enter the numbers of frames in a seconds. Hint: NTSC: 29.97, PAL 25, Cinema 24.\n");
    scanf("%f", &fps);
    frames = fps * seconds;
    printf("The number of frames of the sequence for a %.2f second sequence in %.2f FPS is %.0f.\n=================================\n", seconds, fps, frames);
    menu();
}
void about()
{
    printf("===============================\nVersion: 1.0. Build 0001 \n Builddate: APR/17/2017 \n This programme is owned by CNKL Interactive. \n Copyright (c) 2017. Made in Germany.\n===========================\n");
    menu();
}
