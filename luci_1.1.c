#include <stdio.h>

void F(void);
char i;

main()
{
	int a;
//	char i;
	i='y';
//	printf("%c",i);
	while (i=='y'){
		A();
		printf("\nselect 1 or 2 \n");
		scanf("%d",&a);
		if (a==1)
		{
			B1();
			printf("\nselect 1 or 2 \n");
			scanf("%d",&a);
			if(a==1)
			{
				C1();
				printf("\nselect 1 or 2 \n");
				scanf("%d",&a);
				if (a==1)
				{
					D1();
					printf("\nselect 1 or 2 \n");
					scanf("%d",&a);
					if (a==1)
					{
						E1();
						F();
						
					}
					else if (a==2)
					{
						E2();
						F();
					} 
					
				}
				else if (a==2)
				{
					D2();
					printf("\nselect 1 or 2 \n");
					scanf("%d",&a);
					if (a==1)
					{
						E3();
						F();
					}
					else if (a==2)
					{
						E4();
						F();
					} 
				}
			}
			else if(a==2)
			{
				C2();
				printf("\nselect 1 or 2 \n");
				scanf("%d",&a);
				if (a==1)
				{
					D3();
					printf("\nselect 1 or 2 \n");
					scanf("%d",&a);
					if (a==1)
					{
						E5();
						F();
					}
					else if (a==2)
					{
						E6();
						F();
					}
				}
				else if (a==2)
				{
					D4();
					printf("\nselect 1 or 2 \n");
					scanf("%d",&a);
					if (a==1)
					{
						E7();
						F();
					}
					else if (a==2)
					{
						E8();
						F();
					}
				}
				
				
			}
			
		}
		
		else if (a==2)
		{
			B2();
			printf("\nselect 1 or 2 \n");
			scanf("%d",&a);
			if(a==1)
			{
				C3();
				printf("\nselect 1 or 2 \n");
				scanf("%d",&a);
				if (a==1)
					{
						D5();
						printf("\nselect 1 or 2 \n");
						scanf("%d",&a);
						if (a==1)
						{
							E9();
							F();
						}
						else if (a==2)
						{
							E10();
							F();
						}
					}
				else if (a==2)
					{
						D6();
						printf("\nselect 1 or 2 \n");
						scanf("%d",&a);
						if (a==1)
						{
							E11();
							F();
						}
						else if(a==2)
						{
							E12();
							F();
						}
					}
			}
			else if(a==2)
			{
				C4();
				printf("\nselect 1 or 2 \n");
				scanf("%d",&a);
				if (a==1)
				{
					D7();
					printf("\nselect 1 or 2 \n");
					scanf("%d",&a);
					if(a==1)
					{
						E13();
						F();
					}
					else if(a==2)
					{
						E14();
						F();
					}
				}
				else if (a==2)
				{
					D8();
					printf("\nselect 1 or 2 \n");
					scanf("%d",&a);
					if(a==1)
					{
						E15();
						F();
					}
					else if(a==2)
					{
						E16();
						F();
					}
				}
			}
		}
	}
}

void A()
{
	printf("This is A");
}
void B1()
{
	printf("This is B1");
}
void B2()
{
	printf("This is B2");
}
void C1()
{
	printf("This is C1");
}
void C2()
{
	printf("This is C2");
}
void C3()
{
	printf("This is C3");
}
void C4()
{
	printf("This is C4");
}
void D1()
{
	printf("This is D1");
}
void D2()
{
	printf("This is D2");
}
void D3()
{
	printf("This is D3");
}
void D4()
{
	printf("This is D4");
}
void D5()
{
	printf("This is D5");
}
void D6()
{
	printf("This is D6");
}
void D7()
{
	printf("This is D7");
}
void D8()
{
	printf("This is D8");
}
void E1()
{
	printf("This is E1");
}
void E2()
{
	printf("This is E2");
}
void E3()
{
	printf("This is E3");
}
void E4()
{
	printf("This is E4");
}
void E5()
{
	printf("This is E5");
}
void E6()
{
	printf("This is E6");
}
void E7()
{
	printf("This is E7");
}
void E8()
{
	printf("This is E8");
}
void E9()
{
	printf("This is E9");
}
void E10()
{
	printf("This is E10");
}
void E11()
{
	printf("This is E11");
}
void E12()
{
	printf("This is E12");
}
void E13()
{
	printf("This is E13");
}
void E14()
{
	printf("This is E14");
}
void E15()
{
	printf("This is E15");
}
void E16()
{
	printf("This is E16");
}

void F(void)
{
	printf("\nWant to try again?(y,n)\n");
	scanf("%c",&i);
	scanf("%c",&i);

}
