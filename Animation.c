#include<stdio.h>

void main()
{
    int cds, dcs;
    char chds[101]="..........................shajedurrahmanpanna.panna@gmail.com.......................................";

    for(cds=0; cds<=100; cds++)
    {
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tStarting Program(%d%%)\n", cds);
        for(dcs=0; dcs<=cds; dcs++)
        {
            printf("%c", chds[dcs]);
        }
        printf("SRP");
        system("cls");
    }
    main();
}
