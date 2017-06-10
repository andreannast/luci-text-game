#include <stdio.h>

void F(void);
char i;

main()
{
	int a;
	int n;
//	char i;
	i='y';
//	printf("%c",i);
	printf("\n\n :::         :::    :::   ::::::::   ::::::::::: \n");
	    printf(" :+:         :+:    :+:  :+:    :+:      :+:     \n");
	    printf(" +:+         +:+    +:+  +:+             +:+     \n");
	    printf(" +#+         +#+    +:+  +#+             +#+     \n");
	    printf(" +#+         +#+    +#+  +#+             +#+     \n");
	    printf(" #+#         #+#    #+#  #+#    #+#      #+#     \n");
	    printf(" ##########   ########    ########   ########### \n\n");
	while (i=='y'){
		n=1;
		story(n);
		printf("\n\n 1. A forest");
		printf("\n 2. An alien planet\n\n");
		scanf("%d",&a);
		if (a==1)
		{
			n=2;
			story(n);
			printf("\n\n 1. Set self free");
			printf("\n 2. Don't set self free\n\n");
			scanf("%d",&a);
			if(a==1)
			{
				n=4;
				story(n);
				printf("\n\n 1. Save them again");
				printf("\n 2. Kick their hands to make them fall\n\n");
				scanf("%d",&a);
				if (a==1)
				{
					n=8;
					story(n);
					F();
				}
				else if (a==2)
				{
					n=9;
					story(n);
					printf("\n\n 1. Prepare yourself for a fight");
					printf("\n 2. Run away\n\n");
					scanf("%d",&a);
					if (a==1)
					{
						n=18;
						story(n);
						F();
					}
					else if (a==2)
					{
						n=19;
						story(n);
						F();
					} 
				}
			}
			else if(a==2)
			{
				n=5;
				story(n);
				printf("\n\n 1. Let the bubble guide you to a land on the clouds");
				printf("\n 2. Control the bubble with your mind to go back down to the ground safely\n\n");
				scanf("%d",&a);
				if (a==1)
				{
					n=10;
					story(n);
					printf("\n\n 1. Tell the guards to let you in");
					printf("\n 2. Dig a path under the ground\n\n");
					scanf("%d",&a);
					if (a==1)
					{
						n=20;
						story(n);
						F();
					}
					else if (a==2)
					{
						n=21;
						story(n);
						F();
					}
				}
				else if (a==2)
				{
					n=11;
					story(n);
					printf("\n\n 1. Take the talking one as your companion");
					printf("\n 2. Wake up\n\n");
					scanf("%d",&a);
					if (a==1)
					{
						n=22;
						story(n);
						F();
					}
					else if (a==2)
					{
						n=23;
						story(n);
						F();
					}
				}
				
				
			}
			
		}
		
		else if (a==2)
		{
			n=3;
			story(n);
			printf("\n\n 1. Take a swim in the purple sea");
			printf("\n 2. Go into the cave\n\n");
			scanf("%d",&a);
			if(a==1)
			{
				n=6;
				story(n);
				printf("\n\n 1. Try to ride it");
				printf("\n 2. Swim as fast as you can to get out of the water\n\n");
				scanf("%d",&a);
				if (a==1)
					{
						n=12;
						story(n);
						F();
					}
				else if (a==2)
					{
						n=13;
						story(n);
						printf("\n\n 1. Stay in the water");
						printf("\n 2. Get out\n\n");
						scanf("%d",&a);
						if (a==1)
						{
							n=26;
							story(n);
							F();
						}
						else if(a==2)
						{
							n=27;
							story(n);
							F();
						}
					}
			}
			else if(a==2)
			{
				n=7;
				story(n);
				printf("\n\n 1. Fight the bear with the two heads");
				printf("\n 2. Hide\n\n");
				scanf("%d",&a);
				if (a==1)
				{
					n=14;
					story(n);
					printf("\n\n 1. Immobilize it");
					printf("\n 2. Kill it\n\n");
					scanf("%d",&a);
					if(a==1)
					{
						n=28;
						story(n);
						F();
					}
					else if(a==2)
					{
						n=29;
						story(n);
						F();
					}
				}
				else if (a==2)
				{
					n=15;
					story(n);
					printf("\n\n 1. Help them");
					printf("\n 2. Don't help them\n\n");
					scanf("%d",&a);
					if(a==1)
					{
						n=30;
						story(n);
						F();
					}
					else if(a==2)
					{
						n=31;
						story(n);
						F();
					}
				}
			}
		
		}
			
	}
}

story(x)
{
	switch(x)
	{
		case 1:
			printf("\n--This is A--\n");
			printf("\n     Someone is ringing your doorbell. You get up from the chair in front of your computer and run to the door");
			printf("\nexcited. The mailman gives you a package and with a smile asks to sign on his device. You hastily do, then");
			printf("\nclose the door, and with shaking hands you cut the sealing tape with one of your keys. Inside the cardboard");
			printf("\nbox you find LUCI the most modern lucid dreaming headset. With this device you too will finally be able to");
			printf("\ndream and know that you do on command. The possibilities are endless with this bad boy!\n\n");
			
			printf("\n     While you were charging it you played with the settings and then looked up on the internet for ideas on");
			printf("\nwhat to do as a first time lucid dreamer. After half an hour you unpluged it, layed on your bed and with your");
			printf("\neyes closed you put it on.  You suddenly start feeling ephoric and couldn't help grinning. You slowly feel");
			printf("\nyourself drifting to sleep.\n\n");
			
			printf("\n     You open your eyes and find yourself in an empty red room with a single door infront of you. On the walls");
			printf("\naround you there are instraction written with big, white, bold letters. You ignore them -obviously- and go");
			printf("\nto open the door, but before you do so you remember that you have to choose which place you wont there");
			printf("\nto be on the other side of the door. After much thought you choose:\n");
			break;
		case 2:
			printf("\n--This is B1--");
			printf("\n     You find yourself in a beautifull forest. You notice that a few meters ahead of you is a cage with");
			printf("\nsomeone inside, so you go to investigate. It turns out that inside it is not any other but yourself! They look");
			printf("\nexactly like you. They tell you that an evil captor trapped them inside and inly you can help them. You:");

			break;
		case 3:
			printf("\n--This is B2--");
			printf("\n");
			printf("\n");

			break;
		case 4:
			printf("\n--This is C1--");
			printf("\n     You find the keys to the magic lock and unlock your other self, but the moment you brake them out they hit");
			printf("\nyou and say 'You are such a fool, I knew it!'. While fighting you roll down a hill. After some kicks and");
			printf("\npunches you push your other self off a cliff making them hang off the edge. They cry out 'Please, don't let");
			printf("\nme fall, I am sorry that I attacked you I had no choice! Please don't let me die!'. You:");

			break;
		case 5:
			printf("\n--This is C2--");
			printf("\n");
			printf("\n");

			break;
		case 6:
			printf("\n--This is C3--");
			printf("\n");
			printf("\n");

			break;
		case 7:
			printf("\n--This is C4--");
			printf("\n");
			printf("\n");
		
			break;
		case 8:
			printf("\n--This is D1--");
			printf("\nYou reach for their hand and pull them up. After saving them you lie flat on the ground to take a breath.");
			printf("\nSuddenly, while your eyes are closed, you feel someone pushing you causing you to fall off the cliff. While you");
			printf("\nare falling you see your other self smiling from the top. You clearly shouldn't have trusted them. Fool me");
			printf("\nonce shame on you, fool me twice shame on me.");
		
			break;
		case 9:
			printf("\n--This is D2--");
			printf("\n");
			printf("\n");
			
			break;
		case 10:
			printf("\n--This is D3--");
			printf("\n");
			printf("\n");
			
			break;
		case 11:
			printf("\n--This is D4--");
			printf("\n");
			printf("\n");
			
			break;
		case 12:
			printf("\n--This is D5--");
			printf("\n");
			printf("\n");
			
			break;
		case 13:
			printf("\n--This is D6--");
			printf("\n");
			printf("\n");
			
			break;
		case 14:
			printf("\n--This is D7--");
			printf("\n");
			printf("\n");
			
			break;
		case 15:
			printf("\n--This is D8--");
			printf("\n");
			printf("\n");
			
			break;

		case 18:
			printf("\n--This is E3--");
			printf("\n");
			printf("\n");
			
			break;
		case 19:
			printf("\n--This is E4--");
			printf("\n");
			printf("\n");
			
			break;
		case 20:
			printf("\n--This is E5--");
			printf("\n");
			printf("\n");
			
			break;
		case 21:
			printf("\n--This is E6--");
			printf("\n");
			printf("\n");
			
			break;
		case 22:
			printf("\n--This is E7--");
			printf("\n");
			printf("\n");
			
			break;
		case 23:
			printf("\n--This is E8--");
			printf("\n");
			printf("\n");
			
			break;

		case 26:
			printf("\n--This is E11--");
			printf("\n");
			printf("\n");
			
			break;
		case 27:
			printf("\n--This is E12--");
			printf("\n");
			printf("\n");
			
			break;
		case 28:
			printf("\n--This is E13--");
			printf("\n");
			printf("\n");
			
			break;
		case 29:
			printf("\n--This is E14--");
			printf("\n");
			printf("\n");
			
			break;
		case 30:
			printf("\n--This is E15--");
			printf("\n");
			printf("\n");
			
			break;
		case 31:
			printf("\n--This is E16--");
			printf("\n");
			printf("\n");
			
			break;
	}
}

void F(void)
{
	printf("\nDo you want to try again?(y,n)\n");
	scanf("%c",&i);
	scanf("%c",&i);

}
