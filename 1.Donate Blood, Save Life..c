 #include <stdio.h>
 #include <string.h>
 #include<windows.h>
 #include<process.h>
 #define SIZE 1000
 #include <ctype.h>

 int a=0;
 int m=0;

 void MAIN_MENU();

 void USER();
 void ADMIN();
 void ADMIN_MENU();

 void PROGRAMMER();

 void EXIT();
 void EXIT_E();
 void EX();


 void DONATE();
 void DONATE_BLOOD();
 void DONATE_BLOOD_X();

 void UTTARA_D();
 void UTTARA_MODERN_HOSPITAL();
 void UTTARA_CENTRAL_HOSPITAL();
 void UTTARA_WOMENS_HOSPITALS();

 void BASUNDHARA_D();
 void BASUNDHARA_AD_DIN_HOSPITAL();
 void BASUNDHARA_EYE_HOSPITAL();
 void BASUNDHARA_APOLLO_HOSPITAL();

 void GULSHAN_D();
 void GULSHAN_UNITED_HOSPITAL();
 void GULSHAN_MOTHER_HOSPITAL();
 void GULSHAN_SHAHABUDDIN_HOSPITAL();

 void DHANMONDI_D();
 void DHANMONDI_LAB_HOSPITAL();
 void DHANMONDI_IBNEY_HOSPPITAL();
 void DHANMONDI_CENTRAL();

 void SAVAR_D();
 void SAVAR_ANAM_HOSPITAL();
 void SAVAR_PRIME_HOSPITAL();
 void SAVAR_GENERAL_HOSPITAL();

 void MIRPUR_D();
 void MIRPUR_CHILD_HOSPITAL();
 void MIRPUR_GALAXY_HOSPITAL();
 void MIRPUR_ISLAMI_HOSPITAL();

 void MOTIJHEEL_D();
 void MOTIJHEEL_ISLAM_HOSPITAL();
 void MOTIJHEEL_PEN_HOSPITAL();
 void MOTIJHEEL_BARAKAH_HOSPITAL();

 void SHAHBAG_D();
 void SHAHBAG_BANGOBONDHU_HOSPITAL();
 void SHAHBAG_BIRDEM_HOSPITAL();

 void NEED_BLOOD();
 void NEED_BLOOD_X();

 void UTTARA_N();
 void BASUNDHARA_N();
 void GULSHAN_N();
 void DHANMONDI_N();
 void SAVAR_N();
 void MIRPUR_N();
 void MOTIJHEEL_N();
 void SHAHBAG_N();

 void DONOR();
 void DONOR_UTTARA();
 void DONOR_BASUNDHARA();
 void DONOR_GULSHAN();
 void DONOR_DHANMONDI();
 void DONOR_SAVAR();
 void DONOR_MIRPUR();
 void DONOR_MOTIJHEEL();
 void DONOR_SHAHBAG();

 void PATIENT();
 void UTTARA_A();
 void UTTARA_MODERN_HOSPITAL_A();
 void UTTARA_CENTRAL_HOSPITAL_A();
 void UTTARA_WOMENS_HOSPITALS_A();

 void BASUNDHARA_A();
 void BASUNDHARA_AD_DIN_HOSPITAL_A();
 void BASUNDHARA_EYE_HOSPITAL_A();
 void BASUNDHARA_APOLLO_HOSPITAL_A();

 void GULSHAN_A();
 void GULSHAN_UNITED_HOSPITAL_A();
 void GULSHAN_MOTHER_HOSPITAL_A();
 void GULSHAN_SHAHABUDDIN_HOSPITAL_A();

 void DHANMONDI_A();
 void DHANMONDI_LAB_HOSPITAL_A();
 void DHANMONDI_IBNEY_HOSPPITAL_A();
 void DHANMONDI_CENTRAL_A();

 void SAVAR_A();
 void SAVAR_ANAM_HOSPITAL_A();
 void SAVAR_PRIME_HOSPITAL_A();
 void SAVAR_GENERAL_HOSPITAL_A();

 void MIRPUR_A();
 void MIRPUR_CHILD_HOSPITAL_A();
 void MIRPUR_GALAXY_HOSPITAL_A();
 void MIRPUR_ISLAMI_HOSPITAL_A();

 void MOTIJHEEL_A();
 void MOTIJHEEL_ISLAM_HOSPITAL_A();
 void MOTIJHEEL_PEN_HOSPITAL_A();
 void MOTIJHEEL_BARAKAH_HOSPITAL_A();

 void SHAHBAG_A();
 void SHAHBAG_BANGOBONDHU_HOSPITAL_A();
 void SHAHBAG_BIRDEM_HOSPITAL_A();

 void USEFULNESS();
 void BEFORE_DONATION();
 void DURING_DONATION();
 void AFTER_DONATION();
 void TAKING_BLOOD();

 int QUIZ();
 int fun(int ,int );


 struct NSU
 {
    char *name;
    char *university_name;
    int  ID;
    char *course;
    char *depertment;

 };
 typedef struct ing
{
    char name[50];
    char user[100];
    char pass[50];
    char gender[50];
    char birth[50];
}p;
 void USER_PASSWORD();
 void SIGN_UP(p b);
 void SIGN_IN();




  void gotoxy(int x,int y)
 {

    COORD coord;
    coord.X =x;
    coord.Y =y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

 }


  void loading()
 {
    int x,y;

    printf("                                                                         \n");
    printf("                                                      *                  \n");
    printf("                                                     * *                 \n");
    printf("                        __/\\__                      *   *                \n");
    printf("                       |      |                    *     *               \n");
    printf("                       |_ _ _ |                   *       *              \n");
    printf("                       |_ _ _ |                  *  SAVE   *             \n");
    printf("                       |______|                 *   LIFE    *            \n");
    printf("                           !                    *           *            \n");
    printf("                           |                     *         *             \n");
    printf("                           |                       *******               \n");
    printf("                           !_____________________GIVE BLOOD              \n");
    printf("                                                                         \n");
    printf("                                                                         \n");
    printf("                                GIVE THE GIFT OF LIFE                    \n");
    printf("                                    DONATE BLOOD                         \n");
    printf("                                                                         \n");
    printf("                                                                         \n");

    gotoxy(36,18);
    printf("Loading");
    gotoxy(30,19);

    for(x=1; x<=25;x++)
 {
    for (y=0;y<=100000000;y++);
    printf("%c",177);
 }
    printf("\n\n");


 }


 int main()

  {
      loading();
      printf("\n\n\n\nPress any key to continue");
      getch();
      MAIN_MENU();

  }



  void MAIN_MENU()
  {

      system (" cls ");
      char x;
      printf("\n                                     \n");
      printf("       Donate Blood, Save life       \n\n");
      printf("=======================================\n");

      printf("\n a. Log in as a USER                 \n");
      printf("\n b. Log in as an ADMIN               \n");
      printf("\n c. PROGRAMMER detaits               \n");
      printf("\n d. Exit                             \n");
      printf("\n                                     \n");

      printf("=======================================\n");

      printf(" Your choice: ");
      scanf(" %c",&x);

      fflush(stdin);

      switch (x)

  {

      case 'a' :
      case 'A' :
                USER_PASSWORD();
                break;

      case 'b' :
      case 'B' :
                ADMIN();
                break;

      case 'c' :
      case 'C' :
                PROGRAMMER();
                break;

      case 'd' :
      case 'D' :
                EXIT();
                break;

      default:
              {

                //system (" cls ");
                printf("\n\n Wrong choice. Choose again.\n\n");
                MAIN_MENU();

              }
  }

  }

  void USER_PASSWORD()
{
    system(" cls ");
    p a;
    char x, y[30];
    printf("\n a.Sign up!\n");
    printf("\n b.Sign in!\n");
    printf("\n c.Back to main menu!\n");
    printf("\n Your choice: ");
    fflush(stdin);
    scanf("%c",&x);

    switch(x)
    {
    case 'a':
    case 'A':
        system(" cls ");
        printf("\n Your name: ");
        fflush(stdin);
        gets(a.name);
        puts(" ");
        printf("\n Your gender : ");
        gets(a.gender);
        fflush(stdin);
        puts(" ");
        printf("\n Date of birth : ");
        gets(a.birth);
        fflush(stdin);
        puts(" ");
        printf("\n Enter Username: ");
        fflush(stdin);
        gets(a.user);
        puts(" ");
        printf("\n New password: ");
        fflush(stdin);
        gets(a.pass);
        printf("\n\n");
        SIGN_UP(a);
        break;
    case 'b':
    case 'B':

             SIGN_IN();
             break;

    case 'c':
    case 'C':
            MAIN_MENU();
            break;

    default:
        printf("\n wrong choice, choose again ");
        USER_PASSWORD();
    }
}




void SIGN_UP(p b)
{
    system(" cls ");
    FILE *fp;
    fp=fopen("Password.txt","a");
    if(fp!=NULL)
    {
        fputs(b.name,fp);
        putc('\n',fp);
        fputs(b.user,fp);
        putc('\n',fp);
        fputs(b.pass,fp);
        putc('\n',fp);
        printf("\n\n Successfully Account created........................\n");
        fclose(fp);

        printf("\n\n\n\npress any key to use the program.");
        getch();
        USER();
    }
    else
        printf("\nThe file has not created.!");
}
void SIGN_IN()
{
    p c;
    char ch;
    int i;
    FILE *f;
    char m[50];
    char d[100];
    char e[50];
    f=fopen("Password.txt","r");
    if(f!=NULL)
    {
        fgets(m,50,f);
        fgets(d,100,f);
        fgets(e,50,f);
        ///puts(m);
        ///puts(d);
        ///puts(e);
        fclose(f);
    }
    int y=strlen(e);
        printf("\nEnter your user id:\n");
        fflush(stdin);
        gets(c.user);
        printf("\nEnter your password:\n");
        fflush(stdin);
        int n=0;

        while(1){
        ch=getch();
        if(ch==13)
            break;
        putchar('*');
        c.pass[n]=ch;
        n++;
        c.pass[n] = '\0';
        }
        int h=strncmp(c.pass,e,y-1);
        if(h==0)
        {
            printf("\n\n\n Password Matched!!\n\n\n");
            printf(" Press any key to use the program");
            getch();
            USER();
        }
        else
        {
            getch();
        printf("\n\n\nYou have given a wrong password!\nGive it again!\n");
        SIGN_IN();
        }

}




      void USER()
 {
      system (" cls ");
      char x;
      printf("                                                    \n");
      printf("==================================================\n\n");

      printf("\n a. Donate Blood                   \n");
      printf("\n b. Need Blood                     \n");
      printf("\n c. Usefulness of Blood Donation   \n");
      printf("\n d. Caution before Blood Donation  \n");
      printf("\n e. Caution During Blood Donation  \n");
      printf("\n f. Caution After Blood Donation   \n");
      printf("\n g. Caution before taking Blood    \n");
      printf("\n h. Quiz                           \n");
      printf("\n i. Back to the Menu               \n");
      printf("\n j. Exit                           \n");

      printf("\n\n==================================================\n");

      printf("\n Your choice : ");
      scanf("%c",&x);
      printf("\n");
      fflush(stdin);

      switch(x)

      {

            case 'a' :
            case 'A' :
                       DONATE_BLOOD_X();
                       break;

            case 'b' :
            case 'B' :
                       NEED_BLOOD();
                       break;

            case 'c' :
            case 'C' :
                       USEFULNESS();
                       break;

            case 'd' :
            case 'D' :
                       BEFORE_DONATION();
                       break;

            case 'e' :
            case 'E' :
                       DURING_DONATION();
                       break;

            case 'f' :
            case 'F' :
                       AFTER_DONATION();
                       break;

            case 'g' :
            case 'G' :
                       TAKING_BLOOD();
                       break;

            case 'h' :
            case 'H' :
                       QUIZ();
                       break;

            case 'i' :
            case 'I' :
                       MAIN_MENU();
                       break;

            case 'j' :
            case 'J' :
                       EXIT();
                       break;

             default :
                      {

                        system (" cls ");
                        printf("\nWrong choice. Choose again.\n");
                        USER();

                      }
      }

  }


  void DONATE_BLOOD_X()
  {

       system (" cls ");
       int i;
       printf("\n When did you donate your Blood last time? \n");
       printf(" ");
       scanf("%d",&i);

       fflush(stdin);
       if(i>=60)
       {
           system (" cls ");
           printf("\n\n Which area do you want to donate your Blood?\n");
           DONATE_BLOOD();
       }
       else
       {
           system (" cls ");
           printf("\n\nYou can't Donate your Blood now. It's risky for you life.\n\n");
           printf("\n\n press any key to continue");
           getch();

           EXIT_E();
       }

  }



  void DONATE_BLOOD()

    {

        char x;

       system("cls");
       printf("\n=================================================\n\n");

       printf("\n a. Uttara     \n");
       printf("\n b. Basundhara \n");
       printf("\n c. Dhanmondi  \n");
       printf("\n d. Gulshan    \n");
       printf("\n e. Mirpur     \n");
       printf("\n f. Motijheel  \n");
       printf("\n g. Shahbag    \n");
       printf("\n h. Savar      \n");

       printf("\n===================================================\n\n");

       printf(" wanna go back, press enter \n\n");

        printf("Your choice : ");
        scanf("%c",&x);
        fflush(stdin);

      switch(x)
      {
                case 'a' :
                case 'A' :
                           printf("\n\n In these Hospitals you can Donate your Blood.  \n\n");
                           UTTARA_D();
                           break;
                case 'b' :
                case 'B' :
                           printf("\n\n In these Hospitals you can Donate your Blood.  \n\n");
                           BASUNDHARA_D();
                           break;

                case 'c' :
                case 'C' :
                           printf("\n\n In these Hospitals you can Donate your Blood.  \n\n");
                           DHANMONDI_D();
                           break;

                case 'd' :
                case 'D' :
                           printf("\n\n In these Hospitals you can Donate your Blood.  \n\n");
                           GULSHAN_D();
                           break;

                case 'e' :
                case 'E' :
                           printf("\n\n In these Hospitals you can Donate your Blood.  \n\n");
                           MIRPUR_D();
                           break;

                case 'f' :
                case 'F' :
                           printf("\n\n In these Hospitals you can Donate your Blood.  \n\n");
                           MOTIJHEEL_D();
                           break;

                case 'g' :
                case 'G' :
                           printf("\n\n In these Hospitals you can Donate your Blood.  \n\n");
                           SHAHBAG_D();
                           break;

                case 'h' :
                case 'H' :
                           printf("\n\n In these Hospitals you can Donate your Blood.  \n\n");
                           SAVAR_D();
                           break;



                default :
                         {
                            if(x=='\n')
                            {
                               USER();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            DONATE_BLOOD();
                            }
                          }



        }

    }



     ///Hospitals

     /// UTTARA

    void UTTARA_D()
    {
        system (" cls ");
        char x,y;

       printf("\n\n =============================================================\n");

       printf("\n a. Uttara Central Gospital & Diagnostic Centre  \n");
       printf("\n b. Uttara Modern Medical College and Hospital   \n");
       printf("\n c. Medical College Women and Hospital           \n");
       printf("\n d. Map                                          \n");

       printf("\n =============================================================\n\n");

       printf(" wanna go back, press enter \n\n");

       printf("Your choice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)

       {
                case 'a' :
                case 'A' :
                           printf("\n These Blood groups need in this Hospital. \n What is your Blood Group? \n\n");
                           UTTARA_CENTRAL_HOSPITAL();
                           break;

                case 'b' :
                case 'B' :
                           printf("\n These Blood groups need in this Hospital. \n What is your Blood Group? \n\n");
                           UTTARA_MODERN_HOSPITAL();
                           break;

                case 'c' :
                case 'C' :
                           printf("\n These Blood groups need in this Hospital. \n What is your Blood Group? \n\n");
                           UTTARA_WOMENS_HOSPITALS();
                           break;

                case 'd' :
                case 'D' :

                            system (" cls ");
                            fflush(stdin);
                            FILE *fp;
                            fp=fopen("Uttara Map.txt","r");

                            if(fp==NULL)
                        {
                            printf("\nFile not found\n");
                        }
                            while((y=getc(fp))!=EOF)
                        {
                            fputchar(y);
                        }
                            fclose(fp);

                            printf("\n\nWant to go back, press any key. \n");

                            scanf("%c",&x);
                            fflush(stdin);
                            if (x=='1')
                        {
                            UTTARA_D();
                        }
                            else
                        {
                            UTTARA_D();
                        }

                           break;



                default  :
                          {
                            if(x=='\n')
                            {
                                DONATE_BLOOD();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            UTTARA_D();
                            }
                          }
    }

    }

     void UTTARA_CENTRAL_HOSPITAL()

     {

     system (" cls ");
     fflush(stdin);
     FILE *fp;
     char x,y,z;


     printf("==================================\n\n");

     printf(" a. A+  \n"  );
     printf(" b. A-  \n"  );
     printf(" c. B+  \n"  );
     printf(" d. B-  \n"  );
     printf(" e. AB+ \n"  );
     printf(" f. AB- \n"  );
     printf(" g. O+  \n"  );
     printf(" h. O-  \n"  );

     printf("\n==================================\n");
     printf("  wanna go back press enter \n\n");
     printf("Your choice:");

    scanf("%c",&x);
    fflush(stdin);


    switch(x)
    {

         case 'b' :
         case 'B' :
                      system (" cls ");
                     fp=fopen("Uttara Central A-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         UTTARA_D();
                      }
                     else
                      {
                         UTTARA_D();
                      }
                      break;

         case 'd' :
         case 'D' :
                     system (" cls ");
                     fp=fopen("Uttara Central B-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         UTTARA_D();
                      }
                     else
                      {
                         UTTARA_D();
                      }
                      break;

         case 'f' :
         case 'F' :
                      system (" cls ");
                     fp=fopen("Uttara Central AB-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         UTTARA_D();
                      }
                     else
                      {
                         UTTARA_D();
                      }
                      break;

         case 'h' :
         case 'H' :

                      system (" cls ");
                     fp=fopen("Uttara Central O-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         UTTARA_D();
                      }
                     else
                      {
                         UTTARA_D();
                      }
                      break;



         case 'a' :
         case 'A' :
                     system (" cls ");
                     fp=fopen("Uttara Central A+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         UTTARA_D();
                      }
                     else
                      {
                         UTTARA_D();
                      }
                      break;




         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Uttara Central B+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         UTTARA_D();
                      }
                     else
                      {
                         UTTARA_D();
                      }
                      break;


         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Uttara Central AB+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         UTTARA_D();
                      }
                     else
                      {
                         UTTARA_D();
                      }
                      break;


         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Uttara Central O+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         UTTARA_D();
                      }
                     else
                      {
                         UTTARA_D();
                      }
                      break;




         default :
                   {
                     if (x=='\n')
                     {
                         UTTARA_D();
                     }

                     else
                      {
                         system (" cls ");
                         UTTARA_CENTRAL_HOSPITAL();
                       }

                   }



    }

     }


     void UTTARA_MODERN_HOSPITAL()
     {

     system (" cls ");
     fflush(stdin);
     FILE *fp;
     char x,y,z;


     printf("==================================\n\n");

     printf(" a. A+  \n"  );
     printf(" b. A-  \n"  );
     printf(" c. B+  \n"  );
     printf(" d. B-  \n"  );
     printf(" e. AB+ \n"  );
     printf(" f. AB- \n"  );
     printf(" g. O+  \n"  );
     printf(" h. O-  \n"  );

     printf("\n==================================\n");
     printf("  wanna go back, press enter \n\n");
     printf("Your choice:");

    scanf("%c",&x);
    fflush(stdin);

    switch(x)
    {

         case 'a' :
         case 'A' :
                       system (" cls ");
                    fp=fopen("Uttara Modern A+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         UTTARA_D();
                      }
                     else
                      {
                         UTTARA_D();
                      }
                      break;

         case 'c' :
         case 'C' :
                      system (" cls ");
                    fp=fopen("Uttara Modern B+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         UTTARA_D();
                      }
                     else
                      {
                         UTTARA_D();
                      }
                      break;

         case 'e' :
         case 'E' :
                      system (" cls ");
                    fp=fopen("Uttara Modern AB+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         UTTARA_D();
                      }
                     else
                      {
                         UTTARA_D();
                      }
                      break;


         case 'g' :
         case 'G' :
                      system (" cls ");
                    fp=fopen("Uttara Modern O+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         UTTARA_D();
                      }
                     else
                      {
                         UTTARA_D();
                      }
                      break;



         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Uttara Modern A-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         UTTARA_D();
                      }
                     else
                      {
                         UTTARA_D();
                      }
                      break;



         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Uttara Modern B-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         UTTARA_D();
                      }
                     else
                      {
                         UTTARA_D();
                      }
                      break;



         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Uttara Modern AB-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         UTTARA_D();
                      }
                     else
                      {
                         UTTARA_D();
                      }
                      break;



         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Uttara Modern O-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         UTTARA_D();
                      }
                     else
                      {
                         UTTARA_D();
                      }
                      break;


         default :
                   {
                      if (x=='\n')
                     {
                         UTTARA_D();
                     }

                     else
                      {
                         system (" cls ");
                         UTTARA_MODERN_HOSPITAL();
                       }
                   }

    }

     }


    void UTTARA_WOMENS_HOSPITALS()
    {

     system (" cls ");
     fflush(stdin);
     FILE *fp;
     char x,y,z;

     printf("==================================\n\n");

     printf(" a. A+  \n"  );
     printf(" b. A-  \n"  );
     printf(" c. B+  \n"  );
     printf(" d. B-  \n"  );
     printf(" e. AB+ \n"  );
     printf(" f. AB- \n"  );
     printf(" g. O+  \n"  );
     printf(" h. O-  \n"  );

     printf("\n==================================\n");
     printf("  wanna go back, press enter \n\n");
     printf("Your choice:");

    scanf("%c",&x);
    fflush(stdin);

    switch(x)
    {

         case 'b' :
         case 'B' :
                       system (" cls ");
                       fp=fopen("Uttara women A-.txt","r");

                       if(fp==NULL)
                    {
                       printf("\nFile not found\n");
                    }
                       while((y=getc(fp))!=EOF)
                    {
                       fputchar(y);
                    }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         UTTARA_D();
                      }
                     else
                      {
                         UTTARA_D();
                      }
                      break;

         case 'e' :
         case 'E' :
                        system (" cls ");
                    fp=fopen("Uttara women AB+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         UTTARA_D();
                      }
                     else
                      {
                         UTTARA_D();
                      }
                      break;

         case 'f' :
         case 'F' :
                       system (" cls ");
                    fp=fopen("Uttara women AB-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         UTTARA_D();
                      }
                     else
                      {
                         UTTARA_D();
                      }
                      break;


         case 'g' :
         case 'G' :
                      system (" cls ");
                    fp=fopen("Uttara women O+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         UTTARA_D();
                      }
                     else
                      {
                         UTTARA_D();
                      }
                      break;



         case 'a' :
         case 'A' :
                     system (" cls ");
                    fp=fopen("Uttara women A+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         UTTARA_D();
                      }
                     else
                      {
                         UTTARA_D();
                      }
                      break;

         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Uttara women B+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         UTTARA_D();
                      }
                     else
                      {
                         UTTARA_D();
                      }
                      break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Uttara women B-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         UTTARA_D();
                      }
                     else
                      {
                         UTTARA_D();
                      }
                      break;



         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Uttara women O-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }

                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         UTTARA_D();
                      }
                     else
                      {
                         UTTARA_D();
                      }
                      break;




         default :
                   {
                      if (x=='\n')
                     {
                         UTTARA_D();
                     }

                     else
                      {
                         system (" cls ");
                         UTTARA_WOMENS_HOSPITALS();
                       }

                   }



    }

     }


    ///BASUNDHARA


    void BASUNDHARA_D()
    {

        system (" cls ");
        char x,y;

       printf("\n\n====================================================\n");

       printf("\n a. Basundhara Ad-Din Medical College Hospital  \n");
       printf("\n b. Basundhara Eye Hospital                     \n");
       printf("\n c. Apollo Hospital Dhaka                       \n");
       printf("\n d. Map                                         \n");


       printf("\n========================================================\n");

       printf("\nwant to go back, press enter \n\n");
       printf("Your choice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)

       {
                case 'a' :
                case 'A' :
                           printf("\n These Blood groups need in this Hospital. \n What is your Blood Group? \n\n");
                           BASUNDHARA_AD_DIN_HOSPITAL();
                           break;

                case 'b' :
                case 'B' :
                           printf("\n These Blood groups need in this Hospital. \n What is your Blood Group? \n\n");
                           BASUNDHARA_EYE_HOSPITAL();
                           break;

                case 'c' :
                case 'C' :
                           printf("\n These Blood groups need in this Hospital. \n What is your Blood Group? \n\n");
                           BASUNDHARA_APOLLO_HOSPITAL();
                           break;


               case 'd' :
               case 'D' :
                            system (" cls ");
                            fflush(stdin);
                            FILE *fp;
                            fp=fopen("Basundhara Map.txt","r");

                            if(fp==NULL)
                        {
                            printf("\nFile not found\n");
                        }
                            while((y=getc(fp))!=EOF)
                        {
                            fputchar(y);
                        }
                            fclose(fp);

                            printf("\n\nWant to go back, press any key. \n");

                            scanf("%c",&x);
                            fflush(stdin);
                            if (x=='1')
                        {
                            BASUNDHARA_D();
                        }
                            else
                        {
                            BASUNDHARA_D();
                        }

                           break;



                default  :
                          {
                            if(x=='\n')
                            {
                                DONATE_BLOOD();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            BASUNDHARA_D();
                            }
                          }

    }


    }


    void BASUNDHARA_APOLLO_HOSPITAL()
 {


     system (" cls ");
     fflush(stdin);
     FILE *fp;
     char x,y,z;


     printf("==================================\n\n");

     printf(" a. A+  \n"  );
     printf(" b. A-  \n"  );
     printf(" c. B+  \n"  );
     printf(" d. B-  \n"  );
     printf(" e. AB+ \n"  );
     printf(" f. AB- \n"  );
     printf(" g. O+  \n"  );
     printf(" h. O-  \n"  );

     printf("\n==================================\n");
     printf("  wanna go back, press enter \n\n");
     printf("Your choice:");

    scanf("%c",&x);
    fflush(stdin);

    switch(x)
    {



         case 'b' :
         case 'B' :
                       system (" cls ");
                    fp=fopen("Basundhara apollo A-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         BASUNDHARA_D();
                      }
                     else
                      {
                         BASUNDHARA_D();
                      }
                      break;

         case 'e' :
         case 'E' :
                       system (" cls ");
                    fp=fopen("Basundhara apollo AB+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         BASUNDHARA_D();
                      }
                     else
                      {
                         BASUNDHARA_D();
                      }
                      break;

         case 'f' :
         case 'F' :
                        system (" cls ");
                    fp=fopen("Basundhara apollo AB-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         BASUNDHARA_D();
                      }
                     else
                      {
                         BASUNDHARA_D();
                      }
                      break;

         case 'g' :
         case 'G' :
                        system (" cls ");
                    fp=fopen("Basundhara apollo O+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         BASUNDHARA_D();
                      }
                     else
                      {
                         BASUNDHARA_D();
                      }
                      break;



         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Basundhara apollo A+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         BASUNDHARA_D();
                      }
                     else
                      {
                         BASUNDHARA_D();
                      }
                      break;


         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Basundhara apollo B+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         BASUNDHARA_D();
                      }
                     else
                      {
                         BASUNDHARA_D();
                      }
                      break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Basundhara apollo B-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         BASUNDHARA_D();
                      }
                     else
                      {
                         BASUNDHARA_D();
                      }
                      break;

         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Basundhara apollo O-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         BASUNDHARA_D();
                      }
                     else
                      {
                         BASUNDHARA_D();
                      }
                      break;





         default :
                   {
                      if (x=='\n')
                     {
                         BASUNDHARA_D();
                     }

                     else
                      {
                         system (" cls ");
                         BASUNDHARA_APOLLO_HOSPITAL();
                       }
                   }



    }

     }

    void BASUNDHARA_AD_DIN_HOSPITAL()
    {

     system (" cls ");
     fflush(stdin);
     FILE *fp;
     char x,y,z;

     printf("==================================\n\n");

     printf(" a. A+  \n"  );
     printf(" b. A-  \n"  );
     printf(" c. B+  \n"  );
     printf(" d. B-  \n"  );
     printf(" e. AB+ \n"  );
     printf(" f. AB- \n"  );
     printf(" g. O+  \n"  );
     printf(" h. O-  \n"  );

     printf("\n==================================\n");
     printf("  wanna go back, press enter \n\n");
     printf("Your choice: ");

    scanf("%c",&x);
    fflush(stdin);

    switch(x)
    {

         case 'a' :
         case 'A' :
                       system (" cls ");
                    fp=fopen("Basundhara addin A+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         BASUNDHARA_D();
                      }
                     else
                      {
                         BASUNDHARA_D();
                      }
                      break;

         case 'c' :
         case 'C' :
                       system (" cls ");
                    fp=fopen("Basundhara addin B+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         BASUNDHARA_D();
                      }
                     else
                      {
                         BASUNDHARA_D();
                      }
                      break;

         case 'e' :
         case 'E' :
                       system (" cls ");
                    fp=fopen("Basundhara addin AB+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         BASUNDHARA_D();
                      }
                     else
                      {
                         BASUNDHARA_D();
                      }
                      break;

         case 'g' :
         case 'G' :
                       system (" cls ");
                    fp=fopen("Basundhara addin O+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         BASUNDHARA_D();
                      }
                     else
                      {
                         BASUNDHARA_D();
                      }
                      break;

         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Basundhara addin A-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         BASUNDHARA_D();
                      }
                     else
                      {
                         BASUNDHARA_D();
                      }
                      break;


         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Basundhara addin B-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         BASUNDHARA_D();
                      }
                     else
                      {
                         BASUNDHARA_D();
                      }
                      break;



         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Basundhara addin AB-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         BASUNDHARA_D();
                      }
                     else
                      {
                         BASUNDHARA_D();
                      }
                      break;



         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Basundhara addin O-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         BASUNDHARA_D();
                      }
                     else
                      {
                         BASUNDHARA_D();
                      }
                      break;




         default :
                   {
                      if (x=='\n')
                     {
                         BASUNDHARA_D();
                     }

                     else
                      {
                         system (" cls ");
                         BASUNDHARA_AD_DIN_HOSPITAL();
                       }
                   }



    }

     }


    void BASUNDHARA_EYE_HOSPITAL()
    {

     system (" cls ");
     fflush(stdin);
     FILE *fp;
     char x,y,z;


     printf("==================================\n\n");

     printf(" a. A+  \n"  );
     printf(" b. A-  \n"  );
     printf(" c. B+  \n"  );
     printf(" d. B-  \n"  );
     printf(" e. AB+ \n"  );
     printf(" f. AB- \n"  );
     printf(" g. O+  \n"  );
     printf(" h. O-  \n"  );


     printf("\n==================================\n");
     printf("  wanna go back, press enter \n\n");
     printf("Your choice:");

    scanf("%c",&x);
    fflush(stdin);

    switch(x)
    {



         case 'b' :
         case 'B' :
                      system (" cls ");
                    fp=fopen("Basundhara eye A-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         BASUNDHARA_D();
                      }
                     else
                      {
                         BASUNDHARA_D();
                      }
                      break;

         case 'd' :
         case 'D' :
                        system (" cls ");
                    fp=fopen("Basundhara eye B-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         BASUNDHARA_D();
                      }
                     else
                      {
                         BASUNDHARA_D();
                      }
                      break;

         case 'f' :
         case 'F' :
                        system (" cls ");
                    fp=fopen("Basundhara eye AB-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         BASUNDHARA_D();
                      }
                     else
                      {
                         BASUNDHARA_D();
                      }
                      break;

         case 'h' :
         case 'H' :
                      system (" cls ");
                    fp=fopen("Basundhara eye O-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         BASUNDHARA_D();
                      }
                     else
                      {
                         BASUNDHARA_D();
                      }
                      break;





          case 'a' :
          case 'A' :
                    system (" cls ");
                    fp=fopen("Basundhara eye A+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         BASUNDHARA_D();
                      }
                     else
                      {
                         BASUNDHARA_D();
                      }
                      break;




         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Basundhara eye B+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         BASUNDHARA_D();
                      }
                     else
                      {
                         BASUNDHARA_D();
                      }
                      break;


         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Basundhara eye AB+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         BASUNDHARA_D();
                      }
                     else
                      {
                         BASUNDHARA_D();
                      }
                      break;


         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Basundhara eye O+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         BASUNDHARA_D();
                      }
                     else
                      {
                         BASUNDHARA_D();
                      }
                      break;




         default :
                   {
                      if (x=='\n')
                     {
                         BASUNDHARA_D();
                     }

                     else
                      {
                         system (" cls ");
                         BASUNDHARA_EYE_HOSPITAL();
                       }

                   }



    }

     }


    ///GULSHAN


    void GULSHAN_D()
    {
        system (" cls ");
        char x,y;

       printf("\n\n===================================================\n");

       printf("\n a. United Hospital                             \n");
       printf("\n b. Shahabuddin Medical College Hospital        \n");
       printf("\n c. Gulshan Mother and Children Clinic Limited  \n");
       printf("\n d. Map                                         \n");

       printf("\n=====================================================\n");
       printf("\n want to go back, press enter\n\n");
       printf("Your choice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)

       {
                case 'a' :
                case 'A' :
                           printf("\n These Blood groups need in this Hospital. \n What is your Blood Group? \n\n");
                           GULSHAN_UNITED_HOSPITAL();
                           break;

                case 'b' :
                case 'B' :
                           printf("\n These Blood groups need in this Hospital. \n What is your Blood Group? \n\n");
                           GULSHAN_SHAHABUDDIN_HOSPITAL();
                           break;

                case 'c' :
                case 'C' :
                           printf("\n These Blood groups need in this Hospital. \n What is your Blood Group? \n\n");
                           GULSHAN_MOTHER_HOSPITAL();
                           break;

                case 'd' :
                case 'D' :
                            system (" cls ");
                            fflush(stdin);
                            FILE *fp;
                            fp=fopen("Gulshan Map.txt","r");

                            if(fp==NULL)
                        {
                            printf("\nFile not found\n");
                        }
                            while((y=getc(fp))!=EOF)
                        {
                            fputchar(y);
                        }
                            fclose(fp);

                            printf("\n\nWant to go back, press any key. \n");

                            scanf("%c",&x);
                            fflush(stdin);
                            if (x=='1')
                        {
                            GULSHAN_D();
                        }
                            else
                        {
                            GULSHAN_D();
                        }

                           break;





                default  :
                          {
                            if(x=='\n')
                            {
                                DONATE_BLOOD();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            GULSHAN_D();
                            }
                          }
    }
    }


    void GULSHAN_UNITED_HOSPITAL()
    {

     system (" cls ");
     fflush(stdin);
     FILE *fp;
     char x,y,z;

     printf("==================================\n\n");

     printf(" a. A+  \n"  );
     printf(" b. A-  \n"  );
     printf(" c. B+  \n"  );
     printf(" d. B-  \n"  );
     printf(" e. AB+ \n"  );
     printf(" f. AB- \n"  );
     printf(" g. O+  \n"  );
     printf(" h. O-  \n"  );


     printf("\n==================================\n");
     printf("  wanna go back, press enter \n\n");
     printf("Your choice:");

    scanf("%c",&x);
    fflush(stdin);

    switch(x)
    {


         case 'b' :
         case 'B' :
                         system (" cls ");
                    fp=fopen("Gulshan United A-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         GULSHAN_D();
                      }
                     else
                      {
                         GULSHAN_D();
                      }
                      break;

         case 'd' :
         case 'D' :
                         system (" cls ");
                    fp=fopen("Gulshan United B-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         GULSHAN_D();
                      }
                     else
                      {
                         GULSHAN_D();
                      }
                      break;

         case 'f' :
         case 'F' :
                         system (" cls ");
                    fp=fopen("Gulshan United AB-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         GULSHAN_D();
                      }
                     else
                      {
                         GULSHAN_D();
                      }
                      break;

         case 'h' :
         case 'H' :
                         system (" cls ");
                    fp=fopen("Gulshan United O-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         GULSHAN_D();
                      }
                     else
                      {
                         GULSHAN_D();
                      }
                      break;




         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Gulshan United A+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         GULSHAN_D();
                      }
                     else
                      {
                         GULSHAN_D();
                      }
                      break;





         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Gulshan United B+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         GULSHAN_D();
                      }
                     else
                      {
                         GULSHAN_D();
                      }
                      break;

         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Gulshan United AB+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         GULSHAN_D();
                      }
                     else
                      {
                         GULSHAN_D();
                      }
                      break;



         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Gulshan United O+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         GULSHAN_D();
                      }
                     else
                      {
                         GULSHAN_D();
                      }
                      break;



         default :
                   {
                     if (x=='\n')
                     {
                         GULSHAN_D();
                     }

                     else
                      {
                         system (" cls ");
                         GULSHAN_UNITED_HOSPITAL();
                       }

                   }



    }

    }


    void GULSHAN_MOTHER_HOSPITAL()
    {

     system (" cls ");
     fflush(stdin);
     FILE *fp;
     char x,y,z;


     printf("==================================\n\n");

     printf(" a. A+  \n"  );
     printf(" b. A-  \n"  );
     printf(" c. B+  \n"  );
     printf(" d. B-  \n"  );
     printf(" e. AB+ \n"  );
     printf(" f. AB- \n"  );
     printf(" g. O+  \n"  );
     printf(" h. O-  \n"  );

     printf("\n==================================\n");
     printf("  wanna go back, press enter \n\n");
     printf("Your choice:");

    scanf("%c",&x);
    fflush(stdin);

    switch(x)
    {

         case 'a' :
         case 'A' :
                        system (" cls ");
                    fp=fopen("Gulshan Mother A+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         GULSHAN_D();
                      }
                     else
                      {
                         GULSHAN_D();
                      }
                      break;

         case 'c' :
         case 'C' :
                        system (" cls ");
                    fp=fopen("Gulshan Mother B+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         GULSHAN_D();
                      }
                     else
                      {
                         GULSHAN_D();
                      }
                      break;

         case 'e' :
         case 'E' :
                        system (" cls ");
                    fp=fopen("Gulshan Mother AB+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         GULSHAN_D();
                      }
                     else
                      {
                         GULSHAN_D();
                      }
                      break;

         case 'g' :
         case 'G' :
                        system (" cls ");
                    fp=fopen("Gulshan Mother O+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         GULSHAN_D();
                      }
                     else
                      {
                         GULSHAN_D();
                      }
                      break;


         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Gulshan Mother A-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         GULSHAN_D();
                      }
                     else
                      {
                         GULSHAN_D();
                      }
                      break;




         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Gulshan Mother B-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         GULSHAN_D();
                      }
                     else
                      {
                         GULSHAN_D();
                      }
                      break;



         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Gulshan Mother AB-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         GULSHAN_D();
                      }
                     else
                      {
                         GULSHAN_D();
                      }
                      break;

         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Gulshan Mother O-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         GULSHAN_D();
                      }
                     else
                      {
                         GULSHAN_D();
                      }
                      break;



         default :
                   {
                      if (x=='\n')
                     {
                         GULSHAN_D();
                     }

                     else
                      {
                         system (" cls ");
                         GULSHAN_MOTHER_HOSPITAL();
                       }

                   }



    }

     }


    void GULSHAN_SHAHABUDDIN_HOSPITAL()
    {

     system (" cls ");
     fflush(stdin);
     FILE *fp;
     char x,y,z;


     printf("==================================\n\n");

     printf(" a. A+  \n"  );
     printf(" b. A-  \n"  );
     printf(" c. B+  \n"  );
     printf(" d. B-  \n"  );
     printf(" e. AB+ \n"  );
     printf(" f. AB- \n"  );
     printf(" g. O+  \n"  );
     printf(" h. O-  \n"  );


     printf("\n==================================\n");
     printf("  wanna go back, press enter \n\n");
     printf("Your choice:");

    scanf("%c",&x);
    fflush(stdin);

    switch(x)
    {

         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Gulshan Shahabuddin A+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         GULSHAN_D();
                      }
                     else
                      {
                         GULSHAN_D();
                      }
                      break;

         case 'b' :
         case 'B' :
                        system (" cls ");
                    fp=fopen("Gulshan Shahabuddin A-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         GULSHAN_D();
                      }
                     else
                      {
                         GULSHAN_D();
                      }
                      break;

         case 'e' :
         case 'E' :
                        system (" cls ");
                    fp=fopen("Gulshan Shahabuddin AB+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         GULSHAN_D();
                      }
                     else
                      {
                         GULSHAN_D();
                      }
                      break;

         case 'f' :
         case 'F' :
                        system (" cls ");
                    fp=fopen("Gulshan Shahabuddin AB-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         GULSHAN_D();
                      }
                     else
                      {
                         GULSHAN_D();
                      }
                      break;

         case 'g' :
         case 'G' :
                        system (" cls ");
                    fp=fopen("Gulshan Shahabuddin O+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         GULSHAN_D();
                      }
                     else
                      {
                         GULSHAN_D();
                      }
                      break;


         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Gulshan Shahabuddin B+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         GULSHAN_D();
                      }
                     else
                      {
                         GULSHAN_D();
                      }
                      break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Gulshan Shahabuddin B-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         GULSHAN_D();
                      }
                     else
                      {
                         GULSHAN_D();
                      }
                      break;




            case 'h' :
            case 'H' :
                    system (" cls ");
                    fp=fopen("Gulshan Shahabuddin O-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         GULSHAN_D();
                      }
                     else
                      {
                         GULSHAN_D();
                      }
                      break;



         default :
                   {
                      if (x=='\n')
                     {
                         GULSHAN_D();
                     }

                     else
                      {
                         system (" cls ");
                         GULSHAN_SHAHABUDDIN_HOSPITAL();
                       }

                   }



    }

     }

    ///DHANMONDI


    void DHANMONDI_D()
    {
        system (" cls ");
        char x,y;

       printf("\n\n====================================================\n");

       printf("\n a. Lab Aid Hospital        \n");
       printf("\n b. Central Hospital Ltd.   \n");
       printf("\n c. IBN Cina Hospital       \n");
       printf("\n d. Map                     \n");

       printf("\n======================================================\n\n");

       printf(" want to go back, press enter\n\n");
       printf("Your choice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)

       {
                case 'a' :
                case 'A' :
                           printf("\n These Blood groups need in this Hospital. \n What is your Blood Group? \n\n");
                           DHANMONDI_LAB_HOSPITAL();
                           break;

                case 'b' :
                case 'B' :
                           printf("\n These Blood groups need in this Hospital. \n What is your Blood Group? \n\n");
                           DHANMONDI_CENTRAL();
                           break;

                case 'c' :
                case 'C' :
                           printf("\n These Blood groups need in this Hospital. \n What is your Blood Group? \n\n");
                           DHANMONDI_IBNEY_HOSPPITAL();
                           break;

                case 'd' :
                case 'D' :
                            system (" cls ");
                            fflush(stdin);
                            FILE *fp;
                            fp=fopen("Dhanmondi Map.txt","r");

                            if(fp==NULL)
                        {
                            printf("\nFile not found\n");
                        }
                            while((y=getc(fp))!=EOF)
                        {
                            fputchar(y);
                        }
                            fclose(fp);

                            printf("\n\nWant to go back, press any key. \n");

                            scanf("%c",&x);
                            fflush(stdin);
                            if (x=='1')
                        {
                            DHANMONDI_D();
                        }
                            else
                        {
                            DHANMONDI_D();
                        }

                           break;





                default  :
                          {
                            if(x=='\n')
                            {
                                DONATE_BLOOD();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            DHANMONDI_D();
                            }
                          }

    }

    }


    void DHANMONDI_CENTRAL()
    {

     system (" cls ");
     fflush(stdin);
     FILE *fp;
     char x,y,z;

     printf("==================================\n\n");

     printf(" a. A+  \n"  );
     printf(" b. A-  \n"  );
     printf(" c. B+  \n"  );
     printf(" d. B-  \n"  );
     printf(" e. AB+ \n"  );
     printf(" f. AB- \n"  );
     printf(" g. O+  \n"  );
     printf(" h. O-  \n"  );


     printf("\n==================================\n");
     printf("  wanna go back, press enter \n\n");
     printf("Your choice:");

    scanf("%c",&x);
    fflush(stdin);

    switch(x)
    {

         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Dhanmondi central A+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         DHANMONDI_D();
                      }
                     else
                      {
                         DHANMONDI_D();
                      }
                      break;

         case 'b' :
         case 'B' :
                        system (" cls ");
                    fp=fopen("Dhanmondi central A-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         DHANMONDI_D();
                      }
                     else
                      {
                         DHANMONDI_D();
                      }
                      break;

         case 'e' :
         case 'E' :
                        system (" cls ");
                    fp=fopen("Dhanmondi central AB+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         DHANMONDI_D();
                      }
                     else
                      {
                         DHANMONDI_D();
                      }
                      break;

         case 'f' :
         case 'F' :
                        system (" cls ");
                    fp=fopen("Dhanmondi central AB-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         DHANMONDI_D();
                      }
                     else
                      {
                         DHANMONDI_D();
                      }
                      break;

         case 'g' :
         case 'G' :
                        system (" cls ");
                    fp=fopen("Dhanmondi central O+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         DHANMONDI_D();
                      }
                     else
                      {
                         DHANMONDI_D();
                      }
                      break;


         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Dhanmondi central B+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         DHANMONDI_D();
                      }
                     else
                      {
                         DHANMONDI_D();
                      }
                      break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Dhanmondi central B-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         DHANMONDI_D();
                      }
                     else
                      {
                         DHANMONDI_D();
                      }
                      break;



         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Dhanmondi central O-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         DHANMONDI_D();
                      }
                     else
                      {
                         DHANMONDI_D();
                      }
                      break;




         default :
                   {
                      if (x=='\n')
                     {
                         DHANMONDI_D();
                     }

                     else
                      {
                         system (" cls ");
                         DHANMONDI_CENTRAL();
                       }

                   }



    }

     }


    void DHANMONDI_IBNEY_HOSPPITAL()
    {

     system (" cls ");
     fflush(stdin);
     FILE *fp;
     char x,y,z;


     printf("==================================\n\n");

     printf(" a. A+  \n"  );
     printf(" b. A-  \n"  );
     printf(" c. B+  \n"  );
     printf(" d. B-  \n"  );
     printf(" e. AB+ \n"  );
     printf(" f. AB- \n"  );
     printf(" g. O+  \n"  );
     printf(" h. O-  \n"  );


     printf("\n==================================\n");
     printf("  wanna go back, press enter \n\n");
     printf("Your choice:");

    scanf("%c",&x);
    fflush(stdin);

    switch(x)
    {

         case 'a' :
         case 'A' :
                        system (" cls ");
                    fp=fopen("Dhanmondi ibn A+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         DHANMONDI_D();
                      }
                     else
                      {
                         DHANMONDI_D();
                      }
                      break;

         case 'c' :
         case 'C' :
                        system (" cls ");
                    fp=fopen("Dhanmondi ibn B+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         DHANMONDI_D();
                      }
                     else
                      {
                         DHANMONDI_D();
                      }
                      break;

         case 'e' :
         case 'E' :
                        system (" cls ");
                    fp=fopen("Dhanmondi ibn AB+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         DHANMONDI_D();
                      }
                     else
                      {
                         DHANMONDI_D();
                      }
                      break;

         case 'g' :
         case 'G' :
                        system (" cls ");
                    fp=fopen("Dhanmondi ibn O+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         DHANMONDI_D();
                      }
                     else
                      {
                         DHANMONDI_D();
                      }
                      break;




         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Dhanmondi ibn A-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         DHANMONDI_D();
                      }
                     else
                      {
                         DHANMONDI_D();
                      }
                      break;



         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Dhanmondi ibn B-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         DHANMONDI_D();
                      }
                     else
                      {
                         DHANMONDI_D();
                      }
                      break;



         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Dhanmondi ibn AB-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         DHANMONDI_D();
                      }
                     else
                      {
                         DHANMONDI_D();
                      }
                      break;

         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Dhanmondi ibn O-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         DHANMONDI_D();
                      }
                     else
                      {
                         DHANMONDI_D();
                      }
                      break;



         default :
                   {
                       if (x=='\n')
                     {
                         DHANMONDI_D();
                     }

                     else
                      {
                         system (" cls ");
                         DHANMONDI_IBNEY_HOSPPITAL();
                       }


                   }



    }

     }

    void DHANMONDI_LAB_HOSPITAL()
    {

     system (" cls ");
     fflush(stdin);
     FILE *fp;
     char x,y,z;

     printf("==================================\n\n");

     printf(" a. A+  \n"  );
     printf(" b. A-  \n"  );
     printf(" c. B+  \n"  );
     printf(" d. B-  \n"  );
     printf(" e. AB+ \n"  );
     printf(" f. AB- \n"  );
     printf(" g. O+  \n"  );
     printf(" h. O-  \n"  );


     printf("\n==================================\n");
     printf("  wanna go back, press enter \n\n");
     printf("Your choice:");

    scanf("%c",&x);
    fflush(stdin);

    switch(x)
    {

         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Dhanmondi lab A+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         DHANMONDI_D();
                      }
                     else
                      {
                         DHANMONDI_D();
                      }
                      break;

         case 'b' :
         case 'B' :
                        system (" cls ");
                    fp=fopen("Dhanmondi lab A-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         DHANMONDI_D();
                      }
                     else
                      {
                         DHANMONDI_D();
                      }
                      break;

         case 'd' :
         case 'D' :
                        system (" cls ");
                    fp=fopen("Dhanmondi lab B-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         DHANMONDI_D();
                      }
                     else
                      {
                         DHANMONDI_D();
                      }
                      break;

         case 'f' :
         case 'F' :
                        system (" cls ");
                    fp=fopen("Dhanmondi lab AB-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         DHANMONDI_D();
                      }
                     else
                      {
                         DHANMONDI_D();
                      }
                      break;

         case 'h' :
         case 'H' :
                        system (" cls ");
                    fp=fopen("Dhanmondi lab O-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         DHANMONDI_D();
                      }
                     else
                      {
                         DHANMONDI_D();
                      }
                      break;



         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Dhanmondi lab B+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         DHANMONDI_D();
                      }
                     else
                      {
                         DHANMONDI_D();
                      }
                      break;




         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Dhanmondi lab AB+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         DHANMONDI_D();
                      }
                     else
                      {
                         DHANMONDI_D();
                      }
                      break;



         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Dhanmondi lab O+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         DHANMONDI_D();
                      }
                     else
                      {
                         DHANMONDI_D();
                      }
                      break;





         default :
                   {
                       if (x=='\n')
                     {
                         DHANMONDI_D();
                     }

                     else
                      {
                         system (" cls ");
                         DHANMONDI_LAB_HOSPITAL();
                       }


                   }



    }

     }


    ///SHAHBAG



    void SHAHBAG_D()
    {
        system (" cls ");
        char x,y;

       printf("\n\n====================================================\n");


       printf("\n a. Bangabandhu Sheikh Mujib Medical University    \n");
       printf("\n b. BIRDEM Hospital   \n");
       printf("\n c. Map   \n");

       printf("\n=====================================================\n");
       printf("\n want to go back, press enter\n\n");
       printf("Your choice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)

       {
                case 'a' :
                case 'A' :
                           printf("\n These Blood groups need in this Hospital. \n What is your Blood Group? \n\n");
                           SHAHBAG_BANGOBONDHU_HOSPITAL();
                           break;

                case 'b' :
                case 'B' :
                           printf("\n These Blood groups need in this Hospital. \n What is your Blood Group? \n\n");
                           SHAHBAG_BIRDEM_HOSPITAL();
                           break;

                case 'c' :
                case 'C' :
                            system (" cls ");
                            fflush(stdin);
                            FILE *fp;
                            fp=fopen("Shahbag Map.txt","r");

                            if(fp==NULL)
                        {
                            printf("\nFile not found\n");
                        }
                            while((y=getc(fp))!=EOF)
                        {
                            fputchar(y);
                        }
                            fclose(fp);

                            printf("\n\nWant to go back, press any key. \n");

                            scanf("%c",&x);
                            fflush(stdin);
                            if (x=='1')
                        {
                            SHAHBAG_D();
                        }
                            else
                        {
                            SHAHBAG_D();
                        }

                           break;




                default  :
                          {
                            if(x=='\n')
                            {
                                DONATE_BLOOD();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            SHAHBAG_D();
                            }
                          }

    }

    }


    void SHAHBAG_BANGOBONDHU_HOSPITAL()
    {

     system (" cls ");
     fflush(stdin);
     FILE *fp;
     char x,y,z;

     printf("==================================\n\n");

     printf(" a. A+  \n"  );
     printf(" b. A-  \n"  );
     printf(" c. B+  \n"  );
     printf(" d. B-  \n"  );
     printf(" e. AB+ \n"  );
     printf(" f. AB- \n"  );
     printf(" g. O+  \n"  );
     printf(" h. O-  \n"  );


     printf("\n==================================\n");
     printf("  wanna go back, press enter \n\n");
     printf("Your choice:");

     scanf("%c",&x);
     fflush(stdin);

    switch(x)
    {

         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Shahbag mujib A+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SHAHBAG_D();
                      }
                     else
                      {
                         SHAHBAG_D();
                      }
                      break;

         case 'b' :
         case 'B' :
                        system (" cls ");
                    fp=fopen("Shahbag mujib A-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SHAHBAG_D();
                      }
                     else
                      {
                         SHAHBAG_D();
                      }
                      break;

         case 'd' :
         case 'D' :
                        system (" cls ");
                    fp=fopen("Shahbag mujib B-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SHAHBAG_D();
                      }
                     else
                      {
                         SHAHBAG_D();
                      }
                      break;

         case 'f' :
         case 'F' :
                        system (" cls ");
                    fp=fopen("Shahbag mujib AB-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SHAHBAG_D();
                      }
                     else
                      {
                         SHAHBAG_D();
                      }
                      break;

         case 'h' :
         case 'H' :
                        system (" cls ");
                    fp=fopen("Shahbag mujib O-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SHAHBAG_D();
                      }
                     else
                      {
                         SHAHBAG_D();
                      }
                      break;




         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Shahbag mujib B+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SHAHBAG_D();
                      }
                     else
                      {
                         SHAHBAG_D();
                      }
                      break;



         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Shahbag mujib AB+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SHAHBAG_D();
                      }
                     else
                      {
                         SHAHBAG_D();
                      }
                      break;

         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Shahbag mujib O+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SHAHBAG_D();
                      }
                     else
                      {
                         SHAHBAG_D();
                      }
                      break;




         default :
                   {
                       if (x=='\n')
                     {
                         SHAHBAG_D();
                     }

                     else
                      {
                         system (" cls ");
                         SHAHBAG_BANGOBONDHU_HOSPITAL();


                   }



    }

     }

    }


    void SHAHBAG_BIRDEM_HOSPITAL()
    {

     system (" cls ");
     fflush(stdin);
     FILE *fp;
     char x,y,z;

     printf("==================================\n\n");

     printf(" a. A+  \n"  );
     printf(" b. A-  \n"  );
     printf(" c. B+  \n"  );
     printf(" d. B-  \n"  );
     printf(" e. AB+ \n"  );
     printf(" f. AB- \n"  );
     printf(" g. O+  \n"  );
     printf(" h. O-  \n"  );


     printf("\n==================================\n");
     printf("  wanna go back, press enter \n\n");
     printf("Your choice:");

    scanf("%c",&x);
    fflush(stdin);

    switch(x)
    {

         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Shahbag Birdem A+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SHAHBAG_D();
                      }
                     else
                      {
                         SHAHBAG_D();
                      }
                      break;

         case 'b' :
         case 'B' :
                        system (" cls ");
                    fp=fopen("Shahbag Birdem A-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SHAHBAG_D();
                      }
                     else
                      {
                         SHAHBAG_D();
                      }
                      break;

         case 'e' :
         case 'E' :
                        system (" cls ");
                    fp=fopen("Shahbag Birdem AB+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SHAHBAG_D();
                      }
                     else
                      {
                         SHAHBAG_D();
                      }
                      break;

         case 'f' :
         case 'F' :
                        system (" cls ");
                    fp=fopen("Shahbag Birdem AB-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SHAHBAG_D();
                      }
                     else
                      {
                         SHAHBAG_D();
                      }
                      break;

         case 'g' :
         case 'G' :
                        system (" cls ");
                    fp=fopen("Shahbag Birdem O+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SHAHBAG_D();
                      }
                     else
                      {
                         SHAHBAG_D();
                      }
                      break;



         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Shahbag Birdem B+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SHAHBAG_D();
                      }
                     else
                      {
                         SHAHBAG_D();
                      }
                      break;



         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Shahbag Birdem B-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SHAHBAG_D();
                      }
                     else
                      {
                         SHAHBAG_D();
                      }
                      break;



            case 'h' :
            case 'H' :
                    system (" cls ");
                    fp=fopen("Shahbag Birdem O-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SHAHBAG_D();
                      }
                     else
                      {
                         SHAHBAG_D();
                      }
                      break;


         default :
                   {
                       if (x=='\n')
                     {
                         SHAHBAG_D();
                     }

                     else
                      {
                         system (" cls ");
                         SHAHBAG_BIRDEM_HOSPITAL();
                       }

                   }



    }

     }


    ///MIRPUR



    void MIRPUR_D()
    {
        system (" cls ");
        char x,y;

       printf("\n\n==================================\n");

       printf("\n a. Mirpur Child Hospital  \n");
       printf("\n b. Galaxy Hospital        \n");
       printf("\n c. Islami Bank Hospital   \n");
       printf("\n d. Map                    \n");


       printf("\n===================================\n");
       printf("\n want to go back, press enter\n\n");
       printf(" Your choice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)

       {
                case 'a' :
                case 'A' :
                            printf("\n These Blood groups need in this Hospital. \n What is your Blood Group? \n\n");
                            MIRPUR_CHILD_HOSPITAL();
                            break;

                case 'b' :
                case 'B' :
                            printf("\n These Blood groups need in this Hospital. \n What is your Blood Group? \n\n");
                            MIRPUR_GALAXY_HOSPITAL();
                            break;

                case 'c' :
                case 'C' :
                            printf("\n These Blood groups need in this Hospital. \n What is your Blood Group? \n\n");
                            MIRPUR_ISLAMI_HOSPITAL();
                            break;

                case 'd' :
                case 'D' :
                            system (" cls ");
                            fflush(stdin);
                            FILE *fp;
                            fp=fopen("Mirpur Map.txt","r");

                            if(fp==NULL)
                        {
                            printf("\nFile not found\n");
                        }
                            while((y=getc(fp))!=EOF)
                        {
                            fputchar(y);
                        }
                            fclose(fp);

                            printf("\n\nWant to go back, press any key. \n");

                            scanf("%c",&x);
                            fflush(stdin);
                            if (x=='1')
                        {
                            MIRPUR_D();
                        }
                            else
                        {
                            MIRPUR_D();
                        }

                           break;


                default  :
                          {
                            if(x=='\n')
                            {
                                DONATE_BLOOD();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            MIRPUR_D();
                            }
                          }

    }


    }


    void MIRPUR_CHILD_HOSPITAL()
   {

     system (" cls ");
     fflush(stdin);
     FILE *fp;
     char x,y,z;


     printf("==================================\n\n");

     printf(" a. A+  \n"  );
     printf(" b. A-  \n"  );
     printf(" c. B+  \n"  );
     printf(" d. B-  \n"  );
     printf(" e. AB+ \n"  );
     printf(" f. AB- \n"  );
     printf(" g. O+  \n"  );
     printf(" h. O-  \n"  );


     printf("\n==================================\n");
     printf("  wanna go back, press enter \n\n");
     printf("Your choice:");

    scanf("%c",&x);
    fflush(stdin);

    switch(x)
    {

         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Mirpur Child Hospital A+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MIRPUR_D();
                      }
                     else
                      {
                         MIRPUR_D();
                      }
                      break;

         case 'b' :
         case 'B' :
                        system (" cls ");
                    fp=fopen("Mirpur Child Hospital A-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MIRPUR_D();
                      }
                     else
                      {
                         MIRPUR_D();
                      }
                      break;

         case 'e' :
         case 'E' :
                        system (" cls ");
                    fp=fopen("Mirpur Child Hospital AB+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MIRPUR_D();
                      }
                     else
                      {
                         MIRPUR_D();
                      }
                      break;

         case 'f' :
         case 'F' :
                        system (" cls ");
                    fp=fopen("Mirpur Child Hospital AB-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MIRPUR_D();
                      }
                     else
                      {
                         MIRPUR_D();
                      }
                      break;

         case 'g' :
         case 'G' :
                        system (" cls ");
                    fp=fopen("Mirpur Child Hospital O+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MIRPUR_D();
                      }
                     else
                      {
                         MIRPUR_D();
                      }
                      break;



         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Mirpur Child Hospital B+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MIRPUR_D();
                      }
                     else
                      {
                         MIRPUR_D();
                      }
                      break;



         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Mirpur Child Hospital B-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MIRPUR_D();
                      }
                     else
                      {
                         MIRPUR_D();
                      }
                      break;



              case 'h' :
              case 'H' :
                    system (" cls ");
                    fp=fopen("Mirpur Child Hospital O-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MIRPUR_D();
                      }
                     else
                      {
                         MIRPUR_D();
                      }
                      break;




         default :
                   {
                       if (x=='\n')
                     {
                         MIRPUR_D();
                     }

                     else
                      {
                         system (" cls ");
                         MIRPUR_CHILD_HOSPITAL();
                       }


                   }



    }

     }



    void MIRPUR_GALAXY_HOSPITAL()
    {

     system (" cls ");
     fflush(stdin);
     FILE *fp;
     char x,y,z;

     //printf("\n These Blood groups need in this Hospital. \n");
     //printf(" What is your Blood Group? \n\n");

     printf("==================================\n\n");

     printf(" a. A+  \n"  );
     printf(" b. A-  \n"  );
     printf(" c. B+  \n"  );
     printf(" d. B-  \n"  );
     printf(" e. AB+ \n"  );
     printf(" f. AB- \n"  );
     printf(" g. O+  \n"  );
     printf(" h. O-  \n"  );


     printf("\n==================================\n");
     printf("  wanna go back, press enter \n\n");
     printf("Your choice:");

    scanf("%c",&x);
    fflush(stdin);

    switch(x)
    {

         case 'a' :
         case 'A' :
                        system (" cls ");
                    fp=fopen("Mirpur Galaxy Hospital A+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MIRPUR_D();
                      }
                     else
                      {
                         MIRPUR_D();
                      }
                      break;

         case 'c' :
         case 'C' :
                        system (" cls ");
                    fp=fopen("Mirpur Galaxy Hospital B+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MIRPUR_D();
                      }
                     else
                      {
                         MIRPUR_D();
                      }
                      break;

         case 'e' :
         case 'E' :
                        system (" cls ");
                    fp=fopen("Mirpur Galaxy Hospital AB+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MIRPUR_D();
                      }
                     else
                      {
                         MIRPUR_D();
                      }
                      break;

         case 'g' :
         case 'G' :
                        system (" cls ");
                    fp=fopen("Mirpur Galaxy Hospital O+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MIRPUR_D();
                      }
                     else
                      {
                         MIRPUR_D();
                      }
                      break;




         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Mirpur Galaxy Hospital A-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MIRPUR_D();
                      }
                     else
                      {
                         MIRPUR_D();
                      }
                      break;


         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Mirpur Galaxy Hospital B-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MIRPUR_D();
                      }
                     else
                      {
                         MIRPUR_D();
                      }
                      break;

         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Mirpur Galaxy Hospital AB-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MIRPUR_D();
                      }
                     else
                      {
                         MIRPUR_D();
                      }
                      break;


         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Mirpur Galaxy Hospital O-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MIRPUR_D();
                      }
                     else
                      {
                         MIRPUR_D();
                      }
                      break;



         default :
                   {
                       if (x=='\n')
                     {
                         MIRPUR_D();
                     }

                     else
                      {
                         system (" cls ");
                         MIRPUR_GALAXY_HOSPITAL();
                       }

                   }



    }

     }


    void MIRPUR_ISLAMI_HOSPITAL()
    {

     system (" cls ");
     fflush(stdin);
     FILE *fp;
     char x,y,z;

     //printf("\n These Blood groups need in this Hospital. \n");
    // printf(" What is your Blood Group? \n\n");

     printf("==================================\n\n");

     printf(" a. A+  \n"  );
     printf(" b. A-  \n"  );
     printf(" c. B+  \n"  );
     printf(" d. B-  \n"  );
     printf(" e. AB+ \n"  );
     printf(" f. AB- \n"  );
     printf(" g. O+  \n"  );
     printf(" h. O-  \n"  );


     printf("\n==================================\n");
     printf("  wanna go back, press enter \n\n");
     printf("Your choice:");

    scanf("%c",&x);
    fflush(stdin);

    switch(x)
    {

         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Mirpur Islami Hospital A+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MIRPUR_D();
                      }
                     else
                      {
                         MIRPUR_D();
                      }
                      break;

         case 'b' :
         case 'B' :
                        system (" cls ");
                    fp=fopen("Mirpur Islami Hospital A-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MIRPUR_D();
                      }
                     else
                      {
                         MIRPUR_D();
                      }
                      break;


         case 'd' :
         case 'D' :
                        system (" cls ");
                    fp=fopen("Mirpur Islami Hospital B-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MIRPUR_D();
                      }
                     else
                      {
                         MIRPUR_D();
                      }
                      break;

         case 'f' :
         case 'F' :
                        system (" cls ");
                    fp=fopen("Mirpur Islami Hospital AB-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MIRPUR_D();
                      }
                     else
                      {
                         MIRPUR_D();
                      }
                      break;

         case 'h' :
         case 'H' :
                        system (" cls ");
                    fp=fopen("Mirpur Islami Hospital O-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MIRPUR_D();
                      }
                     else
                      {
                         MIRPUR_D();
                      }
                      break;




         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Mirpur Islami Hospital B+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MIRPUR_D();
                      }
                     else
                      {
                         MIRPUR_D();
                      }
                      break;



         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Mirpur Islami Hospital AB+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MIRPUR_D();
                      }
                     else
                      {
                         MIRPUR_D();
                      }
                      break;


         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Mirpur Islami Hospital O+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MIRPUR_D();
                      }
                     else
                      {
                         MIRPUR_D();
                      }
                      break;




         default :
                   {
                       if (x=='\n')
                     {
                         MIRPUR_D();
                     }

                     else
                      {
                         system (" cls ");
                         MIRPUR_ISLAMI_HOSPITAL();
                       }

                   }



    }

     }


    ///MOTIJHEEL



    void MOTIJHEEL_D()
    {
        system (" cls ");
        char x,y;
      // printf("\n\n In these Hospitals you can Donate your Blood.\n\n");
       printf("\n\n===============================================\n");

       printf("\n a. Islami Bank Hospital                   \n");
       printf("\n b. Pan-Pacific General Hospital           \n");
       printf("\n c. The Barakah General Hospital Limited   \n");
       printf("\n d. Map                                    \n");


       printf("\n================================================\n");
       printf("\n want to go back, press enter\n\n");
       printf(" Your choice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)

       {
                case 'a' :
                case 'A' :
                           printf("\n These Blood groups need in this Hospital. \n What is your Blood Group? \n\n");
                           MOTIJHEEL_ISLAM_HOSPITAL();
                           break;

                case 'b' :
                case 'B' :
                           printf("\n These Blood groups need in this Hospital. \n What is your Blood Group? \n\n");
                           MOTIJHEEL_PEN_HOSPITAL();
                           break;

                case 'c' :
                case 'C' :
                           printf("\n These Blood groups need in this Hospital. \n What is your Blood Group? \n\n");
                           MOTIJHEEL_BARAKAH_HOSPITAL();
                           break;

                case 'd' :
                case 'D' :
                            system (" cls ");
                            fflush(stdin);
                            FILE *fp;
                            fp=fopen("Motijheel Map.txt","r");

                            if(fp==NULL)
                        {
                            printf("\nFile not found\n");
                        }
                            while((y=getc(fp))!=EOF)
                        {
                            fputchar(y);
                        }
                            fclose(fp);

                            printf("\n\nWant to go back, press any key. \n");

                            scanf("%c",&x);
                            fflush(stdin);
                            if (x=='1')
                        {
                            MOTIJHEEL_D();
                        }
                            else
                        {
                            MOTIJHEEL_D();
                        }

                           break;



                default  :
                          {
                            if(x=='\n')
                            {
                                DONATE_BLOOD();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            MOTIJHEEL_D();
                            }
                          }

    }

    }

    void MOTIJHEEL_BARAKAH_HOSPITAL()
   {

     system (" cls ");
     fflush(stdin);
     FILE *fp;
     char x,y,z;

     //printf("\n These Blood groups need in this Hospital. \n");
     //printf(" What is your Blood Group? \n\n");

     printf("==================================\n\n");

     printf(" a. A+  \n"  );
     printf(" b. A-  \n"  );
     printf(" c. B+  \n"  );
     printf(" d. B-  \n"  );
     printf(" e. AB+ \n"  );
     printf(" f. AB- \n"  );
     printf(" g. O+  \n"  );
     printf(" h. O-  \n"  );


     printf("\n==================================\n");
     printf("  wanna go back, press enter \n\n");
     printf("Your choice:");

    scanf("%c",&x);
    fflush(stdin);

    switch(x)
    {

         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Motijheel Barakah A+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MOTIJHEEL_D();
                      }
                     else
                      {
                         MOTIJHEEL_D();
                      }
                      break;

         case 'b' :
         case 'B' :
                        system (" cls ");
                    fp=fopen("Motijheel Barakah A-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MOTIJHEEL_D();
                      }
                     else
                      {
                         MOTIJHEEL_D();
                      }
                      break;

         case 'd' :
         case 'D' :
                        system (" cls ");
                    fp=fopen("Motijheel Barakah B-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MOTIJHEEL_D();
                      }
                     else
                      {
                         MOTIJHEEL_D();
                      }
                      break;

         case 'f' :
         case 'F' :
                        system (" cls ");
                    fp=fopen("Motijheel Barakah AB-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MOTIJHEEL_D();
                      }
                     else
                      {
                         MOTIJHEEL_D();
                      }
                      break;

         case 'h' :
         case 'H' :
                        system (" cls ");
                    fp=fopen("Motijheel Barakah O-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MOTIJHEEL_D();
                      }
                     else
                      {
                         MOTIJHEEL_D();
                      }
                      break;



         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Motijheel Barakah B+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MOTIJHEEL_D();
                      }
                     else
                      {
                         MOTIJHEEL_D();
                      }
                      break;



         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Motijheel Barakah AB+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MOTIJHEEL_D();
                      }
                     else
                      {
                         MOTIJHEEL_D();
                      }
                      break;



         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Motijheel Barakah O+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MOTIJHEEL_D();
                      }
                     else
                      {
                         MOTIJHEEL_D();
                      }
                      break;



         case 'i' :
         case 'I' :
                    EXIT_E();
                    break;



         default :
                   {
                       if (x=='\n')
                     {
                         MOTIJHEEL_D();
                     }

                     else
                      {
                         system (" cls ");
                         MOTIJHEEL_BARAKAH_HOSPITAL();
                       }
                   }



    }

     }

    void MOTIJHEEL_ISLAM_HOSPITAL()
    {

     system (" cls ");
     fflush(stdin);
     FILE *fp;
     char x,y,z;

     //printf("\n These Blood groups need in this Hospital. \n");
     //printf(" What is your Blood Group? \n\n");

     printf("==================================\n\n");

     printf(" a. A+  \n"  );
     printf(" b. A-  \n"  );
     printf(" c. B+  \n"  );
     printf(" d. B-  \n"  );
     printf(" e. AB+ \n"  );
     printf(" f. AB- \n"  );
     printf(" g. O+  \n"  );
     printf(" h. O-  \n"  );


     printf("\n==================================\n");
     printf("  wanna go back, press enter \n\n");
     printf("Your choice:");

    scanf("%c",&x);
    fflush(stdin);

    switch(x)
    {

         case 'a' :
         case 'A' :
                        system (" cls ");
                    fp=fopen("Motijheel Islami A+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MOTIJHEEL_D();
                      }
                     else
                      {
                         MOTIJHEEL_D();
                      }
                      break;

         case 'c' :
         case 'C' :
                        system (" cls ");
                    fp=fopen("Motijheel Islami B+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MOTIJHEEL_D();
                      }
                     else
                      {
                         MOTIJHEEL_D();
                      }
                      break;

         case 'e' :
         case 'E' :
                        system (" cls ");
                    fp=fopen("Motijheel Islami AB+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MOTIJHEEL_D();
                      }
                     else
                      {
                         MOTIJHEEL_D();
                      }
                      break;

         case 'g' :
         case 'G' :
                        system (" cls ");
                    fp=fopen("Motijheel Islami O+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MOTIJHEEL_D();
                      }
                     else
                      {
                         MOTIJHEEL_D();
                      }
                      break;


         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Motijheel Islami A-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MOTIJHEEL_D();
                      }
                     else
                      {
                         MOTIJHEEL_D();
                      }
                      break;




         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Motijheel Islami B-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MOTIJHEEL_D();
                      }
                     else
                      {
                         MOTIJHEEL_D();
                      }
                      break;



         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Motijheel Islami AB-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MOTIJHEEL_D();
                      }
                     else
                      {
                         MOTIJHEEL_D();
                      }
                      break;


         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Motijheel Islami O-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MOTIJHEEL_D();
                      }
                     else
                      {
                         MOTIJHEEL_D();
                      }
                      break;



         default :
                   {
                       if (x=='\n')
                     {
                        MOTIJHEEL_D();
                     }

                     else
                      {
                         system (" cls ");
                         MOTIJHEEL_ISLAM_HOSPITAL();
                       }

                   }



    }

     }

    void MOTIJHEEL_PEN_HOSPITAL()
  {
     system (" cls ");
     fflush(stdin);
     FILE *fp;
     char x,y,z;

     printf("\n These Blood groups need in this Hospital. \n");
     printf(" What is your Blood Group? \n\n");

     printf("==================================\n\n");

     printf(" a. A+  \n"  );
     printf(" b. A-  \n"  );
     printf(" c. B+  \n"  );
     printf(" d. B-  \n"  );
     printf(" e. AB+ \n"  );
     printf(" f. AB- \n"  );
     printf(" g. O+  \n"  );
     printf(" h. O-  \n"  );


     printf("\n==================================\n");
     printf("  wanna go back, press enter \n\n");
     printf("Your choice:");

    scanf("%c",&x);
    fflush(stdin);

    switch(x)
    {

         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Motijheel Pan A+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MOTIJHEEL_D();
                      }
                     else
                      {
                         MOTIJHEEL_D();
                      }
                      break;

         case 'b' :
         case 'B' :
                        system (" cls ");
                    fp=fopen("Motijheel Pan A-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MOTIJHEEL_D();
                      }
                     else
                      {
                         MOTIJHEEL_D();
                      }
                      break;

         case 'e' :
         case 'E' :
                        system (" cls ");
                    fp=fopen("Motijheel Pan AB+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MOTIJHEEL_D();
                      }
                     else
                      {
                         MOTIJHEEL_D();
                      }
                      break;

         case 'f' :
         case 'F' :
                        system (" cls ");
                    fp=fopen("Motijheel Pan AB-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MOTIJHEEL_D();
                      }
                     else
                      {
                         MOTIJHEEL_D();
                      }
                      break;

         case 'g' :
         case 'G' :
                        system (" cls ");
                    fp=fopen("Motijheel Pan O+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MOTIJHEEL_D();
                      }
                     else
                      {
                         MOTIJHEEL_D();
                      }
                      break;



         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Motijheel Pan B+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MOTIJHEEL_D();
                      }
                     else
                      {
                         MOTIJHEEL_D();
                      }
                      break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Motijheel Pan B-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MOTIJHEEL_D();
                      }
                     else
                      {
                         MOTIJHEEL_D();
                      }
                      break;



            case 'h' :
            case 'H' :
                    system (" cls ");
                    fp=fopen("Motijheel Pan O-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MOTIJHEEL_D();
                      }
                     else
                      {
                         MOTIJHEEL_D();
                      }
                      break;




         default :
                   {
                       if (x=='\n')
                     {
                         MOTIJHEEL_D();
                     }

                     else
                      {
                         system (" cls ");
                         MOTIJHEEL_PEN_HOSPITAL();
                       }

                   }



    }

     }


    ///SAVAR


    void SAVAR_D()
    {
        system (" cls ");
        char x,y;
       //printf("\n\n In this Hospitals you can Donate your Blood.\n\n");
       printf("\n\n====================================\n");


       printf("\n a. Anam Medical College & Hospital   \n");
       printf("\n b. Prime Hospital                    \n");
       printf("\n c. Savar General Hospital            \n");
       printf("\n d. Map                               \n");

       printf("\n====================================\n");
       printf("\n want to go back, press enter\n\n");
       printf(" Your choice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)

       {
                case 'a' :
                case 'A' :
                           printf("\n These Blood groups need in this Hospital. \n What is your Blood Group? \n\n");
                           SAVAR_ANAM_HOSPITAL();
                           break;

                case 'b' :
                case 'B' :
                           printf("\n These Blood groups need in this Hospital. \n What is your Blood Group? \n\n");
                           SAVAR_PRIME_HOSPITAL();
                           break;

                case 'c' :
                case 'C' :
                           printf("\n These Blood groups need in this Hospital. \n What is your Blood Group? \n\n");
                           SAVAR_GENERAL_HOSPITAL();
                           break;

                case 'd' :
                case 'D' :
                            system (" cls ");
                            fflush(stdin);
                            FILE *fp;
                            fp=fopen("Savar Map.txt","r");

                            if(fp==NULL)
                        {
                            printf("\nFile not found\n");
                        }
                            while((y=getc(fp))!=EOF)
                        {
                            fputchar(y);
                        }
                            fclose(fp);

                            printf("\n\nWant to go back, press any key. \n");

                            scanf("%c",&x);
                            fflush(stdin);
                            if (x=='1')
                        {
                            SAVAR_D();
                        }
                            else
                        {
                            SAVAR_D();
                        }

                           break;


                default  :
                          {
                            if(x=='\n')
                            {
                                DONATE_BLOOD();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            SAVAR_D();
                            }
                          }

    }

    }

    void SAVAR_ANAM_HOSPITAL()
    {

     system (" cls ");
     fflush(stdin);
     FILE *fp;
     char x,y,z;

    // printf("\n These Blood groups need in this Hospital. \n");
    // printf(" What is your Blood Group? \n\n");

     printf("==================================\n\n");

     printf(" a. A+  \n"  );
     printf(" b. A-  \n"  );
     printf(" c. B+  \n"  );
     printf(" d. B-  \n"  );
     printf(" e. AB+ \n"  );
     printf(" f. AB- \n"  );
     printf(" g. O+  \n"  );
     printf(" h. O-  \n"  );


     printf("\n==================================\n");
     printf("  wanna go back, press enter \n\n");
     printf("Your choice:");

    scanf("%c",&x);
    fflush(stdin);

    switch(x)
    {

         case 'a' :
         case 'A' :
                        system (" cls ");
                    fp=fopen("Savar Anam Hospital A+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SAVAR_D();
                      }
                     else
                      {
                         SAVAR_D();
                      }
                      break;

         case 'c' :
         case 'C' :
                        system (" cls ");
                    fp=fopen("Savar Anam Hospital B+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SAVAR_D();
                      }
                     else
                      {
                         SAVAR_D();
                      }
                      break;

         case 'e' :
         case 'E' :
                        system (" cls ");
                    fp=fopen("Savar Anam Hospital AB+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SAVAR_D();
                      }
                     else
                      {
                         SAVAR_D();
                      }
                      break;

         case 'g' :
         case 'G' :
                        system (" cls ");
                    fp=fopen("Savar Anam Hospital O+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SAVAR_D();
                      }
                     else
                      {
                         SAVAR_D();
                      }
                      break;



         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Savar Anam Hospital A-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SAVAR_D();
                      }
                     else
                      {
                         SAVAR_D();
                      }
                      break;


         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Savar Anam Hospital B-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SAVAR_D();
                      }
                     else
                      {
                         SAVAR_D();
                      }
                      break;



         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Savar Anam Hospital AB-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SAVAR_D();
                      }
                     else
                      {
                         SAVAR_D();
                      }
                      break;


         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Savar Anam Hospital O-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SAVAR_D();
                      }
                     else
                      {
                         SAVAR_D();
                      }
                      break;

         case 'i' :
         case 'I' :
                    EXIT_E();
                    break;



         default :
                   {
                       if (x=='\n')
                     {
                         SAVAR_D();
                     }

                     else
                      {
                         system (" cls ");
                         SAVAR_ANAM_HOSPITAL();
                       }

                   }



    }

     }

    void SAVAR_GENERAL_HOSPITAL()
   {

     system (" cls ");
     fflush(stdin);
     FILE *fp;
     char x,y,z;

    // printf("\n These Blood groups need in this Hospital. \n");
    // printf(" What is your Blood Group? \n\n");

     printf("==================================\n\n");

     printf(" a. A+  \n"  );
     printf(" b. A-  \n"  );
     printf(" c. B+  \n"  );
     printf(" d. B-  \n"  );
     printf(" e. AB+ \n"  );
     printf(" f. AB- \n"  );
     printf(" g. O+  \n"  );
     printf(" h. O-  \n"  );


     printf("\n==================================\n");
     printf("  wanna go back, press enter \n\n");
     printf("Your choice:");

    scanf("%c",&x);
    fflush(stdin);

    switch(x)
    {

         case 'a' :
         case 'A' :
                        system (" cls ");
                    fp=fopen("Savar General Hospital A+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SAVAR_D();
                      }
                     else
                      {
                         SAVAR_D();
                      }
                      break;

         case 'c' :
         case 'C' :
                        system (" cls ");
                    fp=fopen("Savar General Hospital B+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SAVAR_D();
                      }
                     else
                      {
                         SAVAR_D();
                      }
                      break;

         case 'e' :
         case 'E' :
                        system (" cls ");
                    fp=fopen("Savar General Hospital AB+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SAVAR_D();
                      }
                     else
                      {
                         SAVAR_D();
                      }
                      break;

         case 'g' :
         case 'G' :
                        system (" cls ");
                    fp=fopen("Savar General Hospital O+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SAVAR_D();
                      }
                     else
                      {
                         SAVAR_D();
                      }
                      break;



         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Savar General Hospital A-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SAVAR_D();
                      }
                     else
                      {
                         SAVAR_D();
                      }
                      break;


         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Savar General Hospital B-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SAVAR_D();
                      }
                     else
                      {
                         SAVAR_D();
                      }
                      break;



         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Savar General Hospital AB-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SAVAR_D();
                      }
                     else
                      {
                         SAVAR_D();
                      }
                      break;


         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Savar General Hospital O-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SAVAR_D();
                      }
                     else
                      {
                         SAVAR_D();
                      }
                      break;




         default :
                   {
                       if (x=='\n')
                     {
                         SAVAR_D();
                     }

                     else
                      {
                         system (" cls ");
                         SAVAR_GENERAL_HOSPITAL();
                       }

                   }



    }

     }


    void SAVAR_PRIME_HOSPITAL()
  {

     system (" cls ");
     fflush(stdin);
     FILE *fp;
     char x,y,z;

   //  printf("\n These Blood groups need in this Hospital. \n");
   //  printf(" What is your Blood Group? \n\n");

     printf("==================================\n\n");

     printf(" a. A+  \n"  );
     printf(" b. A-  \n"  );
     printf(" c. B+  \n"  );
     printf(" d. B-  \n"  );
     printf(" e. AB+ \n"  );
     printf(" f. AB- \n"  );
     printf(" g. O+  \n"  );
     printf(" h. O-  \n"  );


     printf("\n==================================\n");
     printf("  wanna go back, press enter \n\n");
     printf("Your choice:");

    scanf("%c",&x);
    fflush(stdin);

    switch(x)
    {

         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Savar Prime Hospital A+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SAVAR_D();
                      }
                     else
                      {
                         SAVAR_D();
                      }
                      break;

         case 'b' :
         case 'B' :
                        system (" cls ");
                    fp=fopen("Savar Prime Hospital A-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SAVAR_D();
                      }
                     else
                      {
                         SAVAR_D();
                      }
                      break;

         case 'd' :
         case 'D' :
                        system (" cls ");
                    fp=fopen("Savar Prime Hospital B-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SAVAR_D();
                      }
                     else
                      {
                         SAVAR_D();
                      }
                      break;

         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Savar Prime Hospital AB-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SAVAR_D();
                      }
                     else
                      {
                         SAVAR_D();
                      }
                      break;

         case 'h' :
         case 'H' :
                        system (" cls ");
                    fp=fopen("Savar Prime Hospital O-.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SAVAR_D();
                      }
                     else
                      {
                         SAVAR_D();
                      }
                      break;




         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Savar Prime Hospital B+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SAVAR_D();
                      }
                     else
                      {
                         SAVAR_D();
                      }
                      break;


         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Savar Prime Hospital AB+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SAVAR_D();
                      }

                     else
                      {
                         SAVAR_D();
                      }
                      break;


         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Savar Prime Hospital O+.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SAVAR_D();
                      }

                     else
                      {
                         SAVAR_D();
                      }
                      break;



         default :
                   {
                       if (x=='\n')
                     {
                         SAVAR_D();
                     }

                     else
                      {
                         system (" cls ");
                         SAVAR_PRIME_HOSPITAL();
                       }
                   }



    }

     }







//hospitals


void NEED_BLOOD_X()
{


       system (" cls ");
       char x;

       printf("\n\n==================================\n\n");

       printf(" a. Uttara     \n");
       printf(" b. Basundhara \n");
       printf(" c. Dhanmondi  \n");
       printf(" d. Gulshan    \n");
       printf(" e. Mirpur     \n");
       printf(" f. Motijheel  \n");
       printf(" g. Shahbag    \n");
       printf(" h. Savar      \n");


       printf("\n=============================\n");
       printf("  wanna go back, press enter \n\n");
       printf(" Your choice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)
       {

        case 'a' :
        case 'A' :

                   system("cls");
                   UTTARA_N();
                   break;


        case 'b' :
        case 'B' :
                   system("cls");
                   BASUNDHARA_N();
                   break;

        case 'c' :
        case 'C' :
                   system("cls");
                   DHANMONDI_N();
                   break;

        case 'd' :
        case 'D' :
                   system("cls");
                   GULSHAN_N();
                   break;

        case 'e' :
        case 'E' :
                   system("cls");
                   MIRPUR_N();
                   break;

        case 'f' :
        case 'F' :
                   system("cls");
                   MOTIJHEEL_N();
                   break;

        case 'g' :
        case 'G' :
                   system("cls");
                   SHAHBAG_N();
                   break;

        case 'h' :
        case 'H' :
                   system("cls");
                   SAVAR_N();
                   break;



         default :
                   {
                            if(x=='\n')
                            {
                                ADMIN_MENU();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            NEED_BLOOD_X();
                            }
                          }



       }

}



 void NEED_BLOOD()
 {

       system("cls");
       char x;
       //printf("\n\n Which area do you have need the Blood?\n\n");
       printf("\n\n==================================\n\n");

       printf(" a. Uttara     \n");
       printf(" b. Basundhara \n");
       printf(" c. Dhanmondi  \n");
       printf(" d. Gulshan    \n");
       printf(" e. Mirpur     \n");
       printf(" f. Motijheel  \n");
       printf(" g. Shahbag    \n");
       printf(" h. Savar      \n");


       printf("\n=============================\n");
       printf("  wanna go back, press enter \n\n");
       printf(" Your choice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)
       {

        case 'a' :
        case 'A' :
                   system("cls");
                   printf("\n Which Blood group do you have need?\n");
                   UTTARA_N();
                   break;

        case 'b' :
        case 'B' :
                   system("cls");
                   printf("\n Which Blood group do you have need?\n");
                   BASUNDHARA_N();
                   break;

        case 'c' :
        case 'C' :
                   system("cls");
                   printf("\n Which Blood group do you have need?\n");
                   DHANMONDI_N();
                   break;

        case 'd' :
        case 'D' :
                   system("cls");
                   printf("\n Which Blood group do you have need?\n");
                   GULSHAN_N();
                   break;

        case 'e' :
        case 'E' :
                   system("cls");
                   printf("\n Which Blood group do you have need?\n");
                   MIRPUR_N();
                   break;

        case 'f' :
        case 'F' :
                   system("cls");
                   printf("\n Which Blood group do you have need?\n");
                   MOTIJHEEL_N();
                   break;

        case 'g' :
        case 'G' :
                   system("cls");
                   printf("\n Which Blood group do you have need?\n");
                   SHAHBAG_N();
                   break;

        case 'h' :
        case 'H' :
                   system("cls");
                   printf("\n Which Blood group do you have need?\n");
                   SAVAR_N();
                   break;



         default :
                   {
                            if(x=='\n')
                            {
                                USER();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            NEED_BLOOD();
                            }
                          }



       }
 }


     void UTTARA_N()
  {

     system (" cls ");
     fflush(stdin);
     FILE *fp;
     char x,y,z;

     //printf("\n\n Which Blood Group do you have need? \n");

     printf("\n==================================\n\n");

     printf(" a. A+  \n"  );
     printf(" b. A-  \n"  );
     printf(" c. B+  \n"  );
     printf(" d. B-  \n"  );
     printf(" e. AB+ \n"  );
     printf(" f. AB- \n"  );
     printf(" g. O+  \n"  );
     printf(" h. O-  \n"  );


     printf("\n==================================\n");
     printf("  wanna go back press enter \n\n");
     printf("Your choice:");

    scanf("%c",&x);
    fflush(stdin);
    switch(x)
    {

         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Uttara A positive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\n\n Want to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         UTTARA_N();
                      }
                     else
                      {
                         UTTARA_N();
                      }
                      break;

         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Uttara A negetive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         UTTARA_N();
                      }
                     else
                      {
                         UTTARA_N();
                      }
                      break;

         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Uttara B positive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         UTTARA_N();
                      }
                     else
                      {
                         UTTARA_N();
                      }
                      break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Uttara B negetive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         UTTARA_N();
                      }
                     else
                      {
                         UTTARA_N();
                      }
                      break;

         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Uttara AB positive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         UTTARA_N();
                      }
                     else
                      {
                         UTTARA_N();
                      }
                      break;

         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Uttara AB negetive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         UTTARA_N();
                      }
                     else
                      {
                         UTTARA_N();
                      }
                      break;

         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Uttara O positive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         UTTARA_N();
                      }
                     else
                      {
                         UTTARA_N();
                      }
                      break;

         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Uttara O negetive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         UTTARA_N();
                      }
                     else
                      {
                         UTTARA_N();
                      }
                      break;

         default :
                   {
                      if(x=='\n')
                      {
                          NEED_BLOOD();
                      }
                      else
                      {

                      system (" cls ");
                      UTTARA_N();

                      }

                   }


    }



  }







 void BASUNDHARA_N()
  {

    system (" cls ");
     fflush(stdin);
     FILE *fp;
     char x,y,z;

     //printf("\n\n Which Blood Group do you have need? \n");

     printf("\n==================================\n\n");

     printf(" a. A+  \n"  );
     printf(" b. A-  \n"  );
     printf(" c. B+  \n"  );
     printf(" d. B-  \n"  );
     printf(" e. AB+ \n"  );
     printf(" f. AB- \n"  );
     printf(" g. O+  \n"  );
     printf(" h. O-  \n"  );


     printf("\n==================================\n");
     printf("  wanna go back press enter \n\n");
     printf("Your choice:");

     scanf("%c",&x);
     fflush(stdin);
     switch(x)
    {

         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Basundhara A positive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\n\n\n\n\n\n\n\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         BASUNDHARA_N();
                      }
                     else
                      {
                         BASUNDHARA_N();
                      }
                      break;

         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Basundhara A negetive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\n\n\n\n\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         BASUNDHARA_N();
                      }
                     else
                      {
                         BASUNDHARA_N();
                      }
                      break;

         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Basundhara B positive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\n\n\n\n\n\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         BASUNDHARA_N();
                      }
                     else
                      {
                         BASUNDHARA_N();
                      }
                      break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Basundhara B negetive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\n\n\n\n\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         BASUNDHARA_N();
                      }
                     else
                      {
                         BASUNDHARA_N();
                      }
                      break;

         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Basundhara AB positive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\n\n\n\n\n\n\n\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         BASUNDHARA_N();
                      }
                     else
                      {
                         BASUNDHARA_N();
                      }
                      break;

         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Basundhara AB negetive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\n\n\n\n\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         BASUNDHARA_N();
                      }
                     else
                      {
                         BASUNDHARA_N();
                      }
                      break;

         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Basundhara O Positive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\n\n\n\n\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         BASUNDHARA_N();
                      }
                     else
                      {
                         BASUNDHARA_N();
                      }
                      break;

         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Basundhara O negetive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\n\n\n\n\n\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         BASUNDHARA_N();
                      }
                     else
                      {
                         BASUNDHARA_N();
                      }
                      break;



         default :
                   {
                      if(x=='\n')
                      {
                          NEED_BLOOD();
                      }
                      else
                      {

                      system (" cls ");
                      BASUNDHARA_N();

                      }

                   }


    }



  }


 void DHANMONDI_N()
  {

     system (" cls ");
     fflush(stdin);
     FILE *fp;
     char x,y,z;

 //   printf("\n\n Which Blood Group do you have need? \n");

     printf("\n==================================\n\n");

     printf(" a. A+  \n"  );
     printf(" b. A-  \n"  );
     printf(" c. B+  \n"  );
     printf(" d. B-  \n"  );
     printf(" e. AB+ \n"  );
     printf(" f. AB- \n"  );
     printf(" g. O+  \n"  );
     printf(" h. O-  \n"  );


     printf("\n==================================\n");
     printf("  wanna go back press enter \n\n");
     printf("Your choice:");

    scanf("%c",&x);
    fflush(stdin);
    switch(x)
    {

         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Dhanmondi A Positive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         DHANMONDI_N();
                      }
                     else
                      {
                         DHANMONDI_N();
                      }
                      break;

         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Dhanmondi A negetive Donor.txt","r");
                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         DHANMONDI_N();
                      }
                     else
                      {
                         DHANMONDI_N();
                      }
                      break;

         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Dhanmondi B Positive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         DHANMONDI_N();
                      }
                     else
                      {
                         DHANMONDI_N();
                      }
                      break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Dhanmondi B negetive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         DHANMONDI_N();
                      }
                     else
                      {
                         DHANMONDI_N();
                      }
                      break;

         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Dhanmondi AB Positive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         DHANMONDI_N();
                      }
                     else
                      {
                         DHANMONDI_N();
                      }
                      break;

         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Dhanmondi AB negetive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         DHANMONDI_N();
                      }
                     else
                      {
                         DHANMONDI_N();
                      }
                      break;

         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Dhanmondi O Positive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         DHANMONDI_N();
                      }
                     else
                      {
                         DHANMONDI_N();
                      }
                      break;

         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Dhanmondi O negetive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         DHANMONDI_N();
                      }
                     else
                      {
                         DHANMONDI_N();
                      }
                      break;



         default :
                   {
                      if(x=='\n')
                      {
                          NEED_BLOOD();
                      }
                      else
                      {

                      system (" cls ");
                      DHANMONDI_N();

                      }

                   }


    }



  }



 void GULSHAN_N()
 {
     system (" cls ");
     fflush(stdin);
     FILE *fp;
     char x,y,z;

    // printf("\n\n Which Blood Group do you have need? \n");

     printf("\n==================================\n\n");

     printf(" a. A+  \n"  );
     printf(" b. A-  \n"  );
     printf(" c. B+  \n"  );
     printf(" d. B-  \n"  );
     printf(" e. AB+ \n"  );
     printf(" f. AB- \n"  );
     printf(" g. O+  \n"  );
     printf(" h. O-  \n"  );


     printf("\n==================================\n");
     printf("  wanna go back press enter \n\n");
     printf("Your choice:");

    scanf("%c",&x);
    fflush(stdin);
     switch(x)
      {

         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Gulshan A Positive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         GULSHAN_N();
                      }
                     else
                      {
                         DHANMONDI_N();
                      }
                      break;

         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Gulshan A negetive Donor.txt","r");
                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         GULSHAN_N();
                      }
                     else
                      {
                         GULSHAN_N();
                      }
                      break;

         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Gulshan B Positive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         GULSHAN_N();
                      }
                     else
                      {
                         GULSHAN_N();
                      }
                      break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Gulshan B negetive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         GULSHAN_N();
                      }
                     else
                      {
                         GULSHAN_N();
                      }
                      break;

         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Gulshan AB Positive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         GULSHAN_N();
                      }
                     else
                      {
                         GULSHAN_N();
                      }
                      break;

         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Gulshan AB negetive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         GULSHAN_N();
                      }
                     else
                      {
                         GULSHAN_N();
                      }
                      break;

         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Gulshan O Positive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         GULSHAN_N();
                      }
                     else
                      {
                         GULSHAN_N();
                      }
                      break;

         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Gulshan O negetive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         GULSHAN_N();
                      }
                     else
                      {
                         GULSHAN_N();
                      }
                      break;


         default :
                   {
                      if(x=='\n')
                      {
                          NEED_BLOOD();
                      }
                      else
                      {
                      system (" cls ");
                      GULSHAN_N();

                      }

                   }




    }



 }



 void MIRPUR_N()
  {

    system (" cls ");
     fflush(stdin);
     FILE *fp;
     char x,y,z;

    // printf("\n\n Which Blood Group do you have need? \n");

     printf("\n==================================\n\n");

     printf(" a. A+  \n"  );
     printf(" b. A-  \n"  );
     printf(" c. B+  \n"  );
     printf(" d. B-  \n"  );
     printf(" e. AB+ \n"  );
     printf(" f. AB- \n"  );
     printf(" g. O+  \n"  );
     printf(" h. O-  \n"  );


     printf("\n==================================\n");
     printf("  wanna go back press enter \n\n");
     printf("Your choice:");

    scanf("%c",&x);
    fflush(stdin);
    switch(x)
    {

         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Mirpur A Positive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MIRPUR_N();
                      }
                     else
                      {
                         MIRPUR_N();
                      }
                      break;

         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Mirpur A negetive Donor.txt","r");
                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MIRPUR_N();
                      }
                     else
                      {
                         MIRPUR_N();
                      }
                      break;

         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Mirpur B Positive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MIRPUR_N();
                      }
                     else
                      {
                         MIRPUR_N();
                      }
                      break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Mirpur B negetive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MIRPUR_N();
                      }
                     else
                      {
                         MIRPUR_N();
                      }
                      break;

         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Mirpur AB Positive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MIRPUR_N();
                      }
                     else
                      {
                         MIRPUR_N();
                      }
                      break;

         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Mirpur AB negetive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MIRPUR_N();
                      }
                     else
                      {
                         MIRPUR_N();
                      }
                      break;

         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Mirpur O Positive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MIRPUR_N();
                      }
                     else
                      {
                         MIRPUR_N();
                      }
                      break;

         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Mirpur O negetive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MIRPUR_N();
                      }
                     else
                      {
                         MIRPUR_N();
                      }
                      break;


         default :
                   {
                      if(x=='\n')
                      {
                          NEED_BLOOD();
                      }
                      else
                      {

                      system (" cls ");
                      MIRPUR_N();

                      }

                   }



    }



  }


 void MOTIJHEEL_N()
  {

    system (" cls ");
     fflush(stdin);
     FILE *fp;
     char x,y,z;

    // printf("\n\n Which Blood Group do you have need? \n");

     printf("\n==================================\n\n");

     printf(" a. A+  \n"  );
     printf(" b. A-  \n"  );
     printf(" c. B+  \n"  );
     printf(" d. B-  \n"  );
     printf(" e. AB+ \n"  );
     printf(" f. AB- \n"  );
     printf(" g. O+  \n"  );
     printf(" h. O-  \n"  );


     printf("\n==================================\n");
     printf("  wanna go back press enter \n\n");
     printf("Your choice:");

    scanf("%c",&x);
    fflush(stdin);
    switch(x)
    {

         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Motijheel A Positive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MOTIJHEEL_N();
                      }
                     else
                      {
                         MOTIJHEEL_N();
                      }
                      break;

         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Motijheel A negetive Donor.txt","r");
                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MOTIJHEEL_N();
                      }
                     else
                      {
                         MOTIJHEEL_N();
                      }
                      break;

         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Motijheel B Positive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MOTIJHEEL_N();
                      }
                     else
                      {
                         MOTIJHEEL_N();
                      }
                      break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Motijheel B negetive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MOTIJHEEL_N();
                      }
                     else
                      {
                         MOTIJHEEL_N();
                      }
                      break;

         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Motijheel AB Positive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MOTIJHEEL_N();
                      }
                     else
                      {
                         MOTIJHEEL_N();
                      }
                      break;

         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Motijheel AB negetive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MOTIJHEEL_N();
                      }
                     else
                      {
                         MOTIJHEEL_N();
                      }
                      break;

         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Motijheel O Positive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MOTIJHEEL_N();
                      }
                     else
                      {
                         MOTIJHEEL_N();
                      }
                      break;

         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Motijheel O negetive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         MOTIJHEEL_N();
                      }
                     else
                      {
                         MOTIJHEEL_N();
                      }
                      break;


         default :
                   {
                      if(x=='\n')
                      {
                          NEED_BLOOD();
                      }
                      else
                      {

                      system (" cls ");
                      MOTIJHEEL_N();

                      }

                   }


    }



  }




 void SHAHBAG_N()
  {

     system (" cls ");
     fflush(stdin);
     FILE *fp;
     char x,y,z;

   //  printf("\n\n Which Blood Group do you have need? \n");

     printf("\n==================================\n\n");

     printf(" a. A+  \n"  );
     printf(" b. A-  \n"  );
     printf(" c. B+  \n"  );
     printf(" d. B-  \n"  );
     printf(" e. AB+ \n"  );
     printf(" f. AB- \n"  );
     printf(" g. O+  \n"  );
     printf(" h. O-  \n"  );


     printf("\n==================================\n");
     printf("  wanna go back press enter \n\n");
     printf("Your choice:");

    scanf("%c",&x);
    fflush(stdin);
    switch(x)
    {

         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Shahbag A Positive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SHAHBAG_N();
                      }
                     else
                      {
                         SHAHBAG_N();
                      }
                      break;

         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Shahbag A negetive Donor.txt","r");
                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SHAHBAG_N();
                      }
                     else
                      {
                         SHAHBAG_N();
                      }
                      break;

         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Shahbag B Positive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SHAHBAG_N();
                      }
                     else
                      {
                         SHAHBAG_N();
                      }
                      break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Shahbag B negetive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SHAHBAG_N();
                      }
                     else
                      {
                         SHAHBAG_N();
                      }
                      break;

         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Shahbag AB Positive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SHAHBAG_N();
                      }
                     else
                      {
                         SHAHBAG_N();
                      }
                      break;

         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Shahbag AB negetive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SHAHBAG_N();
                      }
                     else
                      {
                         SHAHBAG_N();
                      }
                      break;

         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Shahbag O Positive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SHAHBAG_N();
                      }
                     else
                      {
                         SHAHBAG_N();
                      }
                      break;

         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Shahbag O negetive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                        SHAHBAG_N();
                      }
                     else
                      {
                        SHAHBAG_N();
                      }
                      break;


         default :
                   {
                      if(x=='\n')
                      {
                          NEED_BLOOD();
                      }
                      else
                      {

                      system (" cls ");
                      SHAHBAG_N();

                      }

                   }



    }



  }


 void SAVAR_N()
  {

     system (" cls ");
     fflush(stdin);
     FILE *fp;
     char x,y,z;

     //printf("\n\n Which Blood Group do you have need? \n");

     printf("\n==================================\n\n");

     printf(" a. A+  \n"  );
     printf(" b. A-  \n"  );
     printf(" c. B+  \n"  );
     printf(" d. B-  \n"  );
     printf(" e. AB+ \n"  );
     printf(" f. AB- \n"  );
     printf(" g. O+  \n"  );
     printf(" h. O-  \n"  );


     printf("\n==================================\n");
     printf("  wanna go back press enter \n\n");
     printf("Your choice:");

    scanf("%c",&x);
    fflush(stdin);
    switch(x)
    {

         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Savar A Positive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SAVAR_N();
                      }
                     else
                      {
                         SAVAR_N();
                      }
                      break;

         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Savar A negetive Donor.txt","r");
                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SAVAR_N();
                      }
                     else
                      {
                         SAVAR_N();
                      }
                      break;

         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Savar B Positive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SAVAR_N();
                      }
                     else
                      {
                         SAVAR_N();
                      }
                      break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Savar B negetive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SAVAR_N();
                      }
                     else
                      {
                         SAVAR_N();
                      }
                      break;

         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Savar AB Positive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SAVAR_N();
                      }
                     else
                      {
                         SAVAR_N();
                      }
                      break;

         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Savar AB negetive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SAVAR_N();
                      }
                     else
                      {
                         SAVAR_N();
                      }
                      break;

         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Savar O Positive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                         SAVAR_N();
                      }
                     else
                      {
                         SAVAR_N();
                      }
                      break;

         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Savar O negetive Donor.txt","r");

                    if(fp==NULL)
                   {
                       printf("\nFile not found\n");
                   }
                    while((y=getc(fp))!=EOF)
                   {
                       fputchar(y);
                   }
                       fclose(fp);

                       printf("\n\nWant to go back, press any key. \n");

                       scanf("%c",&x);
                       fflush(stdin);
                       if (x=='1')
                      {
                        SAVAR_N();
                      }
                     else
                      {
                        SAVAR_N();
                      }
                      break;


         default :
                  {
                      if(x=='\n')
                      {
                          NEED_BLOOD();
                      }
                      else
                      {

                      system (" cls ");
                      SAVAR_N();

                      }

                   }



    }



  }




  void USEFULNESS()
  {

       system (" cls ");
       printf("\n\n==========================================================================\n\n");

       printf(" a. The Joy of Saving Human Lives :\n\n");

       printf("    It is such a wonderful feeling being able to help doctors save human lives.\n");
       printf("    There are no perfect substitutes for human blood. The blood you donate \n");
       printf("    is divided into various components according to the needs of patients.\n");
       printf("    Each component can be used by different recipients for various purposes.\n");
       printf("    Many newborn babies may benefit from a single blood donor as their \n");
       printf("    blood requirements are smaller. Every time you donate blood, you can \n");
       printf("    help up to 3 or 4 individual recipients. Be a hero by donating blood.\n\n\n");


       printf(" b. Reduces Risk of Heart Disease :  \n\n");

       printf("    Regular blood donations help to keep the levels of iron in the body in \n");
       printf("    check, especially in males. This has shown to reduce heart disease. \n");
       printf("    Though iron is an essential element for the proper functioning of the \n");
       printf("    body, excessive iron build up can result in excessive oxidative damage. \n");
       printf("    Oxidative damage is the major culprit implicated in accelerated ageing, \n");
       printf("    heart attacks, strokes etc.\n\n\n");


       printf(" c. Reduces the Risk of Cancer : \n\n");

       printf("    High levels of iron have been implicated in cancer. Theoretically, \n");
       printf("    donating blood frequently will reduce the risk of cancers. More research \n");
       printf("    is going on to find strong evidence on this one. However, the old myth \n");
       printf("    that blood donations may lead to cancer has been put to the grave.\n\n\n");


       printf(" d. Weight loss : \n\n");

       printf("    Regular blood donation reduces the weight of the donors.This is helpful\n");
       printf("    to those who are obese and are at higher risk of cardiovascular diseases \n");
       printf("    and other health disorders. However, the blood donation should not be \n");
       printf("    very frequent and you may consult your doctor before donating blood \n");
       printf("    to avoid any health issues.\n\n\n");



       printf(" e. New blood cells :  \n\n");

       printf("    After donating blood, the body works to replenish the blood loss.This \n");
       printf("    stimulates the production of new blood cells and in turn helps \n");
       printf("    in maintaining good health.\n\n");




       printf("==========================================================================\n\n");
       printf("Press any key to continue");
       getch();
       USER();
      // EXIT_E();

       }


  void BEFORE_DONATION()
  {

       system (" cls ");
       printf("\n\n==========================================================================\n\n");

       printf(" a. Maintain a healthy iron level in your diet by eating iron rich foods,\n");
       printf("    such as red meat, fish, poultry, beans, spinach, iron-fortified \n");
       printf("    cereals and raisins.\n\n");
       printf(" b. Drink an extra 16 oz. of water or nonalcoholic fluids before the donation.\n\n");
       printf(" c. Eat a healthy meal before your donation. Avoid fatty foods,such as \n");
       printf("    hamburgers, fries or ice cream before donating.(Fatty foods can \n");
       printf("    affect the tests we do on your blood.If there is too much fat in your \n");
       printf("    blood, your donation cannot be tested forinfectious diseases and\n");
       printf("    the blood will not be used for transfusion.)  \n\n");
       printf(" d. If you are a platelet donor, remember that your system must be free of \n");
       printf("    aspirin for two days prior to donation.\n\n");
       printf(" e.  Get a good night's sleep. \n\n");
       printf(" f. Remember to bring your donor card, driver's license \n");
       printf("    or two other forms of ID. \n\n");

       printf("==========================================================================\n\n");
       printf("Press any key to continue");
       getch();
       USER();
      // EXIT_E();


       }



    void DURING_DONATION()

    {
       system (" cls ");
       printf("\n\n==========================================================================\n\n");

       printf(" a. Wear clothing with sleeves that can be raised above the elbow. \n\n");
       printf(" b. Let the person taking your blood know if you have a preferred arm and show \n");
       printf("    them any good veins that have been used successfully in the past \n");
       printf("    to draw blood.\n\n");
       printf(" c. Relax, listen to music, talk to other donors or read during \n");
       printf("    the donation process. \n\n");
       printf(" d. Take the time to enjoy a snack and a drink in the refreshments \n");
       printf("    area immediately after donating. \n\n");

       printf("==========================================================================\n\n");
       printf("Press any key to continue");
       getch();
       USER();
       //EXIT_E();


       }



   void AFTER_DONATION()

    {
       system (" cls ");
       printf("\n\n===================================================================\n\n");

       printf(" a. Drink an extra four (8 ounce) glasses of liquids and avoid \n");
       printf("    alcohol over the next 24 hours.\n\n");
       printf(" b. Remove the wrap bandage (if you had one put on your arm) \n");
       printf("    within the next hour.\n\n");
       printf(" c. Keep the strip bandage on for the next several hours.\n\n");
       printf(" d. To avoid a skin rash, clean the area around the strip bandage \n");
       printf("    with soap and water.\n\n");
       printf(" e. Do not do any heavy lifting or vigorous exercise for the rest of the day.\n\n");
       printf(" f. If the needle site starts to bleed, apply pressure to it and raise your\n");
       printf("    arm straight up for about 5-10 minutes or until bleeding stops.\n\n");
       printf(" g. If you experience dizziness or lightheadedness after donation, \n");
       printf("    stop what you are doing and sit down or lie down until you feel better.\n");
       printf("    Avoid performingany activity where fainting may lead to injury \n");
       printf("    for at least 24 hours.\n\n");

       printf("===============================================================================\n\n");
       printf("Press any key to continue");
       getch();
       USER();
       EXIT_E();

    }

       void TAKING_BLOOD()
    {
       system (" cls ");
       printf("\n\n===============================================================================\n\n");

       printf(" a. The donor is asked to complete a questionnaire detailing any history of \n");
       printf("    infectious diseases and other medical issues before they are allowed\n");
       printf("    to donate blood for transfusion.\n\n");

       printf(" b. The donor's hemoglobin level is checked. \n\n");

       printf(" c. Once collected, the blood is examined and screened for possible infectious \n");
       printf("    agents such as HIV and hepatitis.\n\n");

       printf(" d. The blood from the donor is cross matched with the patient's blood sample  \n");
       printf("    to check it is compatible.  Blood group is determined by the antigen  \n");
       printf("    profile of an individuals’ red blood cells.\n\n");

       printf(" e. The blood is transfused through tubing that is connected to a needle or \n");
       printf("    catheter supplying the vein. \n\n");

       printf(" e. The amount of blood transfused depends on the individual patient’s needs. \n\n");

       printf(" f. During blood transfusion, vital signs such as temperature, heart rate, \n");
       printf("    and blood pressure are carefully monitored\n\n");

       printf(" g. Some patients may get a sudden fever during or within 24 hours of the \n");
       printf("    transfusion, which may be relieved with acetaminophen or paracetamol. \n");
       printf("    This fever is a common reaction to the white blood cells present in \n");
       printf("    donated blood.\n\n");

       printf("===============================================================================\n");
       printf("Press any key to continue");
       getch();
       USER();
       //EXIT_E();

       }





int fun(int x,int y)  ///recursive function

{
    if(x==y)
    {
        a=a+1;
        return 1;
    }
    else if(x<y)
    {
        a=a+1;
        fun(x+1,y);
    }
    else
    {
        a=a+1;
        fun(x-1,y);

    }
   // EXIT_E();

}


int QUIZ()
{

    char x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,y;


    ///1
    system (" cls ");
    printf("\n\n");
    printf(" 1. Name the blood groups that are commonly termed 'Universal Donor' \n");
    printf("    and 'Universal Receiver'.\n\n");
    printf("\n a. O  ; AB  \n");
    printf("\n b. O- ; AB- \n");
    printf("\n c. O+ ; AB- \n");
    printf("\n d. O+ ; AB+ \n");
    printf("               \n");

    printf("\n");
    printf(" your choice : ");
    scanf("%c",&x1);
    //cin>>x1;          /// scanf
    fflush(stdin);
    x1=tolower(x1);  /// A to smaller a
    printf("\n");
    y='d';
    fun(x1,y);
    if(a==1)
    {
            system (" cls ");
            printf("\n\n Correct answer. \n\n\n");
    }

    else
    {
            system (" cls ");
            printf("\n\n wrong answer. \n\n correct answer is %c. O+ ; AB+ \n\n\n",y);
    }

 ///2.

    printf("\n\n");
    printf(" 2. Can a diabetic donate blood? \n\n");

    printf("\n a. Yes   \n");
    printf("\n b. No    \n");
    printf("\n c. Yes, if not dependent on insulin injections \n");

    printf("\n");
    printf("\n your choice : ");
    scanf("%c",&x2);
   // cin>>x2;
    fflush(stdin);
    y=tolower(y);
    printf("\n");
    y='c';
    a=0;
    fun(x2,y);
    if(a==1)
    {
            system (" cls ");
            printf("\n\n Correct answer. \n\n\n");
    }

    else
    {
            system (" cls ");
            printf("\n\n wrong answer.\n\n correct answer is %c. Yes, if not dependent on insulin injections \n\n\n",y);
    }


///3

    printf("\n\n");
    printf(" 3. How much blood is given during a blood donation?\n\n");

    printf("\n a. about one cup \n");
    printf("\n b. about one pint \n");
    printf("\n c. about one quart \n");
    printf("\n d. about two quarts \n");

    printf("\n\n Your choice: ");
    scanf("%c",&x3);
    //cin>>x3;
    fflush(stdin);
    x3=tolower(x3);
    printf("\n");
    y='b';
    a=0;
    fun(x3,y);
    if(a==1)
    {
            system (" cls ");
            printf("\n\n Correct answer. \n\n\n");
    }

    else
    {
            system (" cls ");
            printf("\n\n wrong answer.\n\n correct answer is %c. about one pint \n\n\n",y);
    }



    ///4

    printf("\n\n");
    printf(" 4. How long do you have to wait after donating whole blood \n");
    printf("    before donating again? \n\n");

    printf("\n a. 4 weeks \n");
    printf("\n b. 6 weeks \n");
    printf("\n c. 8 weeks \n");
    printf("\n d. 12 weeks \n");

    printf("\n\n Your choice: ");
    scanf("%c",&x4);
    //cin>>x4;
    fflush(stdin);
    x4=tolower(x4);
    printf("\n");
    y='c';
    a=0;
    fun(x4,y);
    if(a==1)
    {
            system (" cls ");
            printf("\n\n Correct answer. \n\n\n");
    }

    else
    {
            system (" cls ");
            printf("\n\n wrong answer.\n\n correct answer is %c. 8 weeks \n\n\n",y);
    }


    ///5

    printf("\n\n");
    printf(" 5. According to International Red Cross Guidelines, a person cannot  \n");
    printf("    donate blood if \n\n");

    printf("\n a. He/she is above 18 years of age \n");
    printf("\n b. His/her weight is above 110 pounds (ie 45 kg) \n");
    printf("\n c. Both a and b \n");
    printf("\n d. He/she has a history of hepatitis \n");

    printf("\n\n Your choice: ");
    scanf("%c",&x5);

    //cin>>x5;
    fflush(stdin);
    x5=tolower(x5);
    printf("\n");
    y='d';
    a=0;
    fun(x5,y);
    if(a==1)
    {
            system (" cls ");
            printf("\n\n Correct answer. \n\n\n");
    }

    else
    {
            system (" cls ");
            printf("\n\n wrong answer.\n\n correct answer is %c. He/she has a history of hepatitis \n\n\n",y);
    }




    ///6

    printf("\n\n");
    printf(" 6. Select the correct statement. \n\n");

    printf("\n a. Donated blood intended for use in an individual other than the \n");
    printf("    blood donor is called a 'Homologous' blood transfusion. \n");
    printf("\n b. An 'Allogeneic blood transfusion means that the donor and \n");
    printf("    recipient are the same \n");
    printf("\n c. An 'Autologous' blood transfusion means that the donor and  \n");
    printf("    recipient are two different individuals\n");

    printf("\n\n Your choice: ");
    scanf("%c",&x6);

    //cin>>x6;
    fflush(stdin);
    x6=tolower(x6);
    printf("\n");
    y='a';
    a=0;
    fun(x6,y);
    if(a==1)
    {
            system (" cls ");
            printf("\n\n Correct answer. \n\n\n");
    }

    else
    {
            system (" cls ");
            printf("\n\n wrong answer.\n\n correct answer is %c. Donated blood intended for use in an individual other than the\n blood donor is called a 'Homologous' blood transfusion. \n\n\n",y);
    }



    ///7

    printf("\n\n");
    printf("\n 7. Can a Thalassemia Minor donate blood? \n\n");

    printf("\n a. No, they can't. \n");
    printf("\n b. Yes, they can.  \n");

    printf("\n\n Your choice: ");
    scanf("%c",&x7);

    //cin>>x7;
    fflush(stdin);
    x7=tolower(x7);
    printf("\n");
    y='b';
    a=0;
    fun(x7,y);
    if(a==1)
    {
            system (" cls ");
            printf("\n\n Correct answer. \n\n\n");
    }

    else
    {
            system (" cls ");
            printf("\n\n wrong answer.\n\n correct answer is %c. Yes, they can.\n\n\n",y);
    }




    ///8

    printf("\n\n");
    printf(" 8. Which of the following individuals is not prohibited from \n");
    printf("    donating blood? \n\n");

    printf("\n a. A person currently suffering from cold or flu \n");
    printf("\n b. A pregnant woman \n");
    printf("\n c. A menstruating woman \n");
    printf("\n d. A person whose partner is HIV positive \n");

    printf("\n\n Your choice: ");
    scanf("%c",&x8);

   // cin>>x8;
    fflush(stdin);
    x4=tolower(x8);
    printf("\n");
    y='c';
    a=0;
    fun(x8,y);
    if(a==1)
    {
            system (" cls ");
            printf("\n\n Correct answer. \n\n\n");
    }

    else
    {
            system (" cls ");
            printf("\n\n wrong answer.\n\n correct answer is %c. A menstruating woman \n\n\n",y);
    }



    ///9

    printf("\n\n");
    printf(" 9. It is normal to feel weak after a blood donation \n");

    printf("\n a. False \n");
    printf("\n b. True \n");

    printf("\n\n Your choice: ");
    scanf("%c",&x9);

    //cin>>x9;
    fflush(stdin);
    x9=tolower(x9);
    printf("\n");
    y='a';
    a=0;
    fun(x9,y);
    if(a==1)
    {
            system (" cls ");
            printf("\n\n Correct answer. \n\n\n");
    }

    else
    {
            system (" cls ");
            printf("\n\n wrong answer.\n\n correct answer is %c. False \n\n\n",y);
    }



    ///10

    printf("\n\n");
    printf(" 10. What is apheresis? \n");

    printf("\n a. scientific term for blood donation. \n");
    printf("\n b. Fatigue experienced after blood donation \n");
    printf("\n c. Period during which a person is prohibited from donating blood \n");
    printf("\n d. Blood donation where specific components of blood are separated \n");
    printf("    and transfused \n\n");

    printf("\n\n Your choice: ");
    scanf("%c",&x10);

   // cin>>x10;
    fflush(stdin);
    x10=tolower(x10);
    printf("\n");
    y='d';
    a=0;
    fun(x10,y);
    if(a==1)
           {

            system (" cls ");
            printf("\n\n Correct answer.\n\n Thank's for playing with us :) \n\n\n");

          //  EXIT_E();
           }

    else
    {

            system (" cls ");
            printf("\n\n wrong answer.\n\n correct answer is %c. Blood donation where specific components of blood are separated \n and transfused \n\n Thank's for playing with us :) \n\n\n",y);

            //EXIT_E();
    }

   printf("Press any key to continue");
   getch();
   USER();
   //EXIT_E();

}








    void ADMIN()

    {
    int i=0,check;
    char *str="SHAKEL";


    do
    {
        if(i>2)
        {
            system (" cls ");
            printf("\n\n                               YOU ARE NOT AN ADMIN!!\n");
            printf("                            IT SEEMS YOU ARE A HACKER!!\n\n\n\n\n\n");
            printf("                                    Go to Hell!! >_< \n\n\n");
            getch();
            break;
        }

        char pass[SIZE];
        char ch;
        m=0;

        if (i==0)
        {
            system (" cls ");
            printf("\nEnter your password: ");
        }

        if (i==1)
        {
            system (" cls ");
            printf("\nSomething went wrong, try again");
            printf("\nEnter password: ");
        }

        if (i==2)
        {
            system (" cls ");
            printf("\n If you are an ADMIN you should know it, This is the last chance");
            printf("\nEnter password:");
        }
         while(1){
        ch=getch();
        if(ch==13)
            break;
        putchar('*');
        pass[m]=ch;
        m++;
         }
         pass[m]='\0';
        i++;
        check=strcmp(str,pass);
    }
    while(check!=0);

    if(check==0)
    {
        system (" cls ");
        printf("\n\n   HELLO ADMIN :) \n");
        ADMIN_MENU();

    }
}



 void ADMIN_MENU()
 {
    system (" cls ");
    char x;
    printf("\n\n===========================\n");
    printf("\n a. Show file names   \n");
    printf("\n b. Edit or add files \n");
    printf("\n c. User menu         \n");
    printf("\n d. Go Back           \n");
    printf("\n===========================\n");

    printf("Your choice:");
    scanf("%c",&x);
    fflush(stdin);

    switch (x)
    {

         case 'a' :
         case 'A' :
                   system("cls");
                   printf("\n\n Which files name do you want to see?\n");
                   printf("\n a. Donor   \n");
                   printf("\n b. Patient \n");
                   printf("\n wanna go back, press any other key!\n\n\n");
                   printf(" Your choice : ");
                   scanf("%c",&x);
                   fflush(stdin);
                   if(x=='a' || x=='A')
                   {
                        system(" cls ");
                        printf("\n Which areas file do you want to see?\n\n");
                        printf("\n=================================================\n\n");

                        printf("\n a. Uttara     \n");
                        printf("\n b. Basundhara \n");
                        printf("\n c. Dhanmondi  \n");
                        printf("\n d. Gulshan    \n");
                        printf("\n e. Mirpur     \n");
                        printf("\n f. Motijheel  \n");
                        printf("\n g. Shahbag    \n");
                        printf("\n h. Savar      \n");
                        printf("\n===================================================\n\n");

                       printf(" Your choice : ");
                       scanf("%c",&x);

                       fflush(stdin);

                       if(x=='a' || x=='A')
                       {
                         system(" cls ");
                         printf("\n\n");
                         printf(" 1. Uttra A  positive Donor   \n");
                         printf(" 2. Uttra A  negetive Donor   \n");
                         printf(" 3. Uttra B  positive Donor   \n");
                         printf(" 4. Uttra B  negetive Donor   \n");
                         printf(" 5. Uttra O  positive Donor   \n");
                         printf(" 6. Uttra O  negetive Donor   \n");
                         printf(" 7. Uttra AB positive Donor   \n");
                         printf(" 8. Uttra AB negetive Donor \n\n");
                         printf(" Press any key to continue");
                         getch();
                         ADMIN_MENU();

                       }

                       if(x=='b' || x=='B')
                       {
                           system(" cls ");
                           printf("\n\n");
                       printf("  9. Basundhara A  positive Donor   \n");
                       printf(" 10. Basundhara A  negetive Donor   \n");
                       printf(" 11. Basundhara B  positive Donor   \n");
                       printf(" 12. Basundhara B  negetive Donor   \n");
                       printf(" 13. Basundhara O  positive Donor   \n");
                       printf(" 14. Basundhara O  negetive Donor   \n");
                       printf(" 15. Basundhara AB positive Donor   \n");
                       printf(" 16. Basundhara AB negetive Donor \n\n");
                       printf(" Press any key to continue");
                       getch();
                       ADMIN_MENU();
                       }

                       if(x=='c' || x=='C')
                       {
                           system(" cls ");
                           printf("\n\n");
                       printf(" 17. Gulshan A  positive Donor   \n");
                       printf(" 18. Gulshan A  negetive Donor   \n");
                       printf(" 19. Gulshan B  positive Donor   \n");
                       printf(" 20. Gulshan B  negetive Donor   \n");
                       printf(" 21. Gulshan O  positive Donor   \n");
                       printf(" 22. Gulshan O  negetive Donor   \n");
                       printf(" 23. Gulshan AB positive Donor   \n");
                       printf(" 24. Gulshan AB negetive Donor \n\n");
                       printf(" Press any key to continue");
                       getch();
                       ADMIN_MENU();
                       }

                       if(x=='d' || x=='D')
                       {
                           system(" cls ");
                           printf("\n\n");
                           printf(" 25. Dhanmondi A  positive Donor   \n");
                       printf(" 26. Dhanmondi A  negetive Donor   \n");
                       printf(" 27. Dhanmondi B  positive Donor   \n");
                       printf(" 28. Dhanmondi B  negetive Donor   \n");
                       printf(" 29. Dhanmondi O  positive Donor   \n");
                       printf(" 30. Dhanmondi O  negetive Donor   \n");
                       printf(" 31. Dhanmondi AB positive Donor   \n");
                       printf(" 32. Dhanmondi AB negetive Donor \n\n");
                       printf(" Press any key to continue");
                       getch();
                       ADMIN_MENU();
                       }

                        if(x=='e' || x=='E')
                        {
                            system(" cls ");
                            printf("\n\n");
                       printf(" 33. Mirpur A  positive Donor   \n");
                       printf(" 34. Mirpur A  negetive Donor   \n");
                       printf(" 35. Mirpur B  positive Donor   \n");
                       printf(" 36. Mirpur B  negetive Donor   \n");
                       printf(" 37. Mirpur O  positive Donor   \n");
                       printf(" 38. Mirpur O  negetive Donor   \n");
                       printf(" 39. Mirpur AB positive Donor   \n");
                       printf(" 40. Mirpur AB negetive Donor \n\n");
                       printf(" Press any key to continue");
                         getch();
                         ADMIN_MENU();
                        }

                        if(x=='f' || x=='F')
                        {
                            system(" cls ");
                            printf("\n\n");
                       printf(" 41. Shahbag A  positive Donor   \n");
                       printf(" 42. Shahbag A  negetive Donor   \n");
                       printf(" 43. Shahbag B  positive Donor   \n");
                       printf(" 44. Shahbag B  negetive Donor   \n");
                       printf(" 45. Shahbag O  positive Donor   \n");
                       printf(" 46. Shahbag O  negetive Donor   \n");
                       printf(" 47. Shahbag AB positive Donor   \n");
                       printf(" 48. Shahbag AB negetive Donor \n\n");
                       printf(" Press any key to continue");
                         getch();
                         ADMIN_MENU();
                        }

                       if(x=='g' || x=='G')
                       {
                           system(" cls ");
                           printf(" 49. Motijheel A  positive Donor   \n");
                       printf(" 50. Motijheel A  negetive Donor   \n");
                       printf(" 51. Motijheel B  positive Donor   \n");
                       printf(" 52. Motijheel B  negetive Donor   \n");
                       printf(" 53. Motijheel O  positive Donor   \n");
                       printf(" 54. Motijheel O  negetive Donor   \n");
                       printf(" 55. Motijheel AB positive Donor   \n");
                       printf(" 56. Motijheel AB negetive Donor \n\n");
                       printf(" Press any key to continue");
                         getch();
                         ADMIN_MENU();
                       }

                       if(x=='h' || x=='H')
                       {
                           system(" cls ");
                           printf("\n\n");
                           printf(" 57. Savar A  positive Donor   \n");
                       printf(" 58. Savar A  negetive Donor   \n");
                       printf(" 59. Savar B  positive Donor   \n");
                       printf(" 60. Savar B  negetive Donor   \n");
                       printf(" 61. Savar O  positive Donor   \n");
                       printf(" 62. Savar O  negetive Donor   \n");
                       printf(" 63. Savar AB positive Donor   \n");
                       printf(" 64. Savar AB negetive Donor \n\n");
                       printf(" Press any key to continue");
                         getch();
                         ADMIN_MENU();
                       }


                   }



                   else if(x=='b' || x=='B')
                   {

                        system(" cls ");
                        printf("\n Which areas file do you want to see?\n\n");
                        printf("\n=================================================\n\n");

                        printf("\n a. Uttara     \n");
                        printf("\n b. Basundhara \n");
                        printf("\n c. Dhanmondi  \n");
                        printf("\n d. Gulshan    \n");
                        printf("\n e. Mirpur     \n");
                        printf("\n f. Motijheel  \n");
                        printf("\n g. Shahbag    \n");
                        printf("\n h. Savar      \n");
                        printf("\n===================================================\n\n");

                       printf(" Your choice : ");
                       scanf("%c",&x);
                       fflush(stdin);

                       if(x=='a' || x=='A')
                       {
                         system(" cls ");
                         printf("\n\n");
                       printf(" 1. Uttara central A+    \n");
                       printf(" 2. Uttara central A-    \n");
                       printf(" 3. Uttara central B+    \n");
                       printf(" 4. Uttara central B-    \n");
                       printf(" 5. Uttara central O+    \n");
                       printf(" 6. Uttara central O-    \n");
                       printf(" 7. Uttara central AB+   \n");
                       printf(" 8. Uttara central AB- \n\n");

                       printf("  9. Uttara modern A+   \n");
                       printf(" 10. Uttara modern A-   \n");
                       printf(" 11. Uttara modern B+   \n");
                       printf(" 12. Uttara modern B-   \n");
                       printf(" 13. Uttara modern O+   \n");
                       printf(" 14. Uttara modern O-   \n");
                       printf(" 15. Uttara modern AB+   \n");
                       printf(" 16. Uttara modern AB- \n\n");

                       printf(" 17. Uttara women A+   \n");
                       printf(" 18. Uttara women A-   \n");
                       printf(" 19. Uttara women B+   \n");
                       printf(" 20. Uttara women B-   \n");
                       printf(" 21. Uttara women O+   \n");
                       printf(" 22. Uttara women O-   \n");
                       printf(" 23. Uttara women AB+   \n");
                       printf(" 24. Uttara women AB- \n\n");

                         printf(" Press any key to continue");
                         getch();
                         ADMIN_MENU();

                       }

                       if(x=='b' || x=='B')
                       {
                           system(" cls ");
                           printf("\n\n");
                       printf(" 25. Basundhara ad-din A+    \n");
                       printf(" 26. Basundhara ad-din A-    \n");
                       printf(" 27. Basundhara ad-din B+    \n");
                       printf(" 27. Basundhara ad-din B-    \n");
                       printf(" 29. Basundhara ad-din O+    \n");
                       printf(" 30. Basundhara ad-din O-    \n");
                       printf(" 31. Basundhara ad-din AB+   \n");
                       printf(" 32. Basundhara ad-din AB- \n\n");

                       printf(" 33. Basundhara apollo A+   \n");
                       printf(" 34. Basundhara apollo A-   \n");
                       printf(" 35. Basundhara apollo B+   \n");
                       printf(" 36. Basundhara apollo B-   \n");
                       printf(" 37. Basundhara apollo O+   \n");
                       printf(" 38. Basundhara apollo O-   \n");
                       printf(" 39. Basundhara apollo AB+   \n");
                       printf(" 40. Basundhara apollo AB- \n\n");

                       printf(" 41. Basundhara eye A+   \n");
                       printf(" 42. Basundhara eye A-   \n");
                       printf(" 43. Basundhara eye B+   \n");
                       printf(" 44. Basundhara eye B-   \n");
                       printf(" 45. Basundhara eye O+   \n");
                       printf(" 46. Basundhara eye O-   \n");
                       printf(" 47. Basundhara eye AB+   \n");
                       printf(" 48. Basundhara eye AB- \n\n");

                       printf(" Press any key to continue");
                       getch();
                       ADMIN_MENU();
                       }

                       if(x=='c' || x=='C')
                       {
                           system(" cls ");
                           printf("\n\n");
                       printf(" 49. Gulshan mother A+    \n");
                       printf(" 50. Gulshan mother A-    \n");
                       printf(" 51. Gulshan mother B+    \n");
                       printf(" 52. Gulshan mother B-    \n");
                       printf(" 53. Gulshan mother O+    \n");
                       printf(" 54. Gulshan mother O-    \n");
                       printf(" 55. Gulshan mother AB+   \n");
                       printf(" 56. Gulshan mother AB- \n\n");

                       printf(" 57. Gulshan shahabuddin A+   \n");
                       printf(" 58. Gulshan shahabuddin A-   \n");
                       printf(" 59. Gulshan shahabuddin B+   \n");
                       printf(" 60. Gulshan shahabuddin B-   \n");
                       printf(" 61. Gulshan shahabuddin O+   \n");
                       printf(" 62. Gulshan shahabuddin O-   \n");
                       printf(" 63. Gulshan shahabuddin AB+   \n");
                       printf(" 64. Gulshan shahabuddin AB- \n\n");

                       printf(" 65. Gulshan united A+   \n");
                       printf(" 66. Gulshan united A-   \n");
                       printf(" 67. Gulshan united B+   \n");
                       printf(" 68. Gulshan united B-   \n");
                       printf(" 69. Gulshan united O+   \n");
                       printf(" 70. Gulshan united O-   \n");
                       printf(" 71. Gulshan united AB+   \n");
                       printf(" 72. Gulshan united AB- \n\n");

                       printf(" Press any key to continue");
                      getch();
                      ADMIN_MENU();

                       }

                       if(x=='d' || x=='D')
                       {
                           system(" cls ");
                           printf("\n\n");

                       printf(" 73. Dhanmondi central A+    \n");
                       printf(" 74. Dhanmondi central A-    \n");
                       printf(" 75. Dhanmondi central B+    \n");
                       printf(" 76. Dhanmondi central B-    \n");
                       printf(" 77. Dhanmondi central O+    \n");
                       printf(" 78. Dhanmondi central O-    \n");
                       printf(" 79. Dhanmondi central AB+   \n");
                       printf(" 80. Dhanmondi central AB- \n\n");

                       printf(" 81. Dhanmondi ibn A+   \n");
                       printf(" 82. Dhanmondi ibn A-   \n");
                       printf(" 83. Dhanmondi ibn B+   \n");
                       printf(" 84. Dhanmondi ibn B-   \n");
                       printf(" 85. Dhanmondi ibn O+   \n");
                       printf(" 86. Dhanmondi ibn O-   \n");
                       printf(" 87. Dhanmondi ibn AB+   \n");
                       printf(" 88. Dhanmondi ibn AB- \n\n");

                       printf(" 89. Dhanmondi lab A+   \n");
                       printf(" 90. Dhanmondi lab A-   \n");
                       printf(" 91. Dhanmondi lab B+   \n");
                       printf(" 92. Dhanmondi lab B-   \n");
                       printf(" 93. Dhanmondi lab O+   \n");
                       printf(" 94. Dhanmondi lab O-   \n");
                       printf(" 95. Dhanmondi lab AB+   \n");
                       printf(" 96. Dhanmondi lab AB- \n\n");

                       printf(" Press any key to continue");
                       getch();
                       ADMIN_MENU();
                       }

                        if(x=='e' || x=='E')
                        {
                            system(" cls ");
                            printf("\n\n");

                       printf("  97. Mirpur child A+    \n");
                       printf("  98. Mirpur child A-    \n");
                       printf("  99. Mirpur child B+    \n");
                       printf(" 100. Mirpur child B-    \n");
                       printf(" 101. Mirpur child O+    \n");
                       printf(" 102. Mirpur child O-    \n");
                       printf(" 103. Mirpur child AB+   \n");
                       printf(" 104. Mirpur child AB- \n\n");

                       printf(" 105. Mirpur galaxy A+   \n");
                       printf(" 106. Mirpur galaxy A-   \n");
                       printf(" 107. Mirpur galaxy B+   \n");
                       printf(" 108. Mirpur galaxy B-   \n");
                       printf(" 109. Mirpur galaxy O+   \n");
                       printf(" 110. Mirpur galaxy O-   \n");
                       printf(" 111. Mirpur galaxy AB+   \n");
                       printf(" 112. Mirpur galaxy AB- \n\n");

                       printf(" 113. Mirpur islami A+   \n");
                       printf(" 114. Mirpur islami A-   \n");
                       printf(" 115. Mirpur islami B+   \n");
                       printf(" 116. Mirpur islami B-   \n");
                       printf(" 117. Mirpur islami O+   \n");
                       printf(" 118. Mirpur islami O-   \n");
                       printf(" 119. Mirpur islami AB+   \n");
                       printf(" 120. Mirpur islami AB- \n\n");

                       printf(" Press any key to continue");
                         getch();
                         ADMIN_MENU();
                        }

                        if(x=='f' || x=='F')
                        {
                            system(" cls ");
                            printf("\n\n");

                       printf(" 121. Motijheel barakah A+    \n");
                       printf(" 122. Motijheel barakah A-    \n");
                       printf(" 123. Motijheel barakah B+    \n");
                       printf(" 124. Motijheel barakah B-    \n");
                       printf(" 125. Motijheel barakah O+    \n");
                       printf(" 126. Motijheel barakah O-    \n");
                       printf(" 127. Motijheel barakah AB+   \n");
                       printf(" 128. Motijheel barakah AB- \n\n");

                       printf(" 129. Motijheel islami A+   \n");
                       printf(" 130. Motijheel islami A-   \n");
                       printf(" 131. Motijheel islami B+   \n");
                       printf(" 132. Motijheel islami B-   \n");
                       printf(" 133. Motijheel islami O+   \n");
                       printf(" 134. Motijheel islami O-   \n");
                       printf(" 135. Motijheel islami AB+   \n");
                       printf(" 136. Motijheel islami AB- \n\n");

                       printf(" 137. Motijheel pan A+   \n");
                       printf(" 138. Motijheel pan A-   \n");
                       printf(" 139. Motijheel pan B+   \n");
                       printf(" 140. Motijheel pan B-   \n");
                       printf(" 141. Motijheel pan O+   \n");
                       printf(" 142. Motijheel pan O-   \n");
                       printf(" 143. Motijheel pan AB+   \n");
                       printf(" 144. Motijheel pan AB- \n\n");


                       printf(" Press any key to continue");
                         getch();
                         ADMIN_MENU();
                        }

                       if(x=='g' || x=='G')
                       {
                           system(" cls ");

                        printf(" 145. Shahbag mujib A+   \n");
                       printf(" 146. Shahbag mujib A-   \n");
                       printf(" 147. Shahbag mujib B+   \n");
                       printf(" 148. Shahbag mujib B-   \n");
                       printf(" 149. Shahbag mujib O+   \n");
                       printf(" 150. Shahbag mujib O-   \n");
                       printf(" 151. Shahbag mujib AB+   \n");
                       printf(" 152. Shahbag mujib AB- \n\n");

                       printf(" 153. Shahbag birdem A+   \n");
                       printf(" 154. Shahbag birdem A-   \n");
                       printf(" 155. Shahbag birdem B+   \n");
                       printf(" 156. Shahbag birdem B-   \n");
                       printf(" 157. Shahbag birdem O+   \n");
                       printf(" 158. Shahbag birdem O-   \n");
                       printf(" 159. Shahbag birdem AB+   \n");
                       printf(" 160. Shahbag birdem AB- \n\n");

                       printf(" Press any key to continue");
                         getch();
                         ADMIN_MENU();
                       }

                       if(x=='h' || x=='H')
                       {
                           system(" cls ");
                           printf("\n\n");
                       printf(" 161. Savar anam A+    \n");
                       printf(" 162. Savar anam A-    \n");
                       printf(" 163. Savar anam B+    \n");
                       printf(" 164. Savar anam B-    \n");
                       printf(" 165. Savar anam O+    \n");
                       printf(" 166. Savar anam O-    \n");
                       printf(" 167. Savar anam AB+   \n");
                       printf(" 168. Savar anam AB- \n\n");

                       printf(" 169. Savar general A+   \n");
                       printf(" 170. Savar general A-   \n");
                       printf(" 171. Savar general B+   \n");
                       printf(" 172. Savar general B-   \n");
                       printf(" 173. Savar general O+   \n");
                       printf(" 174. Savar general O-   \n");
                       printf(" 175. Savar general AB+   \n");
                       printf(" 176. Savar general AB- \n\n");

                       printf(" 177. Savar prime A+   \n");
                       printf(" 178. Savar prime A-   \n");
                       printf(" 179. Savar prime B+   \n");
                       printf(" 180. Savar prime B-   \n");
                       printf(" 181. Savar prime O+   \n");
                       printf(" 182. Savar prime O-   \n");
                       printf(" 183. Savar prime AB+   \n");
                       printf(" 184. Savar prime AB- \n\n");
                       printf(" Press any key to continue");
                       getch();

                       printf(" Press any key to continue");
                       getch();
                       ADMIN_MENU();
                       }



                   }
                   else
                   {
                       ADMIN_MENU();
                   }

                   break;

         case 'b' :
         case 'B' :

                   system (" cls ");
                   printf("\n What do you want to add ?\n");
                   printf("\n a. Donor     \n");
                   printf("\n b. Patient \n\n");
                   printf("\n wanna go back, press any other key!\n\n");
                   printf(" Your choice : ");
                   scanf("%c",&x);
                   fflush(stdin);


                   if(x=='a' || x=='A')
                   {
                       DONOR();
                   }
                   else if(x=='b' ||x=='B')
                   {
                       PATIENT();
                   }
                   else
                   {
                       ADMIN_MENU();
                   }

                   break;


         case 'c' :
         case 'C' :
                    USER();
                    break;



         case 'd' :
         case 'D' :
                   MAIN_MENU();
                    break;




         default :
                  {
                    system (" cls ");
                    printf("\n Wrong Choice. Choose again!!");
                    ADMIN_MENU();

                  }




    }



 }
   void DONOR()
   {
       system (" cls ");
       char x;
       printf("\n Which area do you want to add a new doner? \n\n");
       printf("================================================\n\n");

       printf("\n a. Uttara     \n");
       printf("\n b. Basundhara \n");
       printf("\n c. Dhanmondi  \n");
       printf("\n d. Gulshan    \n");
       printf("\n e. Mirpur     \n");
       printf("\n f. Motijheel  \n");
       printf("\n g. Shahbag    \n");
       printf("\n h. Savar      \n");

       printf("\n===============================================\n\n");
       printf(" want to go back, press enter\n\n");
       printf(" Your choice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)
       {
                case 'a' :
                case 'A' :
                           DONOR_UTTARA();
                           break;
                case 'b' :
                case 'B' :
                           DONOR_BASUNDHARA();
                           break;

                case 'c' :
                case 'C' :
                           DONOR_DHANMONDI();
                           break;

                case 'd' :
                case 'D' :
                           DONOR_GULSHAN();
                           break;

                case 'e' :
                case 'E' :
                           DONOR_MIRPUR();
                           break;

                case 'f' :
                case 'F' :
                           DONOR_MOTIJHEEL();
                           break;

                case 'g' :
                case 'G' :
                           DONOR_SHAHBAG();
                           break;

                case 'h' :
                case 'H' :
                           DONOR_SAVAR();
                           break;

                default :
                         {
                            if(x=='\n')
                            {
                               ADMIN_MENU();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            DONOR();
                            }
                          }
       }

   }


    void DONOR_UTTARA()
    {
       system (" cls ");
       fflush(stdin);
       FILE *fp;

       char x;
       char edit[SIZE];

       printf("\n Which file do you want to edit or add? \n\n");
       printf(" a. Uttara A+ Donor  \n");
       printf(" b. Uttara A- Donor  \n");
       printf(" c. Uttara B+ Donor  \n");
       printf(" d. Uttara B- Donor  \n");
       printf(" e. Uttara AB+ Donor \n");
       printf(" f. Uttara AB- Donor \n");
       printf(" g. Uttara O+ Donor  \n");
       printf(" h. Uttara O- Donor  \n\n");

       printf(" want to go back, press enter\n\n");
       printf(" Your chooice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)
       {
         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Uttara A positive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                        //if(fp!=NULL)
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();
                    break;

         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Uttara A negetive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();

                    break;

         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Uttara B positive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();
                    break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Uttara B negetive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();
                    break;

         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Uttara AB positive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                   printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();
                    break;

         case 'f' :
         case 'F' :
                     system (" cls ");
                    fp=fopen("Uttara AB negetive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                   printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();
                    break;

         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Uttara O positive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();
                    break;

         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Uttara O negetive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();
                    break;


         default :
                   {
                      if(x=='\n')
                            {
                                DONOR();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            DONOR_UTTARA();
                            }
                   }
       }


    }


      void DONOR_BASUNDHARA()
    {
       system (" cls ");
       fflush(stdin);
       FILE *fp;

       char x;
       char edit[SIZE];

       printf("\n Which file do you want to edit or add? \n\n");
       printf(" a. Basundhara A+ Donor  \n");
       printf(" b. Basundhara A- Donor  \n");
       printf(" c. Basundhara B+ Donor  \n");
       printf(" d. Basundhara B- Donor  \n");
       printf(" e. Basundhara AB+ Donor \n");
       printf(" f. Basundhara AB- Donor \n");
       printf(" g. Basundhara O+ Donor  \n");
       printf(" h. Basundhara O- Donor  \n\n");

       printf(" want to go back, press enter\n\n");
       printf(" Your choice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)
       {
         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Basundhara A positive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();
                    break;

         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Basundhara A negetive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();
                    break;


         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Basundhara B positive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();
                    break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Basundhara B negetive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                   fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();
                    break;
         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Basundhara AB positive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();
                    break;
         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Basundhara AB negetive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();
                    break;
         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Basundhara O positive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();
                    break;

         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Basundhara O negetive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();
                    break;


         default :
                   {
                      if(x=='\n')
                            {
                                DONOR();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            DONOR_BASUNDHARA();
                            }
                   }
       }


    }



       void DONOR_GULSHAN()
    {
       system (" cls ");
       fflush(stdin);
       FILE *fp;

       char x;
       char edit[SIZE];

       printf("\n Which file do you want to edit or add? \n\n");
       printf(" a. Gulshan A+ Donor  \n");
       printf(" b. Gulshan A- Donor  \n");
       printf(" c. Gulshan B+ Donor  \n");
       printf(" d. Gulshan B- Donor  \n");
       printf(" e. Gulshan AB+ Donor \n");
       printf(" f. Gulshan AB- Donor \n");
       printf(" g. Gulshan O+ Donor  \n");
       printf(" h. Gulshan O- Donor  \n\n");

       printf(" want to go back, press enter\n\n");
       printf(" Your chooice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)
       {
         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Gulshan A positive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                   fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();
                    break;


         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Gulshan A negetive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                   fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();
                    break;

         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Gulshan B positive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();
                    break;


         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Gulshan B negetive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                   fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();
                    break;


         case 'e' :
         case 'E' : system (" cls ");
                    fp=fopen("Gulshan AB positive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();
                    break;


         case 'f' :
         case 'F' : system (" cls ");
                    fp=fopen("Gulshan AB negetive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();
                    break;


         case 'g' :
         case 'G' : system (" cls ");
                    fp=fopen("Gulshan O positive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();
                    break;


         case 'h' :
         case 'H' : system (" cls ");
                    fp=fopen("Gulshan O negetive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();
                    break;



         default :
                   {
                      if(x=='\n')
                            {
                                DONOR();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            DONOR_GULSHAN();
                            }
                   }
       }


    }



      void DONOR_DHANMONDI()
    {
       system (" cls ");
       fflush(stdin);
       FILE *fp;

       char x;
       char edit[SIZE];

       printf("\n Which file do you want to edit or add? \n\n");
       printf(" a. Dhanmondi A+ Donor  \n");
       printf(" b. Dhanmondi A- Donor  \n");
       printf(" c. Dhanmondi B+ Donor  \n");
       printf(" d. Dhanmondi B- Donor  \n");
       printf(" e. Dhanmondi AB+ Donor \n");
       printf(" f. Dhanmondi AB- Donor \n");
       printf(" g. Dhanmondi O+ Donor  \n");
       printf(" h. Dhanmondi O- Donor  \n\n");

       printf(" want to go back, press enter\n\n");
       printf(" Your chooice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)
       {
         case 'a' :
         case 'A' : system (" cls ");
                    fp=fopen("Dhanmondi A positive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();
                    break;

         case 'b' :
         case 'B' : system (" cls ");
                    fp=fopen("Dhanmondi A negetive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();
                    break;

         case 'c' :
         case 'C' : system (" cls ");
                    fp=fopen("Dhanmondi B positive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();
                    break;

         case 'd' :
         case 'D' : system (" cls ");
                    fp=fopen("Dhanmondi B negetive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();
                    break;


         case 'e' :
         case 'E' : system (" cls ");
                    fp=fopen("Dhanmondi AB positive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();
                    break;



         case 'f' :
         case 'F' : system (" cls ");
                    fp=fopen("Dhanmondi AB negetive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();
                    break;


         case 'g' :
         case 'G' : system (" cls ");
                    fp=fopen("Dhanmondi O positive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                   fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();
                    break;


         case 'h' :
         case 'H' : system (" cls ");
                    fp=fopen("Dhanmondi O negetive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();
                    break;


         default :
                   {
                      if(x=='\n')
                            {
                                DONOR();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            DONOR_DHANMONDI();
                            }
                   }
       }


    }


        void DONOR_MIRPUR()
    {
       system (" cls ");
       fflush(stdin);
       FILE *fp;

       char x;
       char edit[SIZE];

       printf("\n Which file do you want to edit or add? \n\n");
       printf(" a. Mirpur A+ Donor  \n");
       printf(" b. Mirpur A- Donor  \n");
       printf(" c. Mirpur B+ Donor  \n");
       printf(" d. Mirpur B- Donor  \n");
       printf(" e. Mirpur AB+ Donor \n");
       printf(" f. Mirpur AB- Donor \n");
       printf(" g. Mirpur O+ Donor  \n");
       printf(" h. Mirpur O- Donor  \n\n");

       printf(" want to go back, press enter\n\n");
       printf(" Your chooice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)
       {
         case 'a' :
         case 'A' : system (" cls ");
                    fp=fopen("Mirpur A positive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();
                    break;


         case 'b' :
         case 'B' : system (" cls ");
                    fp=fopen("Mirpur A negetive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();

                    break;


         case 'c' :
         case 'C' : system (" cls ");
                    fp=fopen("Mirpur B positive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();

                    break;

         case 'd' :
         case 'D' : system (" cls ");
                    fp=fopen("Mirpur B negetive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();

                    break;


         case 'e' :
         case 'E' : system (" cls ");
                    fp=fopen("Mirpur AB positive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();

                    break;


         case 'f' :
         case 'F' : system (" cls ");
                    fp=fopen("Mirpur AB negetive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();

                    break;


         case 'g' :
         case 'G' : system (" cls ");
                    fp=fopen("Mirpur O positive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();

                    break;


         case 'h' :
         case 'H' : system (" cls ");
                    fp=fopen("Mirpur O negetive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();

                    break;



         default :
                   {
                      if(x=='\n')
                            {
                                DONOR();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            DONOR_MIRPUR();
                            }
                   }
       }


    }



        void DONOR_SHAHBAG()
    {
      system (" cls ");
       fflush(stdin);
       FILE *fp;

       char x;
       char edit[SIZE];

       printf("\n Which file do you want to edit or add? \n\n");
       printf(" a. Shahbag A+ Donor  \n");
       printf(" b. Shahbag A- Donor  \n");
       printf(" c. Shahbag B+ Donor  \n");
       printf(" d. Shahbag B- Donor  \n");
       printf(" e. Shahbag AB+ Donor \n");
       printf(" f. Shahbag AB- Donor \n");
       printf(" g. Shahbag O+ Donor  \n");
       printf(" h. Shahbag O- Donor  \n\n");

       printf(" want to go back, press enter\n\n");
       printf(" Your choice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)
       {
         case 'a' :
         case 'A' : system (" cls ");
                    fp=fopen("Shahbag A positive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();

                    break;

         case 'b' :
         case 'B' : system (" cls ");
                    fp=fopen("Shahbag A negetive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();

                    break;

         case 'c' :
         case 'C' : system (" cls ");
                    fp=fopen("Shahbag B positive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();

                    break;

         case 'd' :
         case 'D' : system (" cls ");
                    fp=fopen("Shahbag B negetive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();

                    break;

         case 'e' :
         case 'E' : system (" cls ");
                    fp=fopen("Shahbag AB positive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();

                    break;

         case 'f' :
         case 'F' : system (" cls ");
                    fp=fopen("Shahbag AB negetive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();

                    break;

         case 'g' :
         case 'G' : system (" cls ");
                    fp=fopen("Shahbag O positive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();

                    break;

         case 'h' :
         case 'H' : system (" cls ");
                    fp=fopen("Shahbag O negetive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();

                    break;



         default :
                   {
                      if(x=='\n')
                            {
                                DONOR();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            DONOR_SHAHBAG();
                            }
                   }
       }


    }



        void DONOR_MOTIJHEEL()
    {


       system (" cls ");
       fflush(stdin);
       FILE *fp;

       char x;
       char edit[SIZE];

       printf("\n Which file do you want to edit or add? \n\n");
       printf(" a. Motijheel A+ Donor  \n");
       printf(" b. Motijheel A- Donor  \n");
       printf(" c. Motijheel B+ Donor  \n");
       printf(" d. Motijheel B- Donor  \n");
       printf(" e. Motijheel AB+ Donor \n");
       printf(" f. Motijheel AB- Donor \n");
       printf(" g. Motijheel O+ Donor  \n");
       printf(" h. Motijheel O- Donor  \n\n");

       printf(" want to go back, press enter\n\n");
       printf(" Your choice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)
       {
         case 'a' :
         case 'A' : system (" cls ");
                    fp=fopen("Motijheel A positive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                   fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();

                    break;

         case 'b' :
         case 'B' : system (" cls ");
                    fp=fopen("Motijheel A negetive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();

                    break;

         case 'c' :
         case 'C' : system (" cls ");
                    fp=fopen("Motijheel B positive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();

                    break;

         case 'd' :
         case 'D' :
                    fp=fopen("Motijheel B negetive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();

                    break;

         case 'e' :
         case 'E' : system (" cls ");
                    fp=fopen("Motijheel AB positive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();

                    break;

         case 'f' :
         case 'F' : system (" cls ");
                    fp=fopen("Motijheel AB negetive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();

                    break;

         case 'g' :
         case 'G' : system (" cls ");
                    fp=fopen("Motijheel O positive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();

                    break;

         case 'h' :
         case 'H' : system (" cls ");
                    fp=fopen("Motijheel O negetive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();

                    break;



         default :
                   {
                      if(x=='\n')
                            {
                                DONOR();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            DONOR_MOTIJHEEL();
                            }
                   }
       }


    }



     void DONOR_SAVAR()
    {
       system (" cls ");
       fflush(stdin);
       FILE *fp;

       char x;
       char edit[SIZE];

       printf("\n Which file do you want to edit or add? \n\n");
       printf(" a. Savar A+ Donor  \n");
       printf(" b. Savar A- Donor  \n");
       printf(" c. Savar B+ Donor  \n");
       printf(" d. Savar B- Donor  \n");
       printf(" e. Savar AB+ Donor \n");
       printf(" f. Savar AB- Donor \n");
       printf(" g. Savar O+ Donor  \n");
       printf(" h. Savar O- Donor  \n\n");

       printf(" want to go back, press enter\n\n");
       printf(" Your chooice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)
       {
         case 'a' :
         case 'A' : system (" cls ");
                    fp=fopen("Savar A positive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();

                    break;

         case 'b' :
         case 'B' : system (" cls ");
                    fp=fopen("Savar A negetive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();

                    break;

         case 'c' :
         case 'C' : system (" cls ");
                    fp=fopen("Savar B positive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();

                    break;

         case 'd' :
         case 'D' : system (" cls ");
                    fp=fopen("Savar B negetive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();

                    break;

         case 'e' :
         case 'E' : system (" cls ");
                    fp=fopen("Savar AB positive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();

                    break;

         case 'f' :
         case 'F' : system (" cls ");
                    fp=fopen("Savar AB negetive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();

                    break;

         case 'g' :
         case 'G' : system (" cls ");
                    fp=fopen("Savar O positive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                    fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();

                    break;

         case 'h' :
         case 'H' : system (" cls ");
                    fp=fopen("Savar O negetive Donor.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else
                  {
                   fflush(stdin);
                    printf("\nAdd:\n\n");
                    printf("\n Donor number : ");
                    gets(edit);
                    fprintf(fp,"\n\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nPhone : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAdress : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                  printf("\n\n\nAdded...\n");
                  }
                    fclose(fp);
                    printf("\n\n\n\npress any key to continue");
                    getch();
                    ADMIN_MENU();

                    break;

         default :
                   {
                      if(x=='\n')
                            {
                                DONOR();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            DONOR_SAVAR();
                            }
                   }
       }


    }





   void PATIENT()
   {

       system (" cls ");
       char x;
       printf("\n Which area do you want to add a new Patient? \n\n");
       printf("================================================\n\n");

       printf("\n a. Uttara     \n");
       printf("\n b. Basundhara \n");
       printf("\n c. Dhanmondi  \n");
       printf("\n d. Gulshan    \n");
       printf("\n e. Mirpur     \n");
       printf("\n f. Motijheel  \n");
       printf("\n g. Shahbag    \n");
       printf("\n h. Savar      \n");

       printf("\n===============================================\n\n");
       printf(" want to go back, press enter\n\n");
       printf(" Your choice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)
       {
                case 'a' :
                case 'A' :
                           UTTARA_A();
                           break;
                case 'b' :
                case 'B' :
                           BASUNDHARA_A();
                           break;

                case 'c' :
                case 'C' :
                           DHANMONDI_A();
                           break;

                case 'd' :
                case 'D' :
                           GULSHAN_A();
                           break;

                case 'e' :
                case 'E' :
                           MIRPUR_A();
                           break;

                case 'f' :
                case 'F' :
                           MOTIJHEEL_A();
                           break;

                case 'g' :
                case 'G' :
                           SHAHBAG_A();
                           break;

                case 'h' :
                case 'H' :
                           SAVAR_A();
                           break;

                default :
                         {
                            if(x=='\n')
                            {
                               ADMIN_MENU();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            PATIENT();
                            }
                          }
       }





   }


   void UTTARA_A()
   {
       system("cls");
       char x;
       printf("\n Which Hospital do you want to add a new patient? \n\n");

       printf("\n\n =============================================================\n");

       printf("\n a. Uttara Central Gospital & Diagnostic Centre  \n");
       printf("\n b. Uttara Modern Medical College and Hospital   \n");
       printf("\n c. Medical College Women and Hospital           \n");

       printf("\n =============================================================\n\n");

       printf(" wanna go back press enter \n\n");

       printf("Your choice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)

       {
                case 'a' :
                case 'A' :
                           UTTARA_CENTRAL_HOSPITAL_A();
                           break;

                case 'b' :
                case 'B' :
                           UTTARA_MODERN_HOSPITAL_A();
                           break;

                case 'c' :
                case 'C' :
                           UTTARA_WOMENS_HOSPITALS_A();
                           break;



                default  :
                          {
                            if(x=='\n')
                            {
                                PATIENT();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            UTTARA_A();
                            }
                          }
    }
   }


  void UTTARA_CENTRAL_HOSPITAL_A()
   {

       system (" cls ");
       fflush(stdin);
       FILE *fp;

       char x;
       char edit[SIZE];

       printf("\n Which file do you want to edit or add? \n\n");
       printf(" a. A+  patient    \n");
       printf(" b. A-  patient    \n");
       printf(" c. B+  patient    \n");
       printf(" d. B-  patient    \n");
       printf(" e. O+  patient    \n");
       printf(" f. O-  patient    \n");
       printf(" g. AB+ patient    \n");
       printf(" h. AB- patient  \n\n");

       printf(" want to go back, press enter\n\n");
       printf(" Your chooice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)
       {
         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Uttara central A+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);

                    ADMIN_MENU();
                    break;

         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Uttara central A-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Uttara central B+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Uttara central B-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Uttara central O+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Uttara central O-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Uttara central AB+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Uttara central AB-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;



         default :
                   {
                      if(x=='\n')
                            {
                                UTTARA_A();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            UTTARA_CENTRAL_HOSPITAL_A();
                            }
                   }
       }


    }



    void UTTARA_MODERN_HOSPITAL_A()
   {

       system (" cls ");
       fflush(stdin);
       FILE *fp;

       char x;
       char edit[SIZE];

       printf("\n Which file do you want to edit or add? \n\n");
       printf(" a. A+  patient    \n");
       printf(" b. A-  patient    \n");
       printf(" c. B+  patient    \n");
       printf(" d. B-  patient    \n");
       printf(" e. O+  patient    \n");
       printf(" f. O-  patient    \n");
       printf(" g. AB+ patient    \n");
       printf(" h. AB- patient  \n\n");

       printf(" want to go back, press enter\n\n");
       printf(" Your chooice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)
       {
         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Uttara Modern A+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Uttara Modern A-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Uttara Modern B+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Uttara Modern B-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Uttara Modern O+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Uttara Modern O-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Uttara Modern AB+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Uttara Modern AB-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;



         default :
                   {
                      if(x=='\n')
                            {
                                UTTARA_A();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            UTTARA_MODERN_HOSPITAL_A();
                            }
                   }
       }


    }






    void UTTARA_WOMENS_HOSPITALS_A()
    {

        system (" cls ");
       fflush(stdin);
       FILE *fp;

       char x;
       char edit[SIZE];

       printf("\n Which file do you want to edit or add? \n\n");
       printf(" a. A+  patient    \n");
       printf(" b. A-  patient    \n");
       printf(" c. B+  patient    \n");
       printf(" d. B-  patient    \n");
       printf(" e. O+  patient    \n");
       printf(" f. O-  patient    \n");
       printf(" g. AB+ patient    \n");
       printf(" h. AB- patient  \n\n");

       printf(" want to go back, press enter\n\n");
       printf(" Your chooice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)
       {
         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Uttara women A+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Uttara women A-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Uttara women B+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Uttara women B-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Uttara women O+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Uttara women O-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Uttara women AB+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Uttara women AB-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;



         default :
                   {
                      if(x=='\n')
                            {
                                UTTARA_A();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            UTTARA_WOMENS_HOSPITALS_A();
                            }
                   }
       }




    }


    void BASUNDHARA_A()
    {
        system("cls");
       char x;
       printf("\n Which Hospital do you want to add a new patient? \n\n");

       printf("\n\n====================================================\n");

       printf("\n a. Basundhara Ad-Din Medical College Hospital  \n");
       printf("\n b. Basundhara Eye Hospital                     \n");
       printf("\n c. Apollo Hospital Dhaka                       \n");


       printf("========================================================\n");


       printf(" wanna go back press enter \n\n");

       printf("Your choice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)

       {
                case 'a' :
                case 'A' :
                           BASUNDHARA_AD_DIN_HOSPITAL_A();
                           break;

                case 'b' :
                case 'B' :
                           BASUNDHARA_EYE_HOSPITAL_A();
                           break;

                case 'c' :
                case 'C' :
                           BASUNDHARA_APOLLO_HOSPITAL_A();
                           break;



                default  :
                          {
                            if(x=='\n')
                            {
                                PATIENT();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            BASUNDHARA_A();
                            }
                          }
    }




    }

    void BASUNDHARA_AD_DIN_HOSPITAL_A()
    {

        system (" cls ");
       fflush(stdin);
       FILE *fp;

       char x;
       char edit[SIZE];

       printf("\n Which file do you want to edit or add? \n\n");
       printf(" a. A+  patient    \n");
       printf(" b. A-  patient    \n");
       printf(" c. B+  patient    \n");
       printf(" d. B-  patient    \n");
       printf(" e. O+  patient    \n");
       printf(" f. O-  patient    \n");
       printf(" g. AB+ patient    \n");
       printf(" h. AB- patient  \n\n");

       printf(" want to go back, press enter\n\n");
       printf(" Your chooice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)
       {
         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Basundhara addin A+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Basundhara addin A-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Basundhara addin B+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Basundhara addin B-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Basundhara addin O+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Basundhara addin O-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Basundhara addin AB+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Basundhara addin AB-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;



         default :
                   {
                      if(x=='\n')
                            {
                                BASUNDHARA_A();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            BASUNDHARA_AD_DIN_HOSPITAL_A();
                            }
                   }
       }




    }


 void BASUNDHARA_EYE_HOSPITAL_A()
    {

       system (" cls ");
       fflush(stdin);
       FILE *fp;

       char x;
       char edit[SIZE];

       printf("\n Which file do you want to edit or add? \n\n");
       printf(" a. A+  patient    \n");
       printf(" b. A-  patient    \n");
       printf(" c. B+  patient    \n");
       printf(" d. B-  patient    \n");
       printf(" e. O+  patient    \n");
       printf(" f. O-  patient    \n");
       printf(" g. AB+ patient    \n");
       printf(" h. AB- patient  \n\n");

       printf(" want to go back, press enter\n\n");
       printf(" Your chooice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)
       {
         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Basundhara eye A+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Basundhara eye A-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Basundhara eye B+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Basundhara eye B-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Basundhara eye O+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Basundhara eye O-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Basundhara eye AB+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Basundhara eye AB-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;



         default :
                   {
                      if(x=='\n')
                            {
                                BASUNDHARA_A();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            BASUNDHARA_EYE_HOSPITAL_A();
                            }
                   }
       }




    }





     void BASUNDHARA_APOLLO_HOSPITAL_A()
    {

        system (" cls ");
       fflush(stdin);
       FILE *fp;

       char x;
       char edit[SIZE];

       printf("\n Which file do you want to edit or add? \n\n");
       printf(" a. A+  patient    \n");
       printf(" b. A-  patient    \n");
       printf(" c. B+  patient    \n");
       printf(" d. B-  patient    \n");
       printf(" e. O+  patient    \n");
       printf(" f. O-  patient    \n");
       printf(" g. AB+ patient    \n");
       printf(" h. AB- patient  \n\n");

       printf(" want to go back, press enter\n\n");
       printf(" Your chooice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)
       {
         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Basundhara apollo A+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Basundhara apollo A-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Basundhara apollo B+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Basundhara apollo B-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Basundhara apollo O+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Basundhara apollo O-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Basundhara apollo AB+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Basundhara apollo AB-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;



         default :
                   {
                      if(x=='\n')
                            {
                                BASUNDHARA_A();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            BASUNDHARA_APOLLO_HOSPITAL_A();
                            }
                   }
       }




    }



    void GULSHAN_A()
    {
         system (" cls ");
        char x;
       printf("\n Which Hospital do you want to add a new patient? \n\n");
       printf("\n\n==================================\n");

       printf("\n a. United Hospital                             \n");
       printf("\n b. Shahabuddin Medical College Hospital        \n");
       printf("\n c. Gulshan Mother and Children Clinic Limited  \n");

       printf("\n=============================\n");
       printf("\n want to go back, press enter\n\n");
       printf("Your choice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)

       {
                case 'a' :
                case 'A' :
                           GULSHAN_UNITED_HOSPITAL_A();
                           break;

                case 'b' :
                case 'B' :
                           GULSHAN_SHAHABUDDIN_HOSPITAL_A();
                           break;

                case 'c' :
                case 'C' :
                           GULSHAN_MOTHER_HOSPITAL_A();
                           break;





                default  :
                          {
                            if(x=='\n')
                            {
                                PATIENT();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            GULSHAN_A();
                            }
                          }
    }



    }


    void GULSHAN_UNITED_HOSPITAL_A()
    {

        system (" cls ");
       fflush(stdin);
       FILE *fp;

       char x;
       char edit[SIZE];

       printf("Which file do you want to edit or add? \n\n");
       printf(" a. A+  patient    \n");
       printf(" b. A-  patient    \n");
       printf(" c. B+  patient    \n");
       printf(" d. B-  patient    \n");
       printf(" e. O+  patient    \n");
       printf(" f. O-  patient    \n");
       printf(" g. AB+ patient    \n");
       printf(" h. AB- patient  \n\n");

       printf(" want to go back, press enter\n\n");
       printf(" Your chooice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)
       {
         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Gulshan United A+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Gulshan United A-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Gulshan United B+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Gulshan United B-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Gulshan United O+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Gulshan United O-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Gulshan United AB+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Gulshan United AB-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;



         default :
                   {
                      if(x=='\n')
                            {
                                GULSHAN_A();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            GULSHAN_UNITED_HOSPITAL_A();
                            }
                   }
       }




    }



    void GULSHAN_MOTHER_HOSPITAL_A()
    {

        system (" cls ");
       fflush(stdin);
       FILE *fp;

       char x;
       char edit[SIZE];

       printf("\n Which file do you want to edit or add? \n\n");
       printf(" a. A+  patient    \n");
       printf(" b. A-  patient    \n");
       printf(" c. B+  patient    \n");
       printf(" d. B-  patient    \n");
       printf(" e. O+  patient    \n");
       printf(" f. O-  patient    \n");
       printf(" g. AB+ patient    \n");
       printf(" h. AB- patient  \n\n");

       printf(" want to go back, press enter\n\n");
       printf(" Your chooice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)
       {
         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Gulshan Mother A+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Gulshan Mother A-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Gulshan Mother B+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Gulshan Mother B-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Gulshan Mother O+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Gulshan Mother O-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Gulshan Mother AB+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Gulshan Mother AB-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;



         default :
                   {
                      if(x=='\n')
                            {
                                GULSHAN_A();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            GULSHAN_MOTHER_HOSPITAL_A();
                            }
                   }
       }




    }




    void GULSHAN_SHAHABUDDIN_HOSPITAL_A()
    {

        system (" cls ");
       fflush(stdin);
       FILE *fp;

       char x;
       char edit[SIZE];

       printf("\n Which file do you want to edit or add? \n\n");
       printf(" a. A+  patient    \n");
       printf(" b. A-  patient    \n");
       printf(" c. B+  patient    \n");
       printf(" d. B-  patient    \n");
       printf(" e. O+  patient    \n");
       printf(" f. O-  patient    \n");
       printf(" g. AB+ patient    \n");
       printf(" h. AB- patient  \n\n");

       printf(" want to go back, press enter\n\n");
       printf(" Your chooice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)
       {
         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Gulshan Shahabuddin A+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Gulshan Shahabuddin A-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Gulshan Shahabuddin B+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Gulshan Shahabuddin B-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Gulshan Shahabuddin O+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Gulshan Shahabuddin O-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Gulshan Shahabuddin AB+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Gulshan Shahabuddin AB-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;



         default :
                   {
                      if(x=='\n')
                            {
                                GULSHAN_A();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            GULSHAN_SHAHABUDDIN_HOSPITAL_A();
                            }
                   }
       }




    }






    void DHANMONDI_A()
    {
       system (" cls ");
       char x;
       printf("\n Which Hospital do you want to add a new patient? \n\n");
       printf("\n\n==================================\n");

       printf("\n a. Lab Aid Hospital   \n");
       printf("\n b. Central Hospital Ltd.   \n");
       printf("\n c. IBN Cina Hospital   \n");

       printf("\n====================================\n");
       printf("\n want to go back, press enter\n\n");
       printf("Your choice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)

       {
                case 'a' :
                case 'A' :
                           DHANMONDI_LAB_HOSPITAL_A();
                           break;

                case 'b' :
                case 'B' :
                           DHANMONDI_CENTRAL_A();
                           break;

                case 'c' :
                case 'C' :
                           DHANMONDI_IBNEY_HOSPPITAL_A();
                           break;





                default  :
                          {
                            if(x=='\n')
                            {
                                PATIENT();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            DHANMONDI_A();
                            }
                          }
    }



    }




    void DHANMONDI_LAB_HOSPITAL_A()
    {

        system (" cls ");
       fflush(stdin);
       FILE *fp;

       char x;
       char edit[SIZE];

       printf("\n Which file do you want to edit or add? \n\n");
       printf(" a. A+  patient    \n");
       printf(" b. A-  patient    \n");
       printf(" c. B+  patient    \n");
       printf(" d. B-  patient    \n");
       printf(" e. O+  patient    \n");
       printf(" f. O-  patient    \n");
       printf(" g. AB+ patient    \n");
       printf(" h. AB- patient  \n\n");

       printf(" want to go back, press enter\n\n");
       printf(" Your chooice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)
       {
         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Dhanmondi lab A+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Dhanmondi lab A-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Dhanmondi lab B+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Dhanmondi lab B-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Dhanmondi lab O+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Dhanmondi lab O-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Dhanmondi lab AB+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Dhanmondi lab AB-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;



         default :
                   {
                      if(x=='\n')
                            {
                                DHANMONDI_A();
                            }
                            else
                            {
                            system (" cls ");
                            printf("\n Wrong choice. Choose again.");
                            DHANMONDI_LAB_HOSPITAL_A();
                            }
                   }
       }




    }




     void DHANMONDI_IBNEY_HOSPPITAL_A()
    {

        system (" cls ");
       fflush(stdin);
       FILE *fp;

       char x;
       char edit[SIZE];

       printf("\n Which file do you want to edit or add? \n\n");
       printf(" a. A+  patient    \n");
       printf(" b. A-  patient    \n");
       printf(" c. B+  patient    \n");
       printf(" d. B-  patient    \n");
       printf(" e. O+  patient    \n");
       printf(" f. O-  patient    \n");
       printf(" g. AB+ patient    \n");
       printf(" h. AB- patient  \n\n");

       printf(" want to go back, press enter\n\n");
       printf(" Your chooice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)
       {
         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Dhanmondi ibn A+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Dhanmondi ibn A-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Dhanmondi ibn B+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Dhanmondi ibn B-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Dhanmondi ibn O+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Dhanmondi ibn O-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Dhanmondi ibn AB+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Dhanmondi ibn AB-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;



         default :
                   {
                      if(x=='\n')
                            {
                                DHANMONDI_A();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            DHANMONDI_IBNEY_HOSPPITAL_A();
                            }
                   }
       }




    }





    void DHANMONDI_CENTRAL_A()
    {

        system (" cls ");
       fflush(stdin);
       FILE *fp;

       char x;
       char edit[SIZE];

       printf("\n Which file do you want to edit or add? \n\n");
       printf(" a. A+  patient    \n");
       printf(" b. A-  patient    \n");
       printf(" c. B+  patient    \n");
       printf(" d. B-  patient    \n");
       printf(" e. O+  patient    \n");
       printf(" f. O-  patient    \n");
       printf(" g. AB+ patient    \n");
       printf(" h. AB- patient  \n\n");

       printf(" want to go back, press enter\n\n");
       printf(" Your chooice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)
       {
         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Dhanmondi central A+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Dhanmondi central A-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Dhanmondi central B+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Dhanmondi central B-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Dhanmondi central O+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Dhanmondi central O-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Dhanmondi central AB+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Dhanmondi central AB-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;



         default :
                   {
                      if(x=='\n')
                            {
                                DHANMONDI_A();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            DHANMONDI_CENTRAL_A();
                            }
                   }
       }




    }






    void MIRPUR_A()
    {
        system (" cls ");
       char x;
       printf("\n Which Hospital do you want to add a new patient? \n\n");
       printf("\n\n==================================\n");

       printf("\n a. Mirpur Child Hospital  \n");
       printf("\n b. Galaxy Hospital        \n");
       printf("\n c. Islami Bank Hospital   \n");

       printf("\n====================================\n");
       printf("\n want to go back, press enter\n\n");
       printf("Your choice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)

       {
                case 'a' :
                case 'A' :
                            MIRPUR_CHILD_HOSPITAL_A();
                            break;

                case 'b' :
                case 'B' :
                            MIRPUR_GALAXY_HOSPITAL_A();
                            break;

                case 'c' :
                case 'C' :
                            MIRPUR_ISLAMI_HOSPITAL_A();
                            break;






                default  :
                          {
                            if(x=='\n')
                            {
                                PATIENT();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            MIRPUR_A();
                            }
                          }
    }




    }



    void MIRPUR_CHILD_HOSPITAL_A()
    {

        system (" cls ");
       fflush(stdin);
       FILE *fp;

       char x;
       char edit[SIZE];

       printf("\n Which file do you want to edit or add? \n\n");
       printf(" a. A+  patient    \n");
       printf(" b. A-  patient    \n");
       printf(" c. B+  patient    \n");
       printf(" d. B-  patient    \n");
       printf(" e. O+  patient    \n");
       printf(" f. O-  patient    \n");
       printf(" g. AB+ patient    \n");
       printf(" h. AB- patient  \n\n");

       printf(" want to go back, press enter\n\n");
       printf(" Your chooice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)
       {
         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Mirpur Child Hospital A+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Mirpur Child Hospital A-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Mirpur Child Hospital B+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Mirpur Child Hospital B-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Mirpur Child Hospital O+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Mirpur Child Hospital O-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Mirpur Child Hospital AB+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Mirpur Child Hospital AB-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;



         default :
                   {
                      if(x=='\n')
                            {
                                MIRPUR_A();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            MIRPUR_CHILD_HOSPITAL_A();
                            }
                   }
       }




    }



        void MIRPUR_GALAXY_HOSPITAL_A()
    {

        system (" cls ");
       fflush(stdin);
       FILE *fp;

       char x;
       char edit[SIZE];

       printf("\n Which file do you want to edit or add? \n\n");
       printf(" a. A+  patient    \n");
       printf(" b. A-  patient    \n");
       printf(" c. B+  patient    \n");
       printf(" d. B-  patient    \n");
       printf(" e. O+  patient    \n");
       printf(" f. O-  patient    \n");
       printf(" g. AB+ patient    \n");
       printf(" h. AB- patient  \n\n");

       printf(" want to go back, press enter\n\n");
       printf(" Your chooice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)
       {
         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Mirpur Galaxy Hospital A+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Mirpur Galaxy Hospital A-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Mirpur Galaxy Hospital B+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Mirpur Galaxy Hospital B-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Mirpur Galaxy Hospital O+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Mirpur Galaxy Hospital O-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Mirpur Galaxy Hospital AB+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Mirpur Galaxy Hospital AB-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;



         default :
                   {
                      if(x=='\n')
                            {
                                MIRPUR_A();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            MIRPUR_GALAXY_HOSPITAL_A();
                            }
                   }
       }




    }




    void MIRPUR_ISLAMI_HOSPITAL_A()
    {

        system (" cls ");
       fflush(stdin);
       FILE *fp;

       char x;
       char edit[SIZE];

       printf("\n Which file do you want to edit or add? \n\n");
       printf(" a. A+  patient    \n");
       printf(" b. A-  patient    \n");
       printf(" c. B+  patient    \n");
       printf(" d. B-  patient    \n");
       printf(" e. O+  patient    \n");
       printf(" f. O-  patient    \n");
       printf(" g. AB+ patient    \n");
       printf(" h. AB- patient  \n\n");

       printf(" want to go back, press enter\n\n");
       printf(" Your chooice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)
       {
         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Mirpur Islami Hospital A+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Mirpur Islami Hospital A-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Mirpur Islami Hospital B+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Mirpur Islami Hospital B-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Mirpur Islami Hospital O+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Mirpur Islami Hospital O-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Mirpur Islami Hospital AB+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Mirpur Islami Hospital AB-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;



         default :
                   {
                      if(x=='\n')
                            {
                                MIRPUR_A();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            MIRPUR_ISLAMI_HOSPITAL_A();
                            }
                   }
       }




    }



    void SHAHBAG_A()
    {
       system (" cls ");
       char x;
       printf("\n Which Hospital do you want to add a new patient? \n\n");
       printf("\n\n==================================\n");

       printf("\n a. Bangabandhu Sheikh Mujib Medical University    \n");
       printf("\n b. BIRDEM Hospital   \n");

       printf("\n====================================\n");
       printf("\n want to go back, press enter\n\n");
       printf("Your choice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)

       {
                case 'a' :
                case 'A' :
                           SHAHBAG_BANGOBONDHU_HOSPITAL_A();
                           break;

                case 'b' :
                case 'B' :
                           SHAHBAG_BIRDEM_HOSPITAL_A();
                           break;





                default  :
                          {
                            if(x=='\n')
                            {
                                PATIENT();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            SHAHBAG_A();
                            }
                          }
    }





    }


    void SHAHBAG_BANGOBONDHU_HOSPITAL_A()
    {

        system (" cls ");
       fflush(stdin);
       FILE *fp;

       char x;
       char edit[SIZE];

       printf("\n Which file do you want to edit or add? \n\n");
       printf(" a. A+  patient    \n");
       printf(" b. A-  patient    \n");
       printf(" c. B+  patient    \n");
       printf(" d. B-  patient    \n");
       printf(" e. O+  patient    \n");
       printf(" f. O-  patient    \n");
       printf(" g. AB+ patient    \n");
       printf(" h. AB- patient  \n\n");

       printf(" want to go back, press enter\n\n");
       printf(" Your chooice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)
       {
         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Shahbag mujib A+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Shahbag mujib A-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Shahbag mujib B+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Shahbag mujib B-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Shahbag mujib O+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Shahbag mujib O-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Shahbag mujib AB+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Shahbag mujib AB-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;



         default :
                   {
                      if(x=='\n')
                            {
                                SHAHBAG_A();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            SHAHBAG_BANGOBONDHU_HOSPITAL_A();
                            }
                   }
       }




    }



    void SHAHBAG_BIRDEM_HOSPITAL_A()
    {

        system (" cls ");
       fflush(stdin);
       FILE *fp;

       char x;
       char edit[SIZE];

       printf("\n Which file do you want to edit or add? \n\n");
       printf(" a. A+  patient    \n");
       printf(" b. A-  patient    \n");
       printf(" c. B+  patient    \n");
       printf(" d. B-  patient    \n");
       printf(" e. O+  patient    \n");
       printf(" f. O-  patient    \n");
       printf(" g. AB+ patient    \n");
       printf(" h. AB- patient  \n\n");

       printf(" want to go back, press enter\n\n");
       printf(" Your chooice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)
       {
         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Shahbag Birdem A+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Shahbag Birdem A-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Shahbag Birdem B+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Shahbag Birdem B-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Shahbag Birdem O+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Shahbag Birdem O-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Shahbag Birdem AB+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Shahbag Birdem AB-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;



         default :
                   {
                      if(x=='\n')
                            {
                                SHAHBAG_A();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            SHAHBAG_BIRDEM_HOSPITAL_A();
                            }
                   }
       }




    }



    void SAVAR_A()
    {
        system("cls");
       char x;
       printf("\n Which Hospital do you want to add a new patient? \n\n");

       printf("\n\n =============================================================\n");

       printf("\n a. Anam Medical College & Hospital   \n");
       printf("\n b. Prime Hospital   \n");
       printf("\n c. Savar General Hospital   \n\n");

       printf("\n =============================================================\n\n");

       printf(" wanna go back press enter \n\n");

       printf("Your choice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)

       {
                case 'a' :
                case 'A' :
                           SAVAR_ANAM_HOSPITAL_A();
                           break;

                case 'b' :
                case 'B' :
                           SAVAR_PRIME_HOSPITAL_A();
                           break;

                case 'c' :
                case 'C' :
                           SAVAR_GENERAL_HOSPITAL_A();
                           break;



                default  :
                          {
                            if(x=='\n')
                            {
                                PATIENT();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            SAVAR_A();
                            }
                          }
    }



    }



    void SAVAR_ANAM_HOSPITAL_A()
    {

        system (" cls ");
       fflush(stdin);
       FILE *fp;

       char x;
       char edit[SIZE];

       printf("\n Which file do you want to edit or add? \n\n");
       printf(" a. A+  patient    \n");
       printf(" b. A-  patient    \n");
       printf(" c. B+  patient    \n");
       printf(" d. B-  patient    \n");
       printf(" e. O+  patient    \n");
       printf(" f. O-  patient    \n");
       printf(" g. AB+ patient    \n");
       printf(" h. AB- patient  \n\n");

       printf(" want to go back, press enter\n\n");
       printf(" Your chooice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)
       {
         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Savar Anam Hospital A+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Savar Anam Hospital A-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Savar Anam Hospital B+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Savar Anam Hospital B-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Savar Anam Hospital O+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Savar Anam Hospital O-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Savar Anam Hospital AB+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Savar Anam Hospital AB-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;



         default :
                   {
                      if(x=='\n')
                            {
                                SAVAR_A();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            SAVAR_ANAM_HOSPITAL_A();
                            }
                   }
       }




    }



   void SAVAR_GENERAL_HOSPITAL_A()
    {

        system (" cls ");
       fflush(stdin);
       FILE *fp;

       char x;
       char edit[SIZE];

       printf("\n Which file do you want to edit or add? \n\n");
       printf(" a. A+  patient    \n");
       printf(" b. A-  patient    \n");
       printf(" c. B+  patient    \n");
       printf(" d. B-  patient    \n");
       printf(" e. O+  patient    \n");
       printf(" f. O-  patient    \n");
       printf(" g. AB+ patient    \n");
       printf(" h. AB- patient  \n\n");

       printf(" want to go back, press enter\n\n");
       printf(" Your chooice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)
       {
         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Savar General Hospital A+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Savar General Hospital A-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Savar General Hospital B+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Savar General Hospital B-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Savar General Hospital O+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Savar General Hospital O-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Savar General Hospital AB+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Savar General Hospital AB-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;



         default :
                   {
                      if(x=='\n')
                            {
                                SAVAR_A();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            SAVAR_GENERAL_HOSPITAL_A();
                            }
                   }
       }




    }




        void SAVAR_PRIME_HOSPITAL_A()
    {

        system (" cls ");
       fflush(stdin);
       FILE *fp;

       char x;
       char edit[SIZE];

       printf("\n Which file do you want to edit or add? \n\n");
       printf(" a. A+  patient    \n");
       printf(" b. A-  patient    \n");
       printf(" c. B+  patient    \n");
       printf(" d. B-  patient    \n");
       printf(" e. O+  patient    \n");
       printf(" f. O-  patient    \n");
       printf(" g. AB+ patient    \n");
       printf(" h. AB- patient  \n\n");

       printf(" want to go back, press enter\n\n");
       printf(" Your chooice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)
       {
         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Savar Prime Hospital A+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Savar Prime Hospital A-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Savar Prime Hospital B+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Savar Prime Hospital B-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Savar Prime Hospital O+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Savar Prime Hospital O-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Savar Prime Hospital AB+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Savar Prime Hospital AB-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;



         default :
                   {
                      if(x=='\n')
                            {
                                SAVAR_A();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            SAVAR_PRIME_HOSPITAL_A();
                            }
                   }
       }




    }


    void MOTIJHEEL_A()
    {
        system("cls");
       char x;
       printf("\n Which Hospital do you want to add a new patient? \n\n");

       printf("\n\n =============================================================\n");

       printf("\n a. Islami Bank Hospital    \n");
       printf("\n b. Pan-Pacific General Hospital  \n");
       printf("\n c. The Barakah General Hospital Limited   \n");

       printf("\n =============================================================\n\n");

       printf(" wanna go back press enter \n\n");

       printf("Your choice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)

       {
                case 'a' :
                case 'A' :
                           MOTIJHEEL_ISLAM_HOSPITAL_A();
                           break;

                case 'b' :
                case 'B' :
                           MOTIJHEEL_PEN_HOSPITAL_A();
                           break;

                case 'c' :
                case 'C' :
                           MOTIJHEEL_BARAKAH_HOSPITAL_A();
                           break;




                default  :
                          {
                            if(x=='\n')
                            {
                                PATIENT();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            MOTIJHEEL_A();
                            }
                          }
    }





    }


        void MOTIJHEEL_ISLAM_HOSPITAL_A()
    {

        system (" cls ");
       fflush(stdin);
       FILE *fp;

       char x;
       char edit[SIZE];

       printf("\n Which file do you want to edit or add? \n\n");
       printf(" a. A+  patient    \n");
       printf(" b. A-  patient    \n");
       printf(" c. B+  patient    \n");
       printf(" d. B-  patient    \n");
       printf(" e. O+  patient    \n");
       printf(" f. O-  patient    \n");
       printf(" g. AB+ patient    \n");
       printf(" h. AB- patient  \n\n");

       printf(" want to go back, press enter\n\n");
       printf(" Your chooice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)
       {
         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Motijheel Islami A+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Motijheel Islami A-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Motijheel Islami B+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Motijheel Islami B-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Motijheel Islami O+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Motijheel Islami O-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Motijheel Islami AB+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Motijheel Islami AB-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;



         default :
                   {
                      if(x=='\n')
                            {
                                MOTIJHEEL_A();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            MOTIJHEEL_ISLAM_HOSPITAL_A();
                            }
                   }
       }




    }



    void MOTIJHEEL_PEN_HOSPITAL_A()
    {

        system (" cls ");
       fflush(stdin);
       FILE *fp;

       char x;
       char edit[SIZE];

       printf("\n Which file do you want to edit or add? \n\n");
       printf(" a. A+  patient    \n");
       printf(" b. A-  patient    \n");
       printf(" c. B+  patient    \n");
       printf(" d. B-  patient    \n");
       printf(" e. O+  patient    \n");
       printf(" f. O-  patient    \n");
       printf(" g. AB+ patient    \n");
       printf(" h. AB- patient  \n\n");

       printf(" want to go back, press enter\n\n");
       printf(" Your chooice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)
       {
         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Motijheel Pan A+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Motijheel Pan A-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Motijheel Pan B+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Motijheel Pan B-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Motijheel Pan O+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Motijheel Pan O-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Motijheel Pan AB+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Motijheel Pan AB-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;



         default :
                   {
                      if(x=='\n')
                            {
                                MOTIJHEEL_A();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            MOTIJHEEL_PEN_HOSPITAL_A();
                            }
                   }
       }




    }



        void MOTIJHEEL_BARAKAH_HOSPITAL_A()
    {

       system (" cls ");
       fflush(stdin);
       FILE *fp;

       char x;
       char edit[SIZE];

       printf("\n Which file do you want to edit or add? \n\n");
       printf(" a. A+  patient    \n");
       printf(" b. A-  patient    \n");
       printf(" c. B+  patient    \n");
       printf(" d. B-  patient    \n");
       printf(" e. O+  patient    \n");
       printf(" f. O-  patient    \n");
       printf(" g. AB+ patient    \n");
       printf(" h. AB- patient  \n\n");

       printf(" want to go back, press enter\n\n");
       printf(" Your chooice : ");
       scanf("%c",&x);
       fflush(stdin);

       switch(x)
       {
         case 'a' :
         case 'A' :
                    system (" cls ");
                    fp=fopen("Motijheel Barakah A+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'b' :
         case 'B' :
                    system (" cls ");
                    fp=fopen("Motijheel Barakah A-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }

                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'c' :
         case 'C' :
                    system (" cls ");
                    fp=fopen("Motijheel Barakah B+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;

         case 'd' :
         case 'D' :
                    system (" cls ");
                    fp=fopen("Motijheel Barakah B-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'e' :
         case 'E' :
                    system (" cls ");
                    fp=fopen("Motijheel Barakah O+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'f' :
         case 'F' :
                    system (" cls ");
                    fp=fopen("Motijheel Barakah O-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'g' :
         case 'G' :
                    system (" cls ");
                    fp=fopen("Motijheel Barakah AB+.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    ADMIN_MENU();
                    break;


         case 'h' :
         case 'H' :
                    system (" cls ");
                    fp=fopen("Motijheel Barakah AB-.txt","a");
                    if(fp==NULL)
                  {
                    printf("\nFile not opened\n");
                  }
                    else

                  {
                    fflush(stdin);
                    printf("\nEdit:\n\n");
                    printf("\n Patient number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n\n Name : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nBlood Group : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nAge : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\nFamily number : ");
                    gets(edit);
                    fprintf(fp,"\n%s ",edit);
                    printf("\n");
                    printf("\nEdited\n");
                  }
                    fclose(fp);
                    getch();
                    ADMIN_MENU();
                    break;



         default :
                   {
                      if(x=='\n')
                            {
                                MOTIJHEEL_A();
                            }
                            else
                            {
                            system (" cls ");
                            printf("Wrong choice. Choose again.");
                            MOTIJHEEL_BARAKAH_HOSPITAL_A();
                            }
                   }
       }




    }





    void PROGRAMMER()
{
    system (" cls ");
    struct NSU programmer[3] = {{"Md. Asif Uzzaman Chowdhury","North South University", 1632090042,"CSE" ,"ECE"}, {"Siam Ibne Zamil","North South University", 1631700642, "CSE" ,"ECE"}, {"Mahir Hasan","North South University", 1712314042,"CSE" ,"ECE"}};
    int x;
    printf("\n\n----------------------About Programmer-------------------------\n\n");
    for(x=0;x<3;x++)
{   printf(" Programmer %d:",(x+1));
    printf("\n Name of the Programmer   : %s",programmer[x].name);
    printf("\n Name of the University   : %s",programmer[x].university_name);
    printf("\n Student ID               : %d",programmer[x].ID);
    printf("\n Name of the Major subject: %s",programmer[x].course);
    printf("\n Name of the Department   : %s",programmer[x].depertment);
    printf ("\n\n\n");


}
   printf("Press any key to continue");
   getch();
   MAIN_MENU();
}



void EXIT()
   {
     system (" cls ");
     printf("\n\n\n                                                                                     \n\n\n");
     printf("\n\n=========================================================================================\n  ");
     printf("\n                             Thank's for using our program "                                    );
     printf("\n                                  Have a Good day :) "                                          );
     printf("\n\n=========================================================================================\n\n");
     printf("\n\n\n                                                                                 \n\n\n\n\n");
     getch();
   }


void EXIT_E()
   {
       system (" cls ");
       char x;
       printf("                      \n\n");
       printf(" a. Back to Main menu   \n");
       printf(" b. Back to Log in menu \n");
       printf(" c. Exit                \n");
       printf("\n Your choice: ");
       scanf("%c",&x);
       fflush(stdin);

       switch (x)

       {
                  case 'a' :
                  case 'A' :
                           USER();
                           break;

                  case 'b' :
                  case 'B' :
                           MAIN_MENU();
                           break;

                  case 'c' :
                  case 'C' :
                           EXIT();
                           break;

                 default :
                          {
                            system (" cls ");
                            printf("Wrong choice. choose again.\n\n");
                            EXIT_E();

                          }

      }
   }

   void EX()
 {
       system (" cls ");
       char x;
       printf("                        \n\n");
       printf(" a. Back to Log in menu   \n");
       printf(" b. Exit                  \n");
       printf("\n Your choice: ");
       scanf("%c",&x);
       fflush(stdin);

       switch (x)

       {


                  case 'a' :
                  case 'A' :
                             MAIN_MENU();
                             break;

                  case 'b' :
                  case 'B' :
                             EXIT();
                             break;

                  default:
                           {
                             system (" cls ");
                             printf(" Wrong choice. Please choose again.\n\n");
                             EX();

                           }

      }
}
