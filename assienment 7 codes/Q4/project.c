#include<stdio.h>
#include<signal.h>
#include<sys/wait.h>
#include<unistd.h>


int main(int argc , char*argv[])

{

	int ret1 =0 ,ret2= 0 ,ret3 = 0 ,err = 0,s =0 ;

	int ret = 0 ;

	for(int i =1 ; i <= 4 ;i++)
	{
		// 1st child
		ret = fork();
		if(ret == 0)
		{

			err = execl("/usr/bin/gcc" , "gcc" , "-c" , argv[i] , NULL);
			if(err < 0)
			{
				perror("exec() failed");
				_exit(1);
			}
		}
		else
		{

			wait(&s);
			printf("child exit status : %d\n" , WEXITSTATUS(s));
		}
	}




	// 2nd child
	ret = fork();
	if(ret == 0)

	{

		err = execl("/usr/bin/gcc" , "gcc" , "-o" , "program.out" , "cirle.o", "square.o" ,"rectangle.o" , "main.o" ,NULL);

		if(err < 0)

		{
			perror("exec() failed");
			_exit(1);
		}

	}

	else
	{

		wait(&s);
		printf("child exit status : %d\n",WEXITSTATUS(s));
	}





	// 3 rd child
	ret = fork();
	if(ret == 0)

	{

		err = execl("/home/rutuja/EOS Assignment/EOS_Assignment/assienment 7 codes/Q4/program.out","program.out" , NULL);
		if(err < 0)

		{
			perror("exec() failed");
			_exit(1);
		}
	}

	else
	{
		wait(&s);
		printf("child exit status : %d\n",WEXITSTATUS(s));
	}

	return 0 ;
}



