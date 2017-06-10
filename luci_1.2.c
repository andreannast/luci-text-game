#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
void F(void);
char i;

main()
{
	bool ending = false; bool shark  = false; bool fool  = false; bool evil_spirit = false; bool crystal_castle = false;bool empty_room  = false;bool good_deed  = false; bool guilt  = false; bool vampire  = false; bool talking_bull  = false; bool you_are_boring = false;
	bool stupid  = false; bool depths_of_the_ocean  = false; bool beautiful  = false; bool money = false; bool coward = false;
	int a;
	int n;
	int deathcounter = 0;
		
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
					ending=true;
					deathcounter=deathcounter + 1;
					fool=true;
					
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
						evil_spirit = true;
						
					}
					else if (a==2)
					{
						n=19;
						story(n);
						ending=true;
						deathcounter= deathcounter + 1;
						crystal_castle = true;
						
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
						ending=true;
						empty_room = true;
						
					}
					else if (a==2)
					{
						n=21;
						story(n);
						ending=true;
						deathcounter=deathcounter + 1;
						vampire = true;
						
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
						talking_bull = true;
						
					}
					else if (a==2)
					{
						n=23;
						story(n);
						ending=true;
						you_are_boring = true;
						
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
				shark = true;
				printf("\n\n 1. Try to ride it");
				printf("\n 2. Swim as fast as you can to get out of the water\n\n");
				scanf("%d",&a);
				if (a==1)
					{
						n=12;
						story(n);
						stupid = true;
						ending = true;
						deathcounter=deathcounter + 1;
						
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
							ending = true;
							depths_of_the_ocean = true;
							deathcounter=deathcounter + 1;
							
						}
						else if(a==2)
						{
							n=27;
							story(n);
							beautiful = true;
							
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
						money = true;
						
					}
					else if(a==2)
					{
						n=29;
						story(n);
						ending=true;
						money=true;
						
					}
				}
				else if (a==2)
				{
					n=15;
					story(n);
					coward = true;
					printf("\n\n 1. Help them");
					printf("\n 2. Don't help them\n\n");
					scanf("%d",&a);
					if(a==1)
					{
						n=30;
						story(n);
						ending=true;
						deathcounter=deathcounter + 1;
						good_deed = true;
						
					}
					else if(a==2)
					{
						n=31;
						story(n);
						ending=true;
						guilt = true;
						
					}
				}
			}
		}
		
		//GOOD - BAD ENDING
		
		if (ending==true){
			n=32;
			story(n);
		}
		else{
			n=33;
			story(n);
		}
		ending=false;
		//DEATH COUNTER
		
		if (deathcounter==1)
			printf("\n\n### You have died %d time ###.\n", deathcounter);
		else
			printf("\n\n### You have died %d times ###.\n", deathcounter);
		
		//ACHIEVEMENTS
		
		printf("\n\n### Achievements ###\n");
		
		if (shark==true)
			printf("\n\n- The great shark\n");
			
		if (fool==true)
			printf("\n- Fool\n");
			
		if (evil_spirit==true)
			printf("\n- The truth behind the evil spirit\n");
			
		if (crystal_castle==true)
			printf("\n- Crystal death\n");
			
		if (empty_room==true)
			printf("\n- Empty room\n");
			
		if (vampire==true)
			printf("\n- Green vampire death\n");
			
		if (talking_bull==true)
			printf("\n- Talking bull\n");
			
		if (you_are_boring==true)
			printf("\n- You are so boring\n");
	
		if (stupid==true)
			printf("\n- You are so stupid\n");
			
		if (depths_of_the_ocean==true)
			printf("\n- Depths of the ocean\n");
			
		if (beautiful==true)
			printf("\n- Beautiful\n");
			
		if (money==true)
			printf("\n- Money problems\n");
		
		if (coward==true)
			printf("\n- Coward\n");
		
		if (good_deed==true)
			printf("\n- Good deed doer\n");
		
		if (guilt==true)
			printf("\n- Guilt\n");
			
		//TRY AGAIN?
		
		F();
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
			printf("\n     You appear on an alien planet with weird vegetation and a purple sea. At yout far left there is");
			printf("\na cave. You:");

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
			printf("\n     You walk away while trying not to look back to the screaming and crying person in the cage. After walking");
			printf("\nhalf an hour the ground start to shake and cracks formed under your feet. From these cracks bubbles got");
			printf("\nout entrapping you into one. You start flying with the wind. You:");

			break;
		case 6:
			printf("\n--This is C3--");
			printf("\n     You decide to swim in the sea whose water is so pleasantly warm. You see a shark swimming ");
			printf("\ntowards you. You:");

			break;
		case 7:
			printf("\n--This is C4--");
			printf("\n     You walk inside the cave. After a few minutes you notice that a bear lives inside it. A bear with two ");
			printf("\nheads! You:");
		
			break;
		case 8:
			printf("\n--This is D1--");
			printf("\n     You reach for their hand and pull them up. After saving them you lie flat on the ground to take a breath.");
			printf("\nSuddenly, while your eyes are closed, you feel someone pushing you causing you to fall off the cliff. While you");
			printf("\nare falling you see your other self smiling from the top. You clearly shouldn't have trusted them. Fool me");
			printf("\nonce shame on you, fool me twice shame on me.");
		
			break;
		case 9:
			printf("\n--This is D2--");
			printf("\n     You kick their hands causing the creature to fall to its death. After a moment of silence you turn around");
			printf("\nand see a man running towards you. You:");
			
			break;
		case 10:
			printf("\n--This is D3--");
			printf("\n     You reach the sky land and see that a house with guards walking around. You:");
			
			break;
		case 11:
			printf("\n--This is D4--");
			printf("\n     You manage to control the bubble to get you back down a few kilometers away. There you find a hole full of");
			printf("\nbull skeletons. You find a way to revive them and then:");
			
			break;
		case 12:
			printf("\n--This is D5--");
			printf("\n     It eats you. You are really stupid.");
			
			break;
		case 13:
			printf("\n--This is D6--");
			printf("\n     You start swimming towards the beach as fast as you can but the shark is way faster than you. The shark");
			printf("\ngets closer and closer and when it is right behind you... it swims past you. It turns out it was hunting an other");
			printf("\nfish and didn't care at all about you. You:");
			
			break;
		case 14:
			printf("\n--This is D7--");
			printf("\n     You get into a fight with it. At some point you get the choice to either:");
			
			break;
		case 15:
			printf("\n--This is D8--");
			printf("\n     The bear doesn't notice you. At the end of the cave you see a person tied up. You:");
			
			break;

		case 18:
			printf("\n--This is E3--");
			printf("\n     You decide that running away won't solve your problems so you prepare for a second fight. But it turns out");
			printf("\nthat he doesn't want to fight you but to warn you of the evil spirit that can take the form of anyone, just to");
			printf("\ntake their place after killing them. As you try to thank him he takes out him magic wand and says a spell.");
			printf("\nThis causes the evil spirit, that had climbed back up the cliff to kill you, to get trapped again inside an other");
			printf("\ncage. He saved you! After a lot of apologizing he says that it is okay because everything is in your head");
			printf("\nand nothing could truly harm you -physically at least-. He is okay with the idea that his existance will stop");
			printf("\nwhen I wake up. He invites you to his house to hang out with him.");
			
			break;
		case 19:
			printf("\n--This is E4--");
			printf("\n     You run away in fear into the forest. The man looses track of you. After half an hour of walking you see");
			printf("\nin the distance a crystal castle. You get inside, stand in awe from its beauty, your other self creeps behind");
			printf("\nyou and stabs you to the heart.");
			
			break;
		case 20:
			printf("\n--This is E5--");
			printf("\n     They demand a ticket to get in. You imagine one and it pops into existance right in front of you. The guard");
			printf("\nsays 'Good enough for me.' and lets you in. The house was empty. What where they guarding all this time?");
			
			break;
		case 21:
			printf("\n--This is E6--");
			printf("\n     You decide to dig a path underground so that you won't have to face the guards. Instead though you find");
			printf("\ninside the earth a temple full of green scary vampires. You get killed nearly instantly by them, as they haven't");
			printf("\neaten for a thousand years.");
			
			break;
		case 22:
			printf("\n--This is E7--");
			printf("\n     After a highly intelligent conversation you decide it is time to wake up");
			
			break;
		case 23:
			printf("\n--This is E8--");
			printf("\n     Your first adventure didn't feel like one. You were too afraid to take any chances. Boring.");

			break;

		case 26:
			printf("\n--This is E11--");
			printf("\n     That was a mistake. Something grabs your leg down to the depths of the ocean. You die.");
			
			break;
		case 27:
			printf("\n--This is E12--");
			printf("\n     You go to the beach and lie there to appreciate the scenery. Only in lucid dreams would you ever be able to");
			printf("\nwitness something so beautifull as this place.");
			
			break;
		case 28:
			printf("\n--This is E13--");
			printf("\n     It turns out that the bear was a mother and was just defending her children. If you had killed her the babies");
			printf("\nwould have died of starvation. At the end of the cave you see a person tied up so you help him out and he in");
			printf("\nreturn gives you some money as a gift before leaving the cave. The money isn't worth anything because");
			printf("\nthey exist only in your head.");
			
			break;
		case 29:
			printf("\n--This is E14--");
			printf("\n     It turns out that the bear was a mother and and was just defending her children. Her babies will now die of");
			printf("\nstarvation and it is your fault. At the end of the cave you see a person tied up so you help him out and he in");
			printf("\nreturn gives you some money as a gift before leaving the cave. The money isn't worth anything because");
			printf("\nthey exist only in your head.");
			
			break;
		case 30:
			printf("\n--This is E15--");
			printf("\n     The bear eats you and the man runs away. He doesn't help you.");
			
			break;
		case 31:
			printf("\n--This is E16--");
			printf("\n     The bear eats the man while you run away. You feel really guilty.");
			
			break;
		case 32:
			printf("\n\n--BAD ENDING--");
			printf("\n\n     You wake up sweaty and exhausted. You take a moment to breath while you think what to do next. There must");
			printf("\nmore pleasant experiences than this. You just have to look harder for them.");
			
			break;
		case 33:
			printf("\n\n--GOOD ENDING--");
			printf("\n\n     You wake up feeling wonderfull. This experience is unlike anything you have ever seen before and you think that");
			printf("\nyou should put it immediately back for more.");
			
			break;
	}
}

void F(void)
{
	printf("\n\n\nDo you want to try again?(y,n)\n");
	scanf("%c",&i);
	scanf("%c",&i);

}
