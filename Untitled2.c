#include<stdio.h>
#include<stdlib.h>

int learn();
int video_learning();
void practice();
void test();

int system();


int main()
{
    int choose;
    printf("    ------------------------------------------------------------\n");
    printf("-----------|| WELCOME TO DATA STRUCTURE LEARNING PROGRAM ||-----------\n");
    printf("    ------------------------------------------------------------\n\n");

    while(1)
    {
        printf("This Data Structure Learning contains:\n");
        printf("1.learn\n2.Video Learning\n3.test\n4.practice\n5.Exit\n");
        printf("What would you like to prefer?\t");
        scanf("%d",&choose);
        switch(choose)
        {
        case 1:
            learn();
            break;

        case 2:
            video_learning();
            break;

        case 3:
            test();
            break;

        case 4:
            practice();
            break;

        case 5:
            printf("Exit\n");
            return 0;

        default:
            printf("Please enter appropriate option\n");
        }
    }
}
int learn()
{
    int f,r;
    printf("   ---------------------------------------------------------\n");
    printf("--------------||  WELCOME TO LEARN SECTION  ||--------------\n");
    printf("   ---------------------------------------------------------\n");
    begin:
    printf("\n---------INDEX---------\n");
    printf("1.Searching\n2.Sorting\n3.Stack\n4.Queue\n5.Linked List\n6.Tree\n7.Graph\n8.Exit\n");
    printf("Please enter the concept no. for learning:\t");
    scanf("%d",&f);
    printf("The concept chosen for learning is:");
    switch(f)
    {
    case 1:
        {
            printf("\t\t\tSearching\n");
            char str[2000];
            FILE *fp=NULL;
            fp=fopen("Searching_Learn.txt","r");
            if(fp==NULL)
            {
                printf("The file doesn't exist\n");
                exit(1);
            }
            while(!feof(fp))
            {
                fgets(str, 2000 , fp);
                printf("%s",str);
            }
            fclose(fp);
            break;
        }
    case 2:
        {
            printf("\t\t\tSorting\n");
            char str[20000];
            FILE *fp=NULL;
            fp=fopen("Sorting_Learn.txt","r");
            if(fp==NULL)
            {
                printf("The file doesn't exist\n");
                exit(1);
            }

            while(!feof(fp))
            {
                fgets(str, 20000 , fp);
                printf("%s",str);
            }
            fclose(fp);
            break;
        }
    case 3:
        {
            printf("\t\t\tStack\n");
            char str[2000];
            FILE *fp=NULL;
            fp=fopen("Stack_Learn.txt","r");
            if(fp==NULL)
            {
                printf("The file doesn't exist\n");
                exit(1);
            }

            while(!feof(fp))
            {
                fgets(str, 2000 , fp);
                printf("%s",str);
            }
            fclose(fp);
            break;
        }
    case 4:
        {
            printf("\t\t\tQueue\n");
            char str[2000];
            FILE *fp=NULL;
            fp=fopen("Queue_Learn.txt","r");
            if(fp==NULL)
            {
                printf("The file doesn't exist\n");
                exit(1);
            }
            while(!feof(fp))
            {
                fgets(str, 2000 , fp);
                printf("%s",str);
            }
            fclose(fp);
            break;
        }
    case 5:
        {
            printf("\t\t\tLinklist\n");
            char str[2000];
            FILE *fp=NULL;
            fp=fopen("Linked_list.txt","r");
            if(fp==NULL)
            {
                printf("The file doesn't exist\n");
                exit(1);
            }
            while(!feof(fp))
            {
                fgets(str, 2000 , fp);
                printf("%s",str);
            }
            fclose(fp);
            break;
        }
    case 6:
        {
            printf("\t\t\tTree\n");
            char str[2000];
            FILE *fp=NULL;
            fp=fopen("Tree.txt","r");
            if(fp==NULL)
            {
                printf("The file doesn't exist\n");
                exit(1);
            }
            while(!feof(fp))
            {
                fgets(str, 2000 , fp);
                printf("%s",str);
            }
            fclose(fp);
            break;
        }
    case 7:
        {
            printf("\t\t\tGraph\n");
            char str[2000];
            FILE *fp=NULL;
            fp=fopen("Graph.txt","r");
            if(fp==NULL)
            {
                printf("The file doesn't exist\n");
                exit(1);
            }
            while(!feof(fp))
            {
                fgets(str, 2000 , fp);
                printf("%s",str);
            }
            fclose(fp);
            break;
        }
    case 8:
        {
            printf("Exit\n");
            return 0;
        }
    default:
        {
            printf("Please enter appropriate option.\n");
        }
    }
    printf("\n\nDo you want to learn any another concept?\t [ y / n ]\n");
    fflush(stdin);
    scanf("%c",&r);
    if(r=='y' || r=='Y')
    {
        printf("\n\n");
        goto begin;
    }
    else if(r=='n' || r=='N')
    {
        printf("Hope you learned well.\n\n");
    }
    else
    {
        printf("Please enter appropriate key\n");
    }
    return 0;
}

int video_learning()
{
    int i;
    char t;
    printf("   ---------------------------------------------------------\n");
    printf("--------------||  WELCOME TO VEDIO LEARNING SECTION  ||--------------\n");
    printf("   ---------------------------------------------------------\n");
    start:
    printf("\n---------INDEX---------\n");
    printf("1.Searching\n2.Sorting\n3.Stack\n4.Queue\n5.Linked List\n6.Tree\n7.Graph\n8.Exit\n");
    printf("Please enter the concept no. for video learning:\t");
    scanf("%d",&i);

    switch(i)
    {
        case 1:{
            system("start https://www.youtube.com/watch?v=VL03KD-RxZc");
            break;
        }

        case 2:{
            system("start https://www.youtube.com/playlist?list=PL2aHrV9pFqNS79ZKnGLw-RG5gH01bcjRZ");
            break;
        }

        case 3:{
            system("start https://www.youtube.com/watch?v=HcB1P9sJZB4");
            break;
        }

        case 4:{
            system("start https://www.youtube.com/watch?v=toRJakeYIKA");
            break;
        }

        case 5:{
            system("start https://www.youtube.com/watch?v=F8AbOfQwl1c");
            break;
        }

        case 6:{
            system("start https://www.youtube.com/watch?v=9oTV7fDEaCY");
            break;
        }

        case 7:{
            system("start  https://www.youtube.com/watch?v=bvWVs0tJUOY&t=286s");
            break;
        }

        case 8:{
            printf("Exit\n");
            return 0;
        }
        default:
        {
            printf("Please enter the appropriate option\n");
        }
    }

    printf("\n\nDo you want to learn any another concept?\t [ y / n ]\n");
    fflush(stdin);
    scanf("%c",&t);
    if(t=='y' || t=='Y')
    {
        printf("\n\n");
        goto start;
    }
    else if(t=='n' || t=='N')
    {
        printf("Hope you learned well.\n\n");
    }
    else
    {
        printf("Please enter appropriate key\n");
    }
    return 0;

}
attemptagain(int score)
{
    char b;
    if(score>=3)
    {
        printf("You are Pass.\n");
        here1:
        printf("Do you want to the give test again ? [ y/n ]\n");
        fflush(stdin);
        scanf("%c",&b);
        if(b=='y' || b=='Y')
        {
            practice();
        }
        else if(b=='n' || b=='N')
        {
            printf("Thank you for your attempt\n\n");
        }
        else
        {
            printf("Please enter appropriate key\n");
            goto here1;
        }
    }
    else
    {
        printf("You are fail.\n");
        here2:
        printf("Do you want to give the test again ? [ y/n ]\n");
        fflush(stdin);
        scanf("%c",&b);
        if(b=='y' || b=='Y')
        {
            practice();
        }
        else if(b=='n' || b=='N')
        {
            printf("Thank you for your attempt\n\n");
        }
        else
        {
            printf("Please enter appropriate key\n");
            goto here2;
        }
    }
}
void instruct()
{
    printf("   ---------------------------------------------------------\n");
    printf("       ------|    Instructions to be followed    |------\n");
    printf("---------------------------------------------------------------\n\n");
    printf("1. The test contains total 5 questions.\n");
    printf("2. Enter the option of your answer- 1   2   3   4  format\n");
    printf("3. You will be given 1 mark for each correct answer.\n");
    printf("4. No negative marking will be considered.\n");
    printf("5. The passing marks are >=3.\n\n");
    printf("The concept you have entered for practice test is: \n");
}
void practice()
{
    int ch;
    int n;
    printf("   ---------------------------------------------------------\n");
    printf("--------------||  WELCOME TO PRACTICE SECTION  ||--------------\n");
    printf("   ---------------------------------------------------------\n");
    printf("\n---------INDEX---------\n");
    printf("1.Searching\n2.Sorting\n3.Stack\n4.Queue\n5.Linked List\n6.Tree\n7.Graph\n8.Back\n");
    printf("Please enter the concept no. for test:\t");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        {
            instruct();
            printf("\t\t\t Searching\n");
            winput:
            printf("Please enter ' 1 ' to start the test.\n");
            scanf("%d",&n);
            printf("\n");
            if( n == 1)
            {
                    FILE *fp=NULL;
                    char str[100];
                    int i,j,k;
                    int score=0;

                    int data[5];
                    fp=fopen("Searching_Quest.txt","r");
                    if(fp==NULL)
                    {
                        printf("The file doesn't exist.\n");
                        exit(1);
                    }
                    for(i=1;i<=5;i++)
                    {
                        fgets( str , 100 , fp );
                        printf("%s",str);
                        fgets( str , 100 , fp );
                        printf("%s",str);
                        fgets( str , 100 , fp );
                        printf("%s",str);
                        fgets( str , 100 , fp );
                        printf("%s",str);
                        fgets( str , 100 , fp );
                        printf("%s",str);
                        int opt[5]={4,3,3,2,3};
                        static j=0;
                        printf("\nEnter your option: ");
                        scanf("%d",&data[j]);
                        if(opt[j]==data[j])
                        {
                            printf("[CORRECT]\n");
                            printf("\n");
                            score=score+1;
                        }
                        /*else if(data[j]>4)
                        {
                            printf("Please enter appropriate key");
                            goto winput;
                        }*/
                        else
                        {
                            printf("Your answer is wrong\n");
                            printf("\n");
                        }
                        j++;
                    }
                    printf("Your score is: %d\n",score);
                    attemptagain(score);
                    fclose(fp);
            }
            else
            {
                printf("You have entered wrong input. Please read the instructions neatly.\n");
                goto winput;
            }
            break;
        }
    case 2:
        {
            instruct();
            printf("\t\t\t Sorting\n");
            printf("Please enter ' 1 ' to start the test.\n");
            scanf("%d",&n);
            printf("\n");
            if( n == 1)
            {
                FILE *fp=NULL;
                char str[100];
                int i,j,k;
                int score=0;

                int data[5];
                fp=fopen("Sorting_Quest.txt","r");
                if(fp==NULL)
                {
                    printf("The file doesn't exist.\n");
                    exit(1);
                }
                for(i=1;i<=5;i++)
                {
                    fgets( str , 100 , fp );
                    printf("%s",str);
                    fgets( str , 100 , fp );
                    printf("%s",str);
                    fgets( str , 100 , fp );
                    printf("%s",str);
                    fgets( str , 100 , fp );
                    printf("%s",str);
                    fgets( str , 100 , fp );
                    printf("%s",str);
                    int opt[5]={3,1,1,4,2};
                    static j=0;
                    printf("\nEnter your option: ");
                    scanf("%d",&data[j]);
                    if(opt[j]==data[j])
                    {
                        printf("[CORRECT]\n");
                        printf("\n");
                        score=score+1;
                    }
                    else
                    {
                        printf("Your answer is wrong\n");
                        printf("\n");
                    }
                    j++;
                }
                printf("Your score is: %d\n",score);
                attemptagain(score);
                fclose(fp);
            }
            else
            {
                printf("You have entered wrong input. Please read the instructions neatly.\n");
                goto winput;
            }
            break;
        }
    case 3:
        {
            instruct();
            printf("\t\t\t Stack\n");
            printf("Please enter ' 1 ' to start the test.\n");
            scanf("%d",&n);
            printf("\n");
            if( n == 1)
            {
                FILE *fp=NULL;
                char str[150];
                int i,j,k;
                int score=0;
                int data[5];
                fp=fopen("Stack_Quest.txt","r");
                if(fp==NULL)
                {
                    printf("The file doesn't exist.\n");
                    exit(1);
                }
                for(i=1;i<=5;i++)
                {
                    fgets( str , 150 , fp );
                    printf("%s",str);
                    fgets( str , 150 , fp );
                    printf("%s",str);
                    fgets( str , 150 , fp );
                    printf("%s",str);
                    fgets( str , 150 , fp );
                    printf("%s",str);
                    fgets( str , 150 , fp );
                    printf("%s",str);
                    int opt[5]={1,2,1,2,1};
                    static j=0;
                    printf("\nEnter your option: ");
                    scanf("%d",&data[j]);
                    if(opt[j]==data[j])
                    {
                        printf("[CORRECT]\n");
                        printf("\n");
                        score=score+1;
                    }
                    else
                    {
                        printf("Your answer is wrong\n");
                        printf("\n");
                    }
                    j++;
                }
                printf("Your score is: %d\n",score);
                attemptagain(score);
                fclose(fp);
            }
            else
            {
                printf("You have entered wrong input. Please read the instructions neatly.\n");
                goto winput;
            }
            break;
        }
        case 4:
        {
            instruct();
            printf("\t\t\t Queue\n");
            printf("Please enter ' 1 ' to start the test.\n");
            scanf("%d",&n);
            printf("\n");
            if( n == 1)
            {
                FILE *fp=NULL;
                char str[120];
                int i,j,k;
                int score=0;
                int data[5];
                fp=fopen("Queue_Quest.txt","r");
                if(fp==NULL)
                {
                    printf("The file doesn't exist.\n");
                    exit(1);
                }
                for(i=1;i<=5;i++)
                {
                    fgets( str , 120 , fp );
                    printf("%s",str);
                    fgets( str , 120 , fp );
                    printf("%s",str);
                    fgets( str , 120 , fp );
                    printf("%s",str);
                    fgets( str , 120 , fp );
                    printf("%s",str);
                    fgets( str , 120 , fp );
                    printf("%s",str);
                    int opt[5]={1,2,1,2,1};
                    static j=0;
                    printf("\nEnter your option: ");
                    scanf("%d",&data[j]);
                    if(opt[j]==data[j])
                    {
                        printf("[CORRECT]\n");
                        printf("\n");
                        score=score+1;
                    }
                    else
                    {
                        printf("Your answer is wrong\n");
                        printf("\n");
                    }
                    j++;
                }
                printf("Your score is: %d\n",score);
                attemptagain(score);
                fclose(fp);
            }
            else
            {
                printf("You have entered wrong input. Please read the instructions neatly.\n");
                goto winput;
            }
            break;
        }
        case 5:
        {
            instruct();
            printf("\t\t\t Linked List\n");
            printf("Please enter ' 1 ' to start the test.\n");
            scanf("%d",&n);
            printf("\n");
            if( n == 1)
            {
                FILE *fp=NULL;
                char str[140];
                int i,j,k;
                int score=0;

                int data[5];
                fp=fopen("LinkedL_Quest.txt","r");
                if(fp==NULL)
                {
                    printf("The file doesn't exist.\n");
                    exit(1);
                }
                for(i=1;i<=5;i++)
                {
                    fgets( str , 140 , fp );
                    printf("%s",str);
                    fgets( str , 140 , fp );
                    printf("%s",str);
                    fgets( str , 140 , fp );
                    printf("%s",str);
                    fgets( str , 140 , fp );
                    printf("%s",str);
                    fgets( str , 140 , fp );
                    printf("%s",str);
                    int opt[5]={1,2,1,2,1};
                    static j=0;
                    printf("\nEnter your option: ");
                    scanf("%d",&data[j]);
                    if(opt[j]==data[j])
                    {
                        printf("[CORRECT]\n");
                        printf("\n");
                        score=score+1;
                    }
                    else
                    {
                        printf("Your answer is wrong\n");
                        printf("\n");
                    }
                    j++;
                }
                printf("Your score is: %d\n",score);
                attemptagain(score);
                fclose(fp);
            }
            else
            {
                printf("You have entered wrong input. Please read the instructions neatly.\n");
                goto winput;
            }
            break;
        }
        case 6:
        {
            instruct();
            printf("\t\t\t Tree\n");
            printf("Please enter ' 1 ' to start the test.\n");
            scanf("%d",&n);
            printf("\n");
            if( n == 1)
            {
                FILE *fp=NULL;
                char str[100];
                int i,j,k;
                int score=0;
                int data[5];
                fp=fopen("Tree_Quest.txt","r");
                if(fp==NULL)
                {
                    printf("The file doesn't exist.\n");
                    exit(1);
                }
                for(i=1;i<=5;i++)
                {
                    fgets( str , 100 , fp );
                    printf("%s",str);
                    fgets( str , 100 , fp );
                    printf("%s",str);
                    fgets( str , 100 , fp );
                    printf("%s",str);
                    fgets( str , 100 , fp );
                    printf("%s",str);
                    fgets( str , 100 , fp );
                    printf("%s",str);
                    int opt[5]={2,1,2,3,4};
                    static j=0;
                    printf("\nEnter your option: ");
                    scanf("%d",&data[j]);
                    if(opt[j]==data[j])
                    {
                        printf("[CORRECT]\n");
                        printf("\n");
                        score=score+1;
                    }
                    else
                    {
                        printf("Your answer is wrong\n");
                        printf("\n");
                    }
                    j++;
                }
                printf("Your score is: %d\n",score);
                attemptagain(score);
                fclose(fp);
            }
            else
            {
                printf("You have entered wrong input. Please read the instructions neatly.\n");
                goto winput;
            }
            break;
        }
        case 7:
        {
            instruct();
            printf("\t\t\t Graph\n");
            printf("Please enter ' 1 ' to start the test.\n");
            scanf("%d",&n);
            printf("\n");
            if( n == 1)
            {
                FILE *fp=NULL;
                char str[100];
                int i,j,k;
                int score=0;
                int data[5];
                fp=fopen("Graph_Quest.txt","r");
                if(fp==NULL)
                {
                    printf("The file doesn't exist.\n");
                    exit(1);
                }
                for(i=1;i<=5;i++)
                {
                    fgets( str , 100 , fp );
                    printf("%s",str);
                    fgets( str , 100 , fp );
                    printf("%s",str);
                    fgets( str , 100 , fp );
                    printf("%s",str);
                    fgets( str , 100 , fp );
                    printf("%s",str);
                    fgets( str , 100 , fp );
                    printf("%s",str);
                    int opt[5]={1,2,1,2,1};
                    static j=0;
                    printf("\nEnter your option: ");
                    scanf("%d",&data[j]);
                    if(opt[j]==data[j])
                    {
                        printf("[CORRECT]\n");
                        printf("\n");
                        score=score+1;
                    }
                    else
                    {
                        printf("Your answer is wrong\n");
                        printf("\n");
                    }
                    j++;
                }
                printf("Your score is: %d\n",score);
                attemptagain(score);
                fclose(fp);
            }
            else
            {
                printf("You have entered wrong input. Please read the instructions neatly.\n");
                goto winput;
            }
            break;
        }
        case 8:
        {
            printf("\n");
            return 0;
        }
    }
}
attemptagain2(int score)
{
    char b;
    if(score>=6)
    {
        printf("You are Pass.\n");
        here3:
        printf("Do you give test again ? [ y/n ]\n");
        fflush(stdin);
        scanf("%c",&b);
        if(b=='y' || b=='Y')
        {
            test();
        }
        else if(b=='n' || b=='N')
        {
         printf("Thank you for your attempt\n\n");
        }
        else
        {
             printf("Please enter appropriate key\n");
             goto here3;
        }
    }
    else
    {
        printf("You are fail.\n");
        here4:
        printf("Do you want to give test again ? [ y/n ]\n");
        fflush(stdin);
        scanf("%c",&b);
        if(b=='y' || b=='y')
        {
            test();
        }
        else if(b=='n' || b=='N')
        {
            printf("Thank you for your attempt.\n\n");
        }
        else
        {
             printf("Please enter appropriate key\n");
             goto here4;
        }
    }
}
void instruct2()
{
    printf("   ---------------------------------------------------------\n");
    printf("       ------|    Instructions to be followed    |------\n");
    printf("---------------------------------------------------------------\n\n");
    printf("1. The test contains total 10 questions.\n");
    printf("2. Enter the option of your answer- 1   2   3 \n");
    printf("3. You will be given 1 mark for each correct answer.\n");
    printf("4. No negative marking will be considered.\n");
    printf("5. The passing marks are >=3.\n\n");
    printf("The difficulty mode chosen by you is: \n");
}
void test()
{
    int s,n;
    printf("   ---------------------------------------------------------\n");
    printf("--------------||  WELCOME TO TEST SECTION  ||--------------\n");
    printf("   ---------------------------------------------------------\n\n");
    printf("The difficulty modes:\n");
    printf("1.EASY\n2.HARD\n3.EXIT\n");
    printf("Enter the mode number for test\t");
    scanf("%d",&s);
    switch(s)
    {
    case 1:
        {
            printf("\t\t\t EASY\n");
            instruct2();
            fromhere:
            printf("Please enter ' 1 ' to start the test.\n");
            scanf("%d",&n);
            printf("\n");
            if( n == 1)
            {
                FILE *fp=NULL;
                char str[140];
                int i,j,k;
                int score=0;
                int data[10];
                fp=fopen("Easy_Quest.txt","r");
                if(fp==NULL)
                {
                    printf("The file doesn't exist.\n");
                    exit(1);
                }
                for(i=1;i<=10;i++)
                {
                    fgets( str , 140 , fp );
                    printf("%s",str);
                    fgets( str , 140 , fp );
                    printf("%s",str);
                    fgets( str , 140 , fp );
                    printf("%s",str);
                    fgets( str , 140 , fp );
                    printf("%s",str);
                    fgets( str , 140 , fp );
                    printf("%s",str);
                    int opt[10]={1,2,1,3,3,4,1,1,1,2};
                    static j=0;
                    printf("Enter your option: ");
                    scanf("%d",&data[j]);
                    if(opt[j]==data[j])
                    {
                        printf("[CORRECT]\n");
                        printf("\n");
                        score=score+1;
                    }
                    else
                    {
                        printf("Your answer is wrong\n");
                        printf("\n");
                    }
                    j++;
                }
                printf("Your score is: %d\n",score);
                attemptagain2(score);
                fclose(fp);
            }
            else
            {
                printf("You have entered wrong input. Please read the instructions neatly.\n");
                goto fromhere;
            }
            break;
        }
    case 2:
        {

            printf("\t\t\t HARD\n");
            instruct2();
            printf("Please enter ' 1 ' to start the test.\n");
            scanf("%d",&n);
            printf("\n");
            if( n == 1)
            {
                FILE *fp=NULL;
                char str[140];
                int i,j,k;
                int score=0;
                int data[10];
                fp=fopen("Hard_Quest.txt","r");
                if(fp==NULL)
                {
                    printf("The file doesn't exist.\n");
                    exit(1);
                }
                for(i=1;i<=10;i++)
                {
                    fgets( str , 140 , fp );
                    printf("%s",str);
                    fgets( str , 140 , fp );
                    printf("%s",str);
                    fgets( str , 140 , fp );
                    printf("%s",str);
                    fgets( str , 140 , fp );
                    printf("%s",str);
                    fgets( str , 140 , fp );
                    printf("%s",str);
                    int opt[10]={1,1,3,1,4,3,4,1,2,3};
                    static j=0;
                    printf("Enter your option: ");
                    scanf("%d",&data[j]);
                    if(opt[j]==data[j])
                    {
                        printf("[CORRECT]\n");
                        printf("\n");
                        score=score+1;
                    }
                    else
                    {
                        printf("Your answer is wrong\n");
                        printf("\n");
                    }
                    j++;
                }
                printf("Your score is: %d\n",score);
                attemptagain2(score);
                fclose(fp);
            }
            else
            {
                printf("You have entered wrong input. Please read the instructions neatly.\n");
                goto fromhere;
            }
            break;
        }
    case 3:
        {
            printf("Exit\n");
            return 0;
        }
    default:
        {
            printf("Please enter valid input.\n");
        }
    }
}

