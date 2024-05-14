#include<stdio.h>
#include<string.h>
#include<fcntl.h>

typedef struct student
{
    char name[20];
    int rollno;
    char batch[10];
}std_t;

void file_read_write(const char*filename,std_t*S,char opr)
{
    FILE*fp = NULL;
    switch(opr)
    { 
        case 'w':
            fp = fopen(filename,"ab");
            printf("Enter the data\n");
            printf("Name : ");
            scanf("%*c%[^\n]s",S->name);
            printf("Roll no: ");
            scanf("%d",&S->rollno);
            printf("Batch : ");
            scanf("%s",S->batch);
            fwrite(S,sizeof(std_t),1,fp);
            fclose(fp);
            break;
            //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////            
        case 'r': 
            fp = fopen(filename,"rb");
            if(fp == NULL)
            {
                printf("File is not there or it can't open\n");
                break;
            }
            else
            {
                while( fread(S,sizeof(std_t),1,fp) == 1)
                {
                    printf("%s %hu %s\n",S->name,S->rollno,S->batch);
                }
                fclose(fp);
                break;
            }
    }
}

void file_modify_search(char*filename,std_t*S,char opr)
{
   FILE*fp = NULL;
   int choice2 = 0;
   char name[20];
   int rollno = 0;
   FILE*temp =NULL;
   char temp_filename[10] = "temp.bin";
   switch(opr)
   {
      case 'm':
            fp =  fopen(filename,"rb+");
            if(fp == NULL)
            {
              printf("File is not there or it can't open\n");
            }
            else
            {
              printf("By which you want to modify the file\n1.Name\n2.Rollno\n");
              scanf("%d",&choice2);
              if(choice2 == 1);
              {
                printf("Enter the name\n");
                scanf("%s",name);
                while(fread(S,sizeof(std_t),1,fp) == 1)
                {
                   if(strcmp(S->name,name) == 0)
                   break;
                }
                memset(S,0,sizeof(std_t));
                fseek(fp,-1*sizeof(std_t),SEEK_CUR);
                printf("Enter the data\n");
                printf("Name : ");
                scanf("%s",S->name);
                printf("Roll no : ");
                scanf("%d",&S->rollno);
                printf("Batch : ");
                scanf("%s",S->batch);
                fwrite(S,sizeof(std_t),1,fp);
              }
            }
            fclose(fp);
            break;
            
      case 's':
            fp =  fopen(filename,"rb+");
            if(fp == NULL)
            {
              printf("File is not there or it can't open\n");
            }
            else
            {
              printf("By which you want to modify the file\n1.Name\n2.Rollno\n");
              scanf("%d",&choice2);
              if(choice2 == 1)
              {
                printf("Enter the name\n");
                scanf("%s",name);
                while(fread(S,sizeof(std_t),1,fp) == 1)
                {
                   if(strcmp(S->name,name) == 0)
                   break;
                }
                printf("%s %d %s\n",S->name,S->rollno,S->batch);
              }
              else if(choice2 == 2)
              {
                printf("Enter the roll no\n");
                scanf("%d",&rollno);
                while(fread(S,sizeof(std_t),1,fp) == 1)
                {
                   if(rollno == S->rollno)
                   break;
                }
                printf("%s %d %s\n",S->name,S->rollno,S->batch);
              }
            }
            fclose(fp);
            break;
     case 'd':
             fp = fopen(filename,"rb+");
             if(fp == NULL)
             {
               printf("File is not there or it can't open\n");
             }
             else
             {
                 temp = fopen(temp_filename,"wb");
                 if(temp == NULL)
                 {
                  printf("File is not there or it can't open\n");
                 }
                 printf("Enter the name of the student whose record you want to delete\n");
                 scanf("%s",name);
                 while(fread(S,sizeof(std_t),1,fp) == 1)
                 {
                    if(strcmp(S->name,name) != 0)
                    fwrite(S,sizeof(std_t),1,temp) ;
                    else
                    printf("record deleted\n");
                 }
                 fclose(fp);
                 fclose(temp);
                 remove(filename);
                 rename(temp_filename,filename);
             }
             break;
   }
}
void main()
{
    char filename[10];
    int choice1 = 0;
    char c = 0;
    int flag = 0;
    std_t s1 = {" ",0," "},s2 = {" ",0," "};
    printf("Enter the file name please\n");
    scanf("%s",filename);
    do
    {
        printf("Enter the operation you want to perform\n1.Write\n2.Read\n3.Search\n4.Modify\n5.delete\n6.exit\n");
        scanf("%d",&choice1);
        switch(choice1)
        {
            case 1:
                file_read_write(filename,&s1,'w');
                memset(&s1,0,sizeof(std_t));
                break;
            case 2:
                file_read_write(filename,&s2,'r');
                memset(&s1,0,sizeof(std_t));
                break;
            case 3:
                file_modify_search(filename,&s1,'s');
                memset(&s1,0,sizeof(std_t));
                break;
            case 4:
                file_modify_search(filename,&s2,'m');
                memset(&s2,0,sizeof(std_t));
                break;
            case 5:
                file_modify_search(filename,&s2,'d');
                memset(&s2,0,sizeof(std_t));
                break;
            case 6:
                flag = 1;
                break;
            default:
                printf("Invalid input\n");
                break;
        }
        if(flag == 0){
        printf("Do you want to continue? y/n\n");
        scanf(" %c",&c);}
        else if(flag == 1)
        c = 'n';

    }while(c != 'n' && c =='y'); 
}
