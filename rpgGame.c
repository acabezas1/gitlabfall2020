//Contributors
//G. Poppe
//
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>


void main(void)
{
	int x,y,z,i,h,g,k,choice=0;
	char name[256];
	int boxNum=0;

	// NEEDED FOR ROOM 7:
	srand(time(NULL));

	printf("Please enter your name: "); //Input any number of array inputs
	scanf("%s",name);

	printf("Hello %s welcome to the rpgGame!\n",name);

	while(choice != 99)
	{
		puts("You find yourself in a dark room and you are not sure how you got here.");
        	puts("As you look around you see the room has 25 doors, each labeled with a number. You are not sure how such a small room can have 25 doors, sooo magic...");
        	puts("The room starts filling with water and you must choose a door to open or you will likely drown. you may quit anytime by selecting option 99");
        	puts("What door do you choose?");
        	scanf("%d",&choice);

		switch(choice)
		{
			case 1:
			{
				while(choice != 99)
				{
					printf("hello you have entered room 1 \n");
					printf("Room for Sheron\n");
					scanf("%d",&choice);
				}
				break;
			}
			case 2:
			{
					while(choice != 99)
					{
						puts("you open the door and find ........");
						printf("AN OGRE!!! *phew* ...oh good he's asleep but hey there's a lever behind him. You start to think maybe it will stop the water from filling up the main room. Now you must make a choice. (Hit Ctrl+C to exit the game at any time.)\n");
						printf("\n");
						puts("Carefully walk around the sleeping ogre and pull the lever. Enter 1.");
						puts("Explore the dark mysterious room quietly. Enter 2.");										puts("Wake up the ogre and see what happens. Enter 3.");
						
						choice = 0;
						while(choice < 1 || choice > 3)
						{
							scanf("%d",&choice);															if(choice < 1 || choice > 3)															puts("Sorry, I did not understand your choice. Try again.");
						}
						switch(choice)
						{
							case 1:
								puts("\nOh no...the ogre hears and feels you around him and starts to wake up. You quickly try and hide behind a box that's close to you. The ogre is confused and starts to search for you, and as he does, you sneak around and try and find a way out. You find a small door but it's locked, so you go back to sneaking around trying to stay hidden from the ogre in search for this key since there's no other way out. After a bit, the ogre momentarily gives up as you continue to search for the key. You finally come across a smaller box on the bottom of a shelf. You look inside and find a little key. You take the key in your hands and start to crawl back to the small door you found earlier. As you approach the door, you hear the ogre get back up from where he was sitting and start to search from you again. You start to crawl faster towards the door as you hear his footsteps getting closer. You manage to get to the small door and try the key that you found in the box earlier. It fits and you unlock the door. You quickly open it and squeeze your body into the opening and snut the door behind you as you hear the ogre just a few feet away. You're now in a room full of books, ahh it's a library, but you soon realize that there's no other door in sight. You try very hard to think on how you're supposed to get out of here and back home. You have your cell phone but it's at 20 percent and there's no wifi or service here. Then suddenly a thought pops into your head, what if somewhere in this library there's a hidden bookshelf door, like the ones you see in the movies. You quickly begin to start taking books off the shelves of this library. Two big piles of books later and still no luck. You start to break down and think you may never get out of here. You pull one last book before falling to the ground in exhaustion and you hear a click. You look up at the bookcase and see it begin to open. You get up with tears in your eyes and walk into this small empty room with one remaining door. You run to the door and open it and find yourself transported back to the library where you fell asleep reading a book. The other people around you are looking at you strangely. Well, that's the last time you ever read a fictional magic book, that was scary. THE END. Play again! \n");
								break;
							case 2:
								puts("\nAs you quietly explore the room, you come across a long box on a shelf.. You turn your head back to check if the ogre is still asleep, and he is. You carely open the box and find all kinds of packaging, so you move it out of the way and discover a sword! You try to pick it up with one hand and it's way too heavy, you think 'damn I need to hit the gym'. You try picking it up with both hands and manage to get it out of the box and hold it properly. Then suddenly, you feel a hot breath on the back of your neck and realize you no longer hear the ogre snoring. You quickly turn around and find yourself face to face with the ogre so you run to your left before he manages to grab you. Mid run you decide to turn back around and fight the ogre. You swing your sword and slice his hand off that was about to grab you. The ogre yells out in pain and frustration and tries to grab you again with his other hand and you manage to dodge him and slice at his knee cap, causing him to fell over and yell again. Out of breath, you back up in an attempt to get a running start. You charge at the ogre and stab him right in the heart, killing him instantly. You drop the sword and take a moment to catch your breath before rushing towards the lever on the wall switching it down. You run back to the door you came in and realize the water stopped filling the main room. You struggle to walk through the water, that is now at your waist. You use your hands to wash off the blood and sweat off your face, and suddenly you wake up in your bed back at home but your waist and legs are still wet. You peed the bed. THE END. Play again! \n");
								break;
							case 3:
								puts("\nThe ogre wakes up and discovers you standing in front of him. You quickly try and run away but too late, he grabs you in his right hand and bites your head off. You died. THE END. Play again! \n");
								break;															}
					}
					break;
			}
					
			case 3:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 4:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 5:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 6:
			{
					while(choice != 99)
					{
					}
					break;
			}
			case 7:
			{
					int enteredRoom = 0;
					int chestLocked = 0;
					char chestInventory[4][25] = {"bottle of rum", "dead cricket", "odd device"};
					char playerInventory[4][25] = {"", "", "", ""};
					int count = 0;  // 0 is locked, 1 is open.
					char item[25];
					int bottle = 3;

					while(choice != 99)
				{ 
							if(enteredRoom == 0) {
								puts("You quickly grab the door knob and open the 7th door.  The water causes you to fall and forces you into the room. You immediately get to your feet and grab the door nob from the inside and turn it. It's jammed!  Clearly the water must be forcing it closed.");
								enteredRoom++;
							}

							
							if(bottle == 3) {
								puts("You scan the room and find a large chest at the foot of an old bed.  You also find a small table near the right side of the bed with a dusty old book and a bottle of rum. ");
							}
							else { 
								puts("You scan the room and find a large chest at the foot of an old bed.  You also find a small table near the right side of the bed with a dusty old book. ");
							}

							puts("***********************************************");
							puts("At this point you have 3 choices:");
							puts("");
							puts("1. Examine the chest.");

							if(bottle == 3) {
								puts("2. Approach the small table and examine the book next to the bottle of rum.");
							}
							else if((bottle > 0)) { 
								puts("2. Have another swig of that bottle on the small table.  Hell, you don't even notice the book right next to it at this point.");
							}
							else {
								puts("2. Approach the small table and examine the book.");
							}

							puts("3. Take a nap.");
							puts("");
							puts("What do you choose?");

							scanf("%d",&choice);
							if(choice == 1)
							{
								if(chestLocked == 0) {
									puts("***********************************************");
									puts("You walk over to the dark end of the room and approach the chest near the foot of the bed.  It is made mostly of oak with broad iron bands reinforcing it.  You jiggle the clasp but it appears to be locked.");
									puts("");
								}
								else {
									puts("***********************************************");
									puts("You open the chest and see the following:");
									for(count; count < 3; count++) {
										printf("%d. %s \n", count +1, chestInventory[count]);
									}
									puts("4. Close the chest.");
									puts("Select an item number to add it to your inventory, or simply close the chest.");
									scanf("%d",&choice);

									/*

									Insert code for moving item from the chest to the players inventory.  (if logic)

									*/
																	}
							}
							else if(choice == 2)
							{
								if(bottle == 3) {
									puts("***********************************************");
									puts("You approach the small table near the bed and pick up the book.  It's a bit dusty with faded red lettering accross the cover.  The title of the book is, 'Diary'.");
									puts("");
									puts("You open the book, and sift through the crumpled pages.  It appears to be giberish full of what looks like complex equations and symbols.  You move to the last page and you see a sketch for an odd looking device.  At the header, the page reads, 'Odd Device!'.  In the print below the sketch is a somewhat cryptic statement:'");
									puts("");
									puts("'Only this 'odd device' will get you out of this room.  But there is huge risk in using it, so I locked it away.'");
									puts("");
									puts("After reading the book, you grab the bottle of rum, pop the cork and take a huge swig!");
									puts("");
								}

								else {
									puts("");
								}
					
								// Random drunk behavior!
								x = 1 + rand()%10;

								if((x <= 5) && (bottle > 0)) {

									if(bottle != 3) {
										puts("***********************************************");
									}
										
									if(bottle == 3) {
										puts("Ahhh! Good stuff.  You have a compelling desire for another drink.  Maybe you have a problem.");
										bottle--;
									}
									else {
										puts("Mmm, this must be spiced rum.  You can't resist another drink.");
										bottle--;
									}
								}

								else if (((x > 5) && (x < 10)) && (bottle > 0)) {
									if(bottle != 3) {
										puts("***********************************************");
									}
									else {
										puts("");
									}
									puts("The rum is already starting to hit you.  You begin to feel light headed.");
									bottle--;
								}
									
								else if ((x == 10) || (bottle == 0)) {
									if(bottle != 3) {
										puts("***********************************************");
									}
									else {
										puts("");
									}
										puts("Damn!  The rum is powerful stuff.  You begin to feel dizzy.  You find yourself having a difficult time standing.  You have a compelling desire to sing.  As you contemplate what the words are to that song vaguely in your head.  You stumble, fall, knocking your head on the edge of the table.");
										puts("");
										puts("....a day passes....");
										puts("");
										puts("Your eyes slowly open.  Wow, what a headache!  Slowly your eyes begin to come into focus.  You realize you are laying on the floor on the side of the bed.  Under the bed you can see the empty bottle tipped over.  Something near it catches your eye.");
										puts("");
										puts("Next to the bottle you see a small rusted looking key.");

										bottle = 0;

										playerInventory[0] == "key";

								}
								else {
									puts("There's really nothing more for you at this table.  Move on...");
								}
					
							}
							else if(choice == 3)
							{
								puts("***********************************************");
								puts("It's been a long day. *yawn* After an hour or so of sleep, something wakes you up!  Oh yes!  There's an unexplained flood in the room outside of your jammed door.");
								puts("");
								puts("You jump out of bed, with a clearer mind.  The rest did you well.  You vaguely recall a dream about having read the dusty old book on the table next to you.");
								puts("");
							}
							else
							{
								puts("wrong choice");
								puts("");
							}
					}

					// Need to code an exit out of the loop for room 7

			}
			 case 8:
                        {
                                        while(choice != 99)
                                        {
                                                        puts("Erick Vargas' Door\n"); //I'll remove this once we submit the final product, it's just a reminder for me
                                                        puts("You enter door 8 and you find yourself on a tropical island. You see a small group of people running around collecting materials, what do you do?\n");
                                                        printf("1) Introduce yourself 2) Ask where you are 3) Just watch them 4) Ignore them 5) Try to avoid them\n");
                                                        scanf("%d",&choice);
                                                        switch(choice)
                                                        {
                                                                case 1:
                                                                {
                                                                        while(choice != 99)
                                                                        {
                                                                                puts("You walk up to them and introduce yourself to them, they happily greet you and introduce themselves to you. They ask where you are from, how do you respond?\n");
                                                                                printf(" choose \n"); //prompt choices about how to answer.
                                                                                scanf("%d",&choice);
                                                                        }
                                                                        break;
                                                                }
                                                                case 2:
                                                                {
                                                                        while(choice != 99)
                                                                        {
                                                                                puts("You walk up to them and ask where you are, they look at you confusingly and tell you that the island your on is named Destiny Island. Still looking confused they ask where you came from, how do you respond?");
                                                                                printf(" choose \n"); //prompt choices about how to answer.
                                                                                scanf("%d",&choice);
                                                                        }
                                                                        break;
                                                                }
                                                                case 3:
                                                                {
                                                                        while(choice != 99)
                                                                        {
                                                                                puts("From a distance you stay watching them, you just see that they continue running around collecting materials for some reason. As you keep watching them you notice that once they huddled up the girl of the group starts marking off on a checklist. You start to wonder more what they're trying to do, what do you do?");
                                                                                printf(" choose \n"); //prompt choices about what to do.
                                                                                scanf("%d",&choice);
                                                                        }
                                                                        break;
                                                                }
                                                                case 4:
                                                                {
                                                                        while(choice != 99)
                                                                        {
                                                                                puts("You decide to just ignore them, what do you do instead?");
                                                                                printf(" choose \n"); //prompt choices about what to do instead
                                                                                scanf("%d",&choice);
                                                                        }
                                                                        break;
                                                                }
                                                                case 5:
                                                                {
                                                                        while(choice != 99)
                                                                        {
                                                                                puts("Panicked, you decide to hide from them. Where do you choose to hide?");
                                                                                printf(" choose \n"); //prompt choices of where to hide
                                                                                scanf("%d",&choice);
                                                                        }
                                                                        break;
                                                                }
                                                        }
                                                        break;
                                        }
                        }
			case 9:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 10:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 11:
			{
					while(choice != 99)
					{
					}
					break;
			}
			case 12:
			{
					while(choice != 99)
					{
					}
					break;
			}
			case 13:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 14:
			{
					while(choice != 99)
					{
					}
					break;
			}
			case 15:
			{
					while(choice != 99)
					{

					}
					break;
			}
			case 16:
			{
					while(choice != 99)
					{

					}
					break;
			}
			case 17:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 18:			
			{
					while(choice != 99)
					{
					}
					break;
			}
			case 19:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 20:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 21:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 22:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 23:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 24:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 25:
			{
					while(choice != 99)
					{
							puts("You open the door and close it behind you.");
							puts("After you overcome the panic from almost drowning, you look around and You find yourself in a cave, the air is damp and you smell mold.");
							puts("You notice a skeleton at your feet with it's right hand clenched around something. The cave ahead leads to a tunnel and you see a door to your right.");
							puts("At this point you have 3 choices:");
							puts("1. Examine the skeleton.");
							puts("2. Proceed further ahead in the cave.");
							puts("3. Enter the door to your right.");
							scanf("%d",&choice);
							if(choice == 1)
							{
								puts("You reach down and pry open the skeleton's hand, a finger breaks loose and you place it in your pocket. Once you pry the opject free you look at it closely in the light and see it is a live grenade and the pin springs free. You drop the grenade and dash through the cave. You can hear the grenade explode, collapsing the tunnel behind you.");
								puts("To be continued...");
								break;
							}
							else if(choice == 2)
							{
								puts("You find yourself further ahead in the cave.");
								puts("To be continued....");
								break;
							}
							else if(choice == 3)
							{
								puts("You enter the and close the door behind you.");
								printf("You hear an loud voice \" %s why do you disturb me? \" \n",name);
                                                                puts("To be continued....");
								break;
							}
							else
							{
								puts("wrong choice");
							}
					}
					break;

			}
			case 26:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 27:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 28:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 29:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 30:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 31:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 32:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 33:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 34:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 35:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 36:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 37:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
		}	
	}
}

