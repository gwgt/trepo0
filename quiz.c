// PROJECT ON COMPUTER QUIZ
#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("\nWELCOME TO THE QUIZ GAME DEVELOPED BY WWW.ALLCOMPILER.COM TEAM");
	printf("\n====================\n");
	cont();
	getch();
}

fun1()
{

	int n,r1,r2,r3,r4,r5,finalresult=0;
	int num;
	clrscr();
	printf("\nTo Start Quiz press 1\n");
	scanf("%d",&n);
	if(n==1)
	{
		clrscr();
		r1=qus1();
		r2=qus2();
		r3=qus3();
		r4=qus4();
		r5=qus5();
		finalresult=r1+r2+r3+r4+r5;
		clrscr();
		printf("\t\n\nYou Have Scored=%d/5",finalresult);
		printf("\n===========================\n");
		printf("\nDo you want to continue ?\n\nPress 1 to continue any other number otehrwise");
		scanf("%d",&num);
		if(num==1)
		{
			cont();
		}
		else
		{
			message();
		}
	}
	else
	{
		printf("Please Press 1");
	}
	return 0;
}
fun2()
{
	int n,r1,r2,r3,r4,r5,finalresult=0;
	int num;
	clrscr();
	printf("\nTo Start Quiz press 1\n");
	scanf("%d",&n);
	if(n==1)
	{
		clrscr();
		r1=qus6();
		r2=qus7();
		r3=qus8();
		r4=qus9();
		r5=qus10();
		finalresult=r1+r2+r3+r4+r5;
		clrscr();
		printf("\t\n\nYou Have Scored=%d/5",finalresult);
		printf("\n===========================\n");
		printf("\nDo you want to continue ?\n\nPress 1 to continue any other number otehrwise");
		scanf("%d",&num);
		if(num==1)
		{
			cont();
		}
		else
		{
			message();
		}
	}
	else
	{
		printf("Please Press 1");
	}
	return 0;
}



int qus1()
{
	int chosen,result;
	printf("\nQuestion 1\n");
	printf("............\n");
	printf("\n\t\t\tAddress book contains ?\n\n");
	printf("\t\t\t1. Email address\n");
	printf("\t\t\t2. Phone numbers\n");
	printf("\t\t\t3. People Names\n");
	printf("\t\t\t4. All of above\n");
	printf("\n\n\t\t\tYour Answer?\n");
	scanf("\t\t\t%d",&chosen);
	if(chosen==1)
	{
		printf("\n\t\t\tIncorrect Answer, Correct Answer is...All of Above");

	}
	else if(chosen==2)
	{
		printf("\t\t\tIncorrect Answer, Correct Answer is... All of Above");

	}
	else if(chosen==3)
	{
		printf("\t\t\tIncorrect Answer, Correct Answer is...All Of Above");

	}
	else if(chosen==4)
	{
		printf("Correct Answer");
		result=result+1;

	}
	else
	{
		printf("Sorry You have to chose between 1 and 4");
		printf("\n\nYour Answer will be cosiderd as Incorrect");
		printf("\tCorrect Answer is option4");
	}
	return result;

}
int qus2()
{
	int chosen,result;
	printf("\n\n\n\n\n\n\n");
	printf("\nQuestion 2\n");
	printf("............\n");
	printf("\n\t\t\tJoystick is used to ?\n\n");
	printf("\t\t\t1. Move Cursor on the screen\n");
	printf("\t\t\t2. Computer Games\n");
	printf("\t\t\t3. Both a and b\n");
	printf("\t\t\t4. None of these\n");
	printf("\n\n\t\t\tYour Answer?\n");
	scanf("\t\t\t%d",&chosen);
	if(chosen==1)
	{
		printf("\n\t\t\tIncorrect Answer, Correct Answer is-Both a and b");

	}
	else if(chosen==2)
	{
		printf("\t\t\tIncorrect Answer, Correct Answer is - Both a and b");

	}
	else if(chosen==3)
	{
		printf("\t\t\tCorrect Answer");
		result++;

	}
	else if(chosen==4)
	{
		printf("\t\t\tIncorrect Answer, Correct Answer is- Both a and b");

	}
	else
	{
		printf("Sorry You have to chose between 1 and 4");
		printf("\n\nYour Answer will be cosiderd as Incorrect");
		printf("\tCorrect Answer is option3");
	}
	return result;
}
int qus3()
{
	int chosen,result;
	printf("\n\n\n\n\n\n\n");
	printf("\nQuestion 3\n");
	printf("............\n");
	printf("\n\t\t\tSpeed of Dot Mtrix Printer is Measured In ?\n\n");
	printf("\t\t\t1. DPM\n");
	printf("\t\t\t2. CPS\n");
	printf("\t\t\t3. DPS\n");
	printf("\t\t\t4. PPM\n");
	printf("\n\n\t\t\tYour Answer?\n");
	scanf("\t\t\t%d",&chosen);
	if(chosen==1)
	{
		printf("\n\t\t\tIncorrect Answer, Correct Answer is-CPS");
	}
	else if(chosen==2)
	{
		printf("\t\t\tCorrect Answer");
		result=result+1;

	}
	else if(chosen==3)
	{
		printf("\t\t\tIncorrect Answer,Correct Answer is -CPS");

	}
	else if(chosen==4)
	{
		printf("\t\t\tIncorrect Answer, Correct Answer is-CPS");

	}
	else
	{
		printf("Sorry You have to chose between 1 and 4");
		printf("\n\nYour Answer will be cosiderd as Incorrect");
		printf("\tCorrect Answer is option2");
	}
	return result;
}
qus4()
{
	int chosen,result;
	printf("\n\n\n\n\n\n\n");
	printf("\nQuestion 4\n");
	printf("............\n");
	printf("\n\t\t\tYou can open the Notebook from the Run dialog box by typing ?\n\n");
	printf("\t\t\t1. Note\n");
	printf("\t\t\t2. Npad\n");
	printf("\t\t\t3. Notepad\n");
	printf("\t\t\t4. None of these\n");
	printf("\n\n\t\t\tYour Answer?\n");
	scanf("\t\t\t%d",&chosen);
	if(chosen==1)
	{
		printf("\n\t\t\tIncorrect Answer, Correct Answer is- Notepad");

	}
	else if(chosen==2)
	{
		printf("\t\t\tIncorrect Answer, Correct Answer is - Notepad");
	}
	else if(chosen==3)
	{
		printf("\t\t\tCorrect Answer");
		result=result+1;
	}
	else if(chosen==4)
	{
		printf("\t\t\tIncorrect Answer, Correct Answer is- Notepad");
	}
	else
	{
		printf("Sorry You have to chose between 1 and 4");
		printf("\n\nYour Answer will be cosiderd as Incorrect");
		printf("\tCorrect Answer is option3");
	}
	return result;
}
int qus5()
{
	int chosen,result;
	printf("\n\n\n\n\n\n\n");
	printf("\nQuestion 5\n");
	printf("............\n");
	printf("\n\t\t\tYou can open the Sound Recorder from the Run dialog box by typing ?\n\n");
	printf("\t\t\t1. Sound record\n");
	printf("\t\t\t2. Sunresord\n");
	printf("\t\t\t3. Sudrec\n");
	printf("\t\t\t4. Sudrec32\n");
	printf("\n\n\t\t\tYour Answer?\n");
	scanf("\t\t\t%d",&chosen);
	if(chosen==1)
	{
		printf("\n\t\t\tIncorrect Answer, Correct Answer is- Sudrec32");

	}
	else if(chosen==2)
	{
		printf("\t\t\tIncorrect Answer, Correct Answer is - Sudrec32");
	}
	else if(chosen==3)
	{
		printf("\t\t\tIncorrect Answer, Correct Answer is - Sudrec32");
		result=result+1;
	}
	else if(chosen==4)
	{
		printf("\t\t\tCorrect Answer ");
	}
	else
	{
		printf("Sorry You have to chose between 1 and 4");
		printf("\n\nYour Answer will be cosiderd as Incorrect");
		printf("\tCorrect Answer is option4");
	}
	return result;
}
qus6()
{
	int chosen,result;
	printf("\n\n");
	printf("\nQuestion 1\n");
	printf("............\n");
	printf("\n\t\t\tWhat is software ?\n\n");
	printf("\t\t\t1. Set of computer programs,procedures.\n");
	printf("\t\t\t2. A set of compiler instructions\n");
	printf("\t\t\t3. A mathematical formula\n");
	printf("\t\t\t4. None of Above\n");
	printf("\n\n\t\t\tYour Answer?\n");
	scanf("\t\t\t%d",&chosen);
	if(chosen==1)
	{
		printf("\n\t\t\tCorrect Answer");

	}
	else if(chosen==2)
	{
		printf("\t\t\tIncorrect Answer, Correct Answer is - Set of computer programs and procedures");
	}
	else if(chosen==3)
	{
		printf("\t\t\tIncorrect Answer,Correct Answer is - set of programs and procedures");
		result=result+1;
	}
	else if(chosen==4)
	{
		printf("\t\t\tIncorrect Answer, Correct Answer is- set of programs and procedures");
	}
	else
	{
	      printf("Sorry You have to chose between 1 and 4");
		printf("\n\nYour Answer will be cosiderd as Incorrect");
		printf("\tCorrect Answer is option1");
	}
	return result;
}
qus7()
{
	int chosen,result;
	printf("\n\n\n\n\n\n\n");
	printf("\nQuestion 2\n");
	printf("............\n");
	printf("\n\t\t\tWhich of the following is not the characteristic of software ?\n\n");
	printf("\t\t\t1. Software does not wear out\n");
	printf("\t\t\t2. Software is flexible\n");
	printf("\t\t\t3. Software is not manufactured\n");
	printf("\t\t\t4. Software is always correct\n");
	printf("\n\n\t\t\tYour Answer?\n");
	scanf("\t\t\t%d",&chosen);
	if(chosen==1)
	{
		printf("\n\t\t\tIncorrect Answer,Correct Answer is option 4");

	}
	else if(chosen==2)
	{
		printf("\t\t\tIncorrect Answer, Correct Answer is option 4");
	}
	else if(chosen==3)
	{
		printf("\t\t\tIncorrect Answer,Correct Answer is option 4");
		result=result+1;
	}
	else if(chosen==4)
	{
		printf("\t\t\tCorrect Answer");
	}
	else
	{
		printf("Sorry You have to chose between 1 and 4");
		printf("\n\nYour Answer will be cosiderd as Incorrect");
		printf("\tCorrect Answer is option4");
	}
	return result;

}
qus8()
{
	int chosen,result;
	printf("\n\n\n\n\n\n\n");
	printf("\nQuestion 3\n");
	printf("............\n");
	printf("\n\t\t\tEfforts are measured in terms of ?\n\n");
	printf("\t\t\t1. Person - months\n");
	printf("\t\t\t2. Persons\n");
	printf("\t\t\t3. Quality\n");
	printf("\t\t\t4. Efficiency\n");
	printf("\n\n\t\t\tYour Answer?\n");
	scanf("\t\t\t%d",&chosen);
	if(chosen==1)
	{
		printf("\n\t\t\tCorrect Answer");

	}
	else if(chosen==2)
	{
		printf("\t\t\tIncorrect Answer, Correct Answer is option 1");
	}
	else if(chosen==3)
	{
		printf("\t\t\tIncorrect Answer,Correct Answer is option1");
		result=result+1;
	}
	else if(chosen==4)
	{
		printf("\t\t\tIncorrect Answer, Correct Answer is option1");
	}
	else
	{
		printf("Sorry You have to chose between 1 and 4");
		printf("\n\nYour Answer will be cosiderd as Incorrect");
		printf("\tCorrect Answer is option1");
	}
	return result;

}
qus9()
{
	int chosen,result;
	printf("\n\n\n\n\n\n\n");
	printf("\nQuestion 4\n");
	printf("............\n");
	printf("\n\t\t\tDuring software development which factor is most crucial ?\n\n");
	printf("\t\t\t1. People\n");
	printf("\t\t\t2. Process\n");
	printf("\t\t\t3. Product\n");
	printf("\t\t\t4. Project\n");
	printf("\n\n\t\t\tYour Answer?\n");
	scanf("\t\t\t%d",&chosen);
	if(chosen==1)
	{
		printf("\n\t\t\tCorrect Answer");

	}
	else if(chosen==2)
	{
		printf("\t\t\tIncorrect Answer, Correct Answer is option1");
	}
	else if(chosen==3)
	{
		printf("\t\t\tIncorrect Answer,Correct Answer is option1");
		result=result+1;
	}
	else if(chosen==4)
	{
		printf("\t\t\tIncorrect Answer, Correct Answer is option1");
	}
	else
	{
		printf("Sorry You have to chose between 1 and 4");
		printf("\n\nYour Answer will be cosiderd as Incorrect");
		printf("\tCorrect Answer is option1");

	}
	return result;

}
qus10()
{
	int chosen,result;
	printf("\n\n\n\n\n\n\n");
	printf("\nQuestion 5\n");
	printf("............\n");
	printf("\n\t\t\tMilestones are used to ?\n\n");
	printf("\t\t\t1. Know the cost of the project\n");
	printf("\t\t\t2. Know the status of the project\n");
	printf("\t\t\t3. Know the user expectations\n");
	printf("\t\t\t4. None of Above\n");
	printf("\n\n\t\t\tYour Answer?\n");
	scanf("\t\t\t%d",&chosen);
	if(chosen==1)
	{
		printf("\n\t\t\tCorrect Answer");

	}
	else if(chosen==2)
	{
		printf("\t\t\tIncorrect Answer, Correct Answer is option1");
	}
	else if(chosen==3)
	{
		printf("\t\t\tIncorrect Answer,Correct Answer is option1");
		result=result+1;
	}
	else if(chosen==4)
	{
		printf("\t\t\tIncorrect Answer, Correct Answer is option1");
	}
	else
	{
		printf("Sorry You have to chose between 1 and 4");
		printf("\n\nYour Answer will be cosiderd as Incorrect");
		printf("\tCorrect Answer is option1");

	}
	return result;

}
cont()
{
	int n;
	printf("\nChoose Topic Of Your Own Interest\n=================================");
	printf("\n\n");
	printf("\n1.Information Technology\n");
	printf("\n2.Software Engineering\n");
	printf("\n3.Computer Networks\n");
	printf("\nEnter the serial number of subject to start quiz\n");
	scanf("\n%d",&n);
	clrscr();
	switch(n)
	{
		case 1:
			printf("\n\n\n\t\t\t============ WELCOME ==================\n");
			printf("\n\nYou Have chosen Information technology");
			printf("\n........................................\n");
			printf("\n This quiz contains 5 multiple choice questions\n");
			fun1();
			break;
		case 2:
			printf("\n===========WELCOME============\n");
			printf("\n You have chosen software engineering");
			printf("\n.....................................\n");
			printf("\n This quiz contains 5 multiple choice questions\n");
			fun2();
			break;
		case 3:
			printf("\n===========WELCOME============\n");
			printf("\n TRY IT URSELF");
			break;
		default:
			printf("Wrong");
	}
	return 0;
}
message()
{
	clrscr();
	printf("\n\t\THANKU FOR PLAYING THE GAME");
	printf("\n===============================\n");
	printf("\n\nFor More Intersting Projects Please Visit\n");
	printf("\n\n\n\t\t\t\twww.AllCompiler.com\n");
	printf("\t\t\t\t.....................");
}


