#include <stdio.h>
void welcome()
{
    int i, a = 220, b = 178, c = 220, d = 205, e = 22, choice, s, u = 196, t = 26, z;
    char name[20], bg[20], prescrip[255];
    int contact;
    for (i = 0; i <= 425; i++)
    {
        printf("%c", b);
    }
    for (i = 0; i <= 141; i++)
    {
        printf("%c", c);
    }

    printf("\n\n\t\t\t\t\t\tWELCOME TO LIFESOURCE BLOOD BANK MANAGEMENT SYSTEM\t\t\t\t\t\t");
    printf("\n");
    for (i = 0; i <= 141; i++)
    {
        printf("%c", c);
    }
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    for (i = 0; i <= 16; i++)
    {
        printf("%c", d);
    }
    printf("\n");
    printf("AVAILABLE WINDOWS %c", e);
    printf("\n");
    for (i = 0; i <= 16; i++)
    {
        printf("%c", d);
    }
    printf("\n");
    printf("1. Donor Window\n");
    printf("\n");
    printf("2. Beneficiary Window\n");
    printf("\n");
    printf("\n");
    printf("Enter your choice of Window %c\n", e);
    scanf("%d", &choice);
    printf("\n");
    printf("\n");
    if (choice == 1)
    {
        for (i = 0; i <= 111; i++)
        {
            if (i < 15)
            {
                printf(" ");
            }
            else
            {
                printf("%c", d);
            }
        }
        printf("\n\t\t\t\t\t\tWELCOME TO BLOOD DONATION WINDOW\t\t\t\t\t\t");
        printf("\n");
        for (i = 0; i <= 111; i++)
        {
            if (i < 15)
            {
                printf(" ");
            }
            else
            {
                printf("%c", d);
            }
        }
        printf("\n\n");
        for (i = 0; i <= 20; i++)
        {
            printf("%c", d);
        }
        printf("\n");
        printf("AVAILABLE OPERATIONS %c", e);
        printf("\n");
        for (i = 0; i <= 20; i++)
        {
            printf("%c", d);
        }
        struct Donor
        {
            char fname[50];
            char lname[50];
            int age;
            int contact;
            char bg[20];
            char medstatus[200];
        };
        printf("\n\n");
        printf("\t1. New Donor Registration \n\n \t2. View Existing Donors \n\n");
        printf("\n");
        printf("\tEnter your choice: ");
        scanf("%d", &z);
        printf("\n\n");
        if (z == 1)
        {
            printf("\t\t\t\tENTER THE FOLLOWING DETAILS FOR NEW DONOR REGISTRATION");
            printf("\n\n\n");
            struct Donor D1;
            printf("1. Enter Donor Name: ");
            scanf("%s %s", &D1.fname, &D1.lname);
            printf("\n");
            printf("2. Enter the Age: ");
            scanf("%d", &D1.age);
            printf("\n");
            printf("3. Enter the Blood Group: ");
            scanf("%s", &D1.bg);
            printf("\n");
            printf("4. Enter the Medical Status\n(Enter 'H' for Healthy\n Enter 'N' for Not-Healthy):\n");
            scanf("%s", &D1.medstatus);
            printf("\n");
            printf("%s\n",D1.medstatus);
            if (D1.medstatus=="H")
            {
                printf("\t\t\t\t\tNEW DONOR REGISTERED SUCCESSFULLY!! ");
                printf("\nNew Donor registration info: ");
                printf("\n\t1. Donor Name: %s %s", D1.fname, D1.lname);
                printf("\n\t2. Donor Age: %d", D1.age);
                printf("\n\t3. Donor Blood Group: %s", D1.bg);
                printf("\n\t4. Donor Medical Status: HEALTHY");
            }
            if (D1.medstatus=="N")
            {
                printf("\t\t\t\t\tNEW DONOR CANNOT NOT BE REGISTERED!! ");
                printf("\n\t\t\t Medical Status: NOT HEALTHY");
            }
            else
            {
                printf("WRONG MEDICAL STATUS!!\nDONOR CANNOT BE REGISTERED!!");
            }
        }
        if (z == 2)
        {
            struct Donor D2 = {"Sheetanshu", "Porwal", 18, 2288, "B Positive", "Healthy"};
            struct Donor D3 = {"Yoganshu", "Sharma", 18, 4466, "A Positive", "Healthy"};
            printf("Donor D1 Details are as follows: \n");
            for (i = 0; i <= 31; i++)
            {
                printf("%c", u);
            }
            printf("\n");
            printf(" %c Name of Donor: %s %s\n\n", t, D2.fname, D2.lname);
            printf(" %c Age: %d\n\n", t, D2.age);
            printf(" %c Mobile Number of Donor: %d\n\n", t, D2.contact);
            printf(" %c Blood Group of Donor: %s\n\n", t, D2.bg);
            printf(" %c Medical Status of Donor: %s\n\n", t, D2.medstatus);
            printf("\n\n");
            printf("Donor D2 Details are as follows: \n");
            for (i = 0; i <= 31; i++)
            {
                printf("%c", u);
            }
            printf("\n");
            printf(" %c Name of Donor: %s %s\n\n", t, D3.fname, D3.lname);
            printf(" %c Age: %d\n\n", t, D3.age);
            printf(" %c Mobile Number of Donor: %d\n\n", t, D3.contact);
            printf(" %c Blood Group of Donor: %s\n\n", t, D3.bg);
            printf(" %c Medical Status of Donor: %s\n\n", t, D3.medstatus);
        }
    }
    if (choice == 2)
    {
        for (i = 0; i <= 111; i++)
        {
            if (i < 15)
            {
                printf(" ");
            }
            else
            {
                printf("%c", d);
            }
        }
        printf("\n\t\t\t\t\t\tWELCOME TO BLOOD BENEFICIARY WINDOW\t\t\t\t\t\t");
        printf("\n");

        for (i = 0; i <= 111; i++)
        {
            if (i < 15)
            {
                printf(" ");
            }
            else
            {

                printf("%c", d);
            }
        }
        printf("\n\n");
        for (i = 0; i <= 20; i++)
        {
            printf("%c", d);
        }
        printf("\n");
        printf("AVAILABLE OPERATIONS %c", e);
        printf("\n");
        for (i = 0; i <= 20; i++)
        {
            printf("%c", d);
        }
        struct Patient
        {
            char fname[50];
            char lname[50];
            int contact;
            char bg[20];
            char prescrip[255];
        };
        printf("\n\n");
        struct Patient P1 = {"Siddharth", "Sharma", 1234, "B Positive", "Jeevan Jyoti Hospital"};
        struct Patient P2 = {"Pranav", "Singh", 5678, "A Positive", "Shakuntala Hospital"};
        printf("\t1. New Patient Registration \n\n \t2. View Existing Patient \n\n");
        printf("\n");
        printf("\tEnter your choice: ");
        scanf("%d", &s);
        printf("\n\n");
        if (s == 1)
        {
            printf("\t\t\t\t\tENTER THE FOLLOWING DETAILS FOR NEW PATIENT REGISTRATION\n\n");
            struct Patient P3;
            printf("1. Enter name of Patient: ");
            scanf("%s %s", &P3.fname, &P3.lname);
            printf("\n");
            printf("2. Enter the Mobile Number: ");
            scanf("%d", &P3.contact);
            printf("\n");
            printf("3. Enter the Blood Group required: ");
            scanf("%s", &P3.bg);
            printf("\n");
            printf("4. Hospital's name with Prescription: ");
            scanf("%s", &P3.prescrip);
            printf("\n\n\n");
            printf("\t\t\t\t\tNEW PATIENT REGISTERED SUCCESSFULLY!! ");

            printf("\nNew patient registration info: ");
            printf("\n 1. Name of Patient : %s %s\n 2. Mobile Number : %d\n 3. Blood group required : %s\n 4. Hospital's Name : %s Hospital", P3.fname, P3.lname, P3.contact, P3.bg, P3.prescrip);
        }
        if (s == 2)
        {
            printf("Patient P1 Details are as follows: \n");
            for (i = 0; i <= 34; i++)
            {
                printf("%c", u);
            }
            printf("\n");
            printf(" %c Name of Patient: %s %s\n\n", t, P1.fname, P1.lname);
            printf(" %c Mobile Number of Patient: %d\n\n", t, &P1.contact);
            printf(" %c Blood group of Patient: %s\n\n", t, &P1.bg);
            printf(" %c Hospital's name and prescription: %s\n\n", t, P1.prescrip);
            printf("\n\n");
            printf("Patient P2 Details are as follows: \n");
            for (i = 0; i <= 34; i++)
            {
                printf("%c", u);
            }
            printf("\n");
            printf(" %c Name of Patient: %s %s\n\n", t, P2.fname, P2.lname);
            printf(" %c Mobile Number of Patient: %d\n\n", t, P2.contact);
            printf(" %c Blood group of Patient: %s\n\n", t, P1.bg);
            printf(" %c Hospital's name and prescription: %s\n\n", t, P2.prescrip);
        }
    }
}

int main()
{
    welcome();
    return 0;
}