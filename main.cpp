
Conversation opened. 1 read message.

Skip to content
Using Gmail with screen readers
Capital 
3 of 3
Game for Covering Units 1-4

Nicholas Yamamoto <nicholasnyamamoto@gmail.com>
Attachments
Wed, Oct 14, 2015, 10:58 AM
to Jim

Here is the source code for the game that I made that covers most areas of Units 1, 2, 3, and 4. Feel free to edit it any way you'd like, as I still have a few comments to put in to indicate which examples are used such as examples of comments, If/else statements, and switches.

I would love for you to use it as a fun example in class to review the major keypoints of the chapters before the Mid-Term!



Attachments area

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

int main() {
	/*******************************************************************************************************
	Welcome to the Fallout Simulator! In this game, you will create your Vault Dweller character,
	choose a weapon, and fight for survival on a mission to retrieve a water purification chip
	from nearby Vault 117 and save your home! Your decisions dictate how the game plays so choose wisely!
	*******************************************************************************************************/

	string playerName;
	char playerGender;
	int weaponSelection;
	string combatShotgun;
	string fatMan;
	string chineseAssaultRifle;
	string scopedMagnum;
	char gameStartChoice;
	int playerVaultNumber;
	int raidersHealth;
	int feralGhoulsHealth;
	int superMutantsHealth;
	int deathclawsHealth;
	int gameOver;

	//This section sets the base damage and condition for each weapon
	int combatShotgunDamage;
	int combatShotgunCondition;
	int fatManDamage;
	int fatManCondition;
	int chineseAssaultRifleDamage;
	int chineseAssaultRifleCondition;
	int scopedMagnumDamage;
	int scopedMagnumCondition;
	int experimentalMagnumAmmoDamage;

	// This section sets the variables for the decisions you can make in the 4 encounters
	int playerHealth;
	char feralGhoulsChoice;
	char raidersChoice;
	char superMutantsChoice;
	char deathclawsChoice;

	//This section sets the base health for the 4 groups of enemies
	raidersHealth = 9;
	feralGhoulsHealth = 8;
	superMutantsHealth = 10;
	deathclawsHealth = 10000;
	playerHealth = 100;

	//This section sets the damage per shot (DPS) and condition for each weapon
	combatShotgunDamage = 6;
	combatShotgunCondition = 65;
	fatManDamage = 1000;
	fatManCondition = 30;
	chineseAssaultRifleDamage = 4;
	chineseAssaultRifleCondition = 75;
	scopedMagnumDamage = 2;
	scopedMagnumCondition = 100;
	experimentalMagnumAmmoDamage = 10000;

	cout << setfill(' ') << setw(25) << "##### ROBCO INDUSTRIES UNIFIED OPERATING SYSTEM #####\n"
		<< setw(25) << "##### COPYRIGHT 2075 - 2077 ROBCO INDUSTRIES #####\n"
		<< setw(25) << "##### SECURITY PARAMETER 0112320140 ACCESS GRANTED #####\n"
		<< '\n'
		<< "Welcome, Vault Dweller. Please enter your name and Vault-Tec-assigned vault number, separated by the ENTER key"
		<< endl;
	cin >> playerName;
	cin.ignore(1000, '\n'); // Example of an iomanip (cin.ignore)
	cin >> playerVaultNumber;
	cout << "Thank you, " << playerName << ". Now, please indicate your gender. (M for MALE, F for FEMALE)"
		<< endl;
	cin >> playerGender;
	if (playerGender == 'M' || playerGender == 'm') {
		cout << "Thank you, sir." 
			 << '\n' 
			 << endl;
	}
	else if (playerGender == 'F' || playerGender == 'f') {
		cout << "Thank you, ma'am.\n"
			 << '\n'
			 << endl;
	}
	else {
		cout << "Invalid Selection. This program will now terminate.\n";
		return 0;
	}

	

	cout << "Thank you for your participation in this adventure. Vault-Tec appreciates you!\n"
		<< endl;
	system("PAUSE");
	cout << "Now, choose your weapon. "
		<< "Select 1, 2, 3, or 4.\n" << endl;
	system("PAUSE");
	cout << setfill(' ') << setw(35) << left << "WEAPON"
		<< setw(35) << right << "DAMAGE PER SHOT (DPS)"
		<< setw(35) << right << "CONDITION" << endl;
	cout << setfill(' ') << setw(35) << left << "1. Combat Shotgun"
		<< setw(35) << right << combatShotgunDamage
		<< setw(35) << right << combatShotgunCondition << endl;
	cout << '\n' << endl;
	cout << setfill(' ') << setw(35) << left << "2. Fat Man"
		<< setw(35) << right << fatManDamage
		<< setw(35) << right << fatManCondition << endl;
	cout << '\n' << endl;
	cout << setfill(' ') << setw(35) << left << "3. Chinese Assault Rifle"
		<< setw(35) << right << chineseAssaultRifleDamage
		<< setw(35) << right << chineseAssaultRifleCondition << endl;
	cout << '\n' << endl;
	cout << setfill(' ') << setw(35) << left << "4. Scoped .44 Magnum"
		<< setw(35) << right << scopedMagnumDamage
		<< setw(35) << right << scopedMagnumCondition << endl;
	cin >> weaponSelection;
	switch (weaponSelection) {
	case 1:
		cout << "You have selected the COMBAT SHOTGUN.\n" << endl;
		break;
	case 2:
		cout << "You have selected the FAT MAN.\n" << endl;
		break;
	case 3:
		cout << "You have selected the CHINESE ASSAULT RIFLE.\n" << endl;
		break;
	case 4:
		cout << "You have selected the SCOPED .44 MAGNUM.\n" << endl;
		break;
	default:
		cout << "Your selection is invalid. This program will now terminate.\n" << endl;
		return 0;
	}
	cout << "Once again, Vault-Tec and the Vault " << playerVaultNumber << " Overseer would like to\n" << "thank you, " << playerName
		<< ", for your participation in this important mission, brave Vault Dweller! \n"
		<< '\n'
		<< "Should you survive this adventure, you and ONE fellow Vault Dweller of your choice \n"
		<< "will receive TWO days worth of meal rations, and ONE bottle of slightly irradiated water!"
		<< endl;
	system("PAUSE");
	cout << "Are you ready to start your adventure? (Y for YES, N for NO): " << endl;

	cin >> gameStartChoice;
	if (gameStartChoice == 'Y' || gameStartChoice == 'y') {
		cout << "Good, now get your ass out there!" 
			<< '\n'
			<< endl;
		system("PAUSE");
	}
	else if (gameStartChoice == 'N' || gameStartChoice == 'n') {
		cout << "Too bad, now get out there.\n" 
			<< '\n'
			<< endl;
		system("PAUSE");
	}
	cout << "The vault door grinds open and you step out into the Capital Wasteland for the first time in your life,\n"
		<< "in search of a water purification chip for Vault "
		<< playerVaultNumber << ".\n"
		<< '\n';
	system("PAUSE");
	cout << "The date is November 4th, 2277; 200 years after the\n"
		<< "Great War bombs fell, plunging the entire world into a Nuclear Holocaust.\n"
		<< '\n';
	system("PAUSE");
	cout << "You continue on to Vault 117, the only vault in the Capital Wasteland with a water purification chip still intact.\n"
		 << '\n'
		 << "After wandering around the wasteland for a while, you come across a pack of 4 Feral Ghouls held up outside of an abandoned\n"
		 << "shack. They have not noticed you yet. What do you do?\n"
		 << '\n'
		 << "A. Scramble for the nearest cover.\n"
		 << "B. Run at them head on.\n";
	cin >> feralGhoulsChoice;
	if (weaponSelection == 1)
		if (feralGhoulsChoice == 'A' || feralGhoulsChoice == 'a') {
			cout << "You take cover behind an old couch, stepping on a broken Nuka Cola bottle in the process. The Feral Ghouls hear you and come running\n"
				<< "towards you. You fire a round at them, but the recoil is too strong and you only hit one of them, leaving the other\n"
				<< "3 to swarm you.\n" << endl;
			feralGhoulsHealth -= 6; // Indicates that one of the feral ghouls has died, leaving 3 left
			system("PAUSE");
			cout << "You enter VATS and target the remaining 3, killing all of them with a headshot.\n"
				<< '\n';
			feralGhoulsHealth -= 18; // Indicates that the remaining feral ghouls have died
			system("PAUSE");
			cout << "Walking away with a few cuts, looting their corpses, you have suffered 13 damage from this encounter." 
				<< '\n' 
				<< endl;
			playerHealth -= 13; // Health is now at 87
			combatShotgunCondition -= 15; // Combat Shotgun condition is now at 50
		}
		else if (weaponSelection == 1)
			if (feralGhoulsChoice == 'B' || feralGhoulsChoice == 'b') {
				cout << "You run at the ghouls with guns blazing, giving you the chance to hit and kill 2 of them with a single shot.\n";
				feralGhoulsHealth -= 2; // Indicates that one of the feral ghouls has died, leaving 3 left
				system("PAUSE");
				cout << "Just as the other 2 start to attack you, you enter VATS and finish them off with two headshots.\n";
				feralGhoulsHealth -= 6;  // Indicates that the remaining feral ghouls have died
				system("PAUSE");
				cout << "You continue on down the road, looting their corpses, suffering 9 damage from this encounter."
					<< '\n'
					<< endl;
				playerHealth -= 9; // Health is now at 91
				combatShotgunCondition -= 11; // Combat Shotgun Condition is now at 54
			}
	if (weaponSelection == 2)
		if (feralGhoulsChoice == 'A' || feralGhoulsChoice == 'a') {
			cout << "You take cover behind an old shack, luckily without alerting the ghouls. You then enter VATS and target just one of them\n"
				<< "Firing one Mini Nuke at them, the ghouls all explode into a giant mushroom cloud of body parts and eyeballs.\n"
				<< "Walking around the mushroom cloud, you are unable to loot their corpses due to them being blown to pieces.\n"
				<< "You have received 0 damage from this encounter."
				<< '\n'
				<< endl;
			feralGhoulsHealth -= 1000;  // Indicates that the feral ghouls have died
			playerHealth -= 0; // Health is still at 100
			fatManCondition -= 10; // Fat Man Condition is now at 20
		}
		else if (weaponSelection == 2)
			if (feralGhoulsChoice == 'B') {
				cout << "You see the ghouls all standing around in a nice group.\n"
					<< "Without entering VATS, you fire a single Mini Nuke right into the center of them, leaving behind a massive mushroom cloud\n"
					<< "The blast radius is bigger than you expected, and you suffer 5 damage."
					<< '\n'
					<< endl;
				feralGhoulsHealth -= 1000;  // Indicates that the remaining feral ghouls have died
				playerHealth -= 5; // Health is now at 95
				fatManCondition -= 10; // Fat Man Condition is now at 20 
			}
	if (weaponSelection == 3)
		if (feralGhoulsChoice == 'A' || feralGhoulsChoice == 'a') {
			cout << "You take cover behind a turned over Nuka Cola Machine, undetected by the ghouls.\n"
				 << "Bracing against the Nuka Cola Machine, you open fire on the group, crippling the legs of two of them.\n"
				 << '\n'
				 << endl;
			system("PAUSE");
			cout << "As you reload, the other 2 ghouls surround you and begin attacking you, crippling your head.\n"
				 << "You finish reloading and kill the 2 ghouls attacking you, then enter VATS and pick off the remaining 2.\n "
				 << '\n'
				 << endl;
			system("PAUSE");
			cout << "Your head is crippled and you have taken significant damage. Before leaving the area, a single glowing\n"
				 << "Nuka Cola Quantum rolls out of the machine. As your drink, you gain 20 health and your head is no longer crippled\n"
				 << '\n';
			system("PAUSE");
			cout << "You have suffered 15 damage from this encounter."

				 << endl;
			feralGhoulsHealth -= 16;  // Indicates that the remaining feral ghouls have died
			playerHealth -= 15; // Health is now at 85
			chineseAssaultRifleCondition -= 24; // Chinese Assault RIfle Condition is now at 51
		}
		else if (weaponSelection == 3)
			if (feralGhoulsChoice == 'B' || feralGhoulsChoice == 'b') {
				cout << "You run at the ghouls and begin firing on the group of ghouls with weak accuracy.\n"
					 << "By the time the ghouls get to you, you have already emptied 2 magazines.\n"
					<< '\n';
				system("PAUSE");
				cout << "All 4 of them swarm you and begin attacking you, crippling your head and your left arm.\n"
					<< '\n'
					 << "Miraculously, you enter VATS and kill all 4 of them.\n"
					<< '\n';
				system("PAUSE");
				cout << "Badly wounded, you have suffered 32 damage from this encounter."
					 << endl;
				feralGhoulsHealth -= 16;  // Indicates that the remaining feral ghouls have died
				playerHealth -= 32; // Health is now at 68
				chineseAssaultRifleCondition -= 35; // Chinese Assault Rifle Condition is now at 40
			}
	if (weaponSelection == 4)
		if (feralGhoulsChoice == 'A' || feralGhoulsChoice == 'a') {
			cout << "You take cover behind a partially destroyed concrete wall and survey the area, remaining undetected.\n"
				<< "Resting up against a barrel, you scope in and kill 1 of the ghouls with a single headshot.\n"
				<< '\n';
			system("PAUSE");
				feralGhoulsHealth -= 2; // Indicates that one of the feral ghouls has died 
			cout << "Miraculously, the other ghouls have not detected you yet. You scope in and pick off 1 more.\n"
				<< '\n';
			system("PAUSE");
			feralGhoulsHealth -= 2; // Indicates that one more feral ghoul has died
			cout << "Aware of your presence now, the other 2 come rushing towards you.\n"
				<< "Thanks to the increased accuracy of the scope, you enter VATS and kill the remaining 2 with a headshot."
				<< "After their corpses hit the ground, you walk over and loot them. You have suffered 0 damage from this encounter."
				<< endl;
			feralGhoulsHealth -= 4;  // Indicates that the remaining feral ghouls have died
			playerHealth -= 0; // Health is still at 100
			scopedMagnumCondition -= 8; // Scoped Magnum condition is now at 92
		}
		else if (weaponSelection == 4)
			if (feralGhoulsChoice == 'B' || feralGhoulsChoice == 'b') {
				cout << "You run up to the ghouls, who notice you and begin running towards you.\n"
					<< "Easily outnumbered, you begin firing aimlessly at them, missing each shot.\n"
					<< "Desperate, you notice a Pre-War Corvega with smoke coming from the engine in-between you and the ghouls.\n"
					<< '\n'
					<< "Standing still, you scope in to the engine bay of the Corvega and fire your last shot, hitting the engine and erupting the car into flames\n"
					<< "As the ghouls approach the burning Corvega, you dive behind a trash barrel and watch as the Corvega explodes into a magnificent\n"
					<< "mushroom cloud, sending body parts flying all over the wasteland.\n"
					<< '\n'
					<< "You walk around the resulting crater in the ground and continue on your way.\n"
					<< '\n'
					<< "You have suffered 0 damage from this encounter."
					<< endl;
				feralGhoulsHealth -= 8; // Indicates that the remaining feral ghouls have died
				playerHealth -= 0; // Health is still at 100
				scopedMagnumCondition -= 12; // Scoped Magnum condition is now at 88
			}

	system("PAUSE");
	cout << "The Pip-Boy on your wrist shows that you are about 15 miles, or 2 days, walking distance away from Vault 117.\n"
		 << endl;
	system("PAUSE");
	cout << "Eventually, you come across an abandoned diner and set-up camp for the night in a dark, barricaded bathroom stall, the only sound\n"
		<< "emitted from the slight, barely audible hum of the Pip-Boy's backlight.\n"
		<< '\n';
	system("PAUSE");
	cout << "You wake up to the sound of footsteps outside of the bathroom and voices shouting at each other.\n"
		<< "Peering through a crack in the wall, you look around and see mutliated bodies strung up with\n" 
		<< "wires hanging from the ceiling, territorial markings of Raiders.\n" 
		<< '\n'
		<< endl;
	system("PAUSE");
	cout << "Looking around the diner, you notice a group of 3 Raiders over in the corner near a safe, fighting over ways to open it.\n"
		<< "Emerging from the stall, you see a cracked window leading to the outside, and a broken section of the\n"
		<< "bathroom wall just big enough to climb through.\n"
		<< "What do you do?\n"
		<< '\n'
		<< "A. Escape out the back window.\n"
		<< "B. Take cover against the broken wall and open fire."
		<< '\n';
	cin >> raidersChoice;
	if (weaponSelection == 1)
		if (raidersChoice == 'A' || raidersChoice == 'a') {
			cout << "You crack the window open and slip your way through, landing a few feet below on the hard ground.\n"
				<< '\n'
				<< endl;
			system("PAUSE");
			cout << "However, little did you know that the Raiders placed a Frag Mine ouside the window, meaning that they\n"
				<< "were probably aware of your presence. The Frag Mine explodes, crippling your legs, yet miraculously the\n"
				<< "Raiders do not hear the explosion, allowing you to limp away to safety.\n"
				<< '\n'
				<< endl;
			system("PAUSE");
			cout << "With both legs crippled yet functional, you have suffered 25 damage from this encounter.";
			playerHealth -= 25; // Health is now at either 62 OR 66 depending on the choices made so far
		}
		else if (raidersChoice == 'B' || raidersChoice == 'b') {
			cout << "You post up against the broken wall. Aware of your Combat Shotgun's limited range, you know the\n"
				<< "only way to kill all of the Raiders is to get them to come to you.\n"
				<< '\n';
			system("PAUSE");
			cout << "You pick up a bent tin can and throw it against the wall, alerting the group. One of the Raiders comes\n" 
				<< "towards you to investigate, and as they poke their head through the wall you blow them to pieces,\n" 
				<< "exploding their brain all over the cracked bathroom mirror.\n"
				<< '\n'
				<< endl;
			system("PAUSE");
			cout << "The others run towards you, one with a Pool Cue and one with a 10mm Submachine Gun,\n"
				<< "but the wall holds up, absorbing much of the fire. The one with the Pool Cue comes up to jump over the wall,\n"
				<< "and gets his head blown off too. The last remaining Raider takes cover and tosses a frag grenade through the wall,\n"
				<< "exploding a few feet away from you and causing major damage.\n"
				<< '\n'
				<< "Bloodied by the explosion, you charge over the wall and enter VATS, missing once before killing the final Raider\n"
				<< "with a headshot. Badly wounded from the frag grenade, you limp out of the diner and continue on your way.\n"
				<< endl;
				system("PAUSE");
			cout << "You have suffered 35 damage from this encounter.\n"
				 << '\n';
		playerHealth -= 35; // Health is now at either 52 or 56 depending on the choices made so far
		combatShotgunCondition -= 15; // Combat Shotgun condition is now at 39
		}
	if (weaponSelection == 2)
		if (raidersChoice == 'A' || raidersChoice == 'a') {
			cout << "You crack the window open and slip your way through, landing a few feet below on the hard ground.\n"
				<< '\n'
				<< "However, little did you know that the Raiders placed a Frag Mine ouside the window, meaning that they\n"
				<< "were probably aware of your presence. The Frag Mine explodes, crippling your legs, yet miraculously the\n"
				<< "Raiders do not hear the explosion, allowing you to limp away to safety.\n"
				<< '\n'
				<< "With both legs crippled yet functional, you have suffered 25 damage from this encounter.";
			playerHealth -= 25; // Health is now at either 70 OR 65 depending on the choices made so far
		}
		else if (raidersChoice == 'B' || raidersChoice == 'b') {
			cout << "You post up against the broken wall, lugging the Fat Man over your shoulder, and realize that the hole in the\n"
				<< "wall doesn't give you enough room to safely fire the Mini Nuke. Quietly, you hurdle over the wall and post up against\n"
				<< "the diner counter and fire a Mini Nuke right into the middle of the group, instantly vaporizing them.\n"
				<< '\n'
				<< "However, the diner proves too small for the Fat Man's power, and you are hit with minor damage from the blast radius.\n"
				<< '\n'
				<< "Running through the door to avoid radiation poisoning, you have suffered 9 damage from this encounter."
				<< '\n';
			playerHealth -= 9; // Health is now at either 91 OR 82 depending on the choices made so far
			fatManCondition -= 10; // Fat Man condition is now at 10
		}
	if (weaponSelection == 3)
			if (raidersChoice == 'A' || raidersChoice == 'a') {
				cout << "You crack the window open and slip your way through, landing a few feet below on the hard ground.\n"
					<< '\n'
					<< "However, little did you know that the Raiders placed a Frag Mine ouside the window, meaning that they\n"
					<< "were probably aware of your presence. The Frag Mine explodes, crippling your legs, yet miraculously the\n"
					<< "Raiders do not hear the explosion, allowing you to limp away to safety.\n"
					<< '\n'
					<< "With both legs crippled yet functional, you have suffered 25 damage from this encounter.";
				playerHealth -= 25; // Health is now at either 60 OR 43 depending on the choices made so far
			}
			else if (raidersChoice == 'B' || raidersChoice =='b') {
				cout << "You post up against the cracked wall, surveying the area for cover spots. Knowing your Chinese Assault Rifle's\n"
					<< "limited range at such a distance, you scramble over the wall and take cover against a diner booth, knocking over\n"
					<< "and breaking a glass pitcher, alerting the Raiders. One comes running up to the crack with a Pool Cue, which you\n"
					<< "easily extinguish with a few well placed rounds. The other two take cover and hit you, alternating reloads so you\n"
					<< "remain pinned down.\n"
					<< '\n';
				system("PAUSE");
				cout << "As the wall crumbles from taking fire, you desperately aim your gun towards them and blind fire before having to reload,\n"
					<< "causing your weapon to jam, signaling the Raiders to charge towards you. In a last ditch effort, you unjam the gun and\n"
					<< "blind fire again, hitting a propane tank in the corner, which explodes and injures the remaining two Raiders, allowing\n"
					<< "you to enter VATS and finish them off."
					<< '\n'
					<< "Only slightly injured, you head out the front door and continue on your way.\n"
					<< '\n'
					<< "You have suffered 12 damage from this encounter.\n"
					<< '\n';
				system("PAUSE");
				playerHealth -= 12; // Health is now at 73 OR 56 depending on the choices made so far
				chineseAssaultRifleCondition -= 30; // Chinese Assault Rifle condition is now at either 10 or 21 depending on the choices made so far	
			}
	if (weaponSelection == 4)
			if (raidersChoice == 'A' || raidersChoice == 'a') {
				cout << "You crack the window open and slip your way through, landing a few feet below on the hard ground.\n"
					<< '\n';
				system("PAUSE");
				cout << "However, little did you know that the Raiders placed a Frag Mine ouside the window, meaning that they\n"
					<< "were probably aware of your presence. The Frag Mine explodes, crippling your legs, yet miraculously the\n"
					<< "Raiders do not hear the explosion, allowing you to limp away to safety.\n"
					<< '\n';
				system("PAUSE");
				cout << "With both legs crippled yet functional, you have suffered 25 damage from this encounter.\n"
					<< '\n';
				system("PAUSE");
				playerHealth -= 25; // Health is now at 75
			}
			else if (raidersChoice == 'B' || raidersChoice == 'b') {
				cout << "You post up against the cracked wall, scoping in to view your surroundings.\n"
					<< "Looking through the scope, you notice a propane tank lying in the corner near the Raiders.\n"
					<< "Knowing that the explosion would only wound them, you scramble over the wall and sneak up as far as you can,\n"
					<< "closing the gap just enough for you to deliver a well placed headshot into the Raider fumbling with the safe.\n"
					<< "Just as the other two are startled, you shoot the propane tank, crippling the arms of the other two Raiders,\n"
					<< "causing them to drop their weapons. As their weapons get lost in the rubble of the broken down diner, they panic\n"
					<< "and flee, running as fast as they can out of the front door into the wasteland.\n"
					<< "Knowing that they'll call for reinforcements, you run out the front door and head off in the opposite direction,\n"
					<< "heading towards Vault 117 just over the horizon.\n"
					<< '\n'
					<< "You have suffered 0 damage from this encounter\n"
					<< '\n';
				system("PAUSE");
				playerHealth -= 0; // Health is still at 100
				scopedMagnumCondition -= 4; // Scoped .44 Magnum condition is now at either 88 OR 84 depending on the choices made so far
			}
			cout << "The sun rises and spreads a blistering heat throughout the wastes.\n"
				<< "Looking out in the distance, you see the sign for Vault 117 just over the horizon.\n" 
				<< '\n';
			system("PAUSE");
			cout << "Clambering together what few resources you have, you continue on to the vault safely, making your way down\n"
				<< "to a ditch leading towards the massive vault door, which is open. Going through the ditch, you notice several makeshift cart cages\n"
				<< "and gore bags, sure signs that the vault either was, or is, occupied by Super Mutants.\n"
				<< '\n';
			system("PAUSE");
			cout << "The vault is dark, and in the distance you hear screaming, probably coming from Wasteland Captives that were sent on the same\n"
				<< "mission as you from the other nearby vaults.\n"
				<< '\n';
			system("PAUSE");
			cout << "You descend a few flights of stairs into the vault's reactor core, which houses the water purification chip.\n"
				<< "The sounds of footsteps and shouts echo against the thick metal walls of the vault, so you hurry through the reactor core\n"
				<< "and into the Water Purification Services room to find the water chip already pried out of the unit, lying in a pool of fresh blood,\n"
				<< "damp yet still intact, beside the mutliated remains of a Vault Dweller.\n"
				<< '\n';
			system("PAUSE");
			cout << "You pick it up and head out of the room only to hear the sounds of Super Mutants descending the stairs leading\n"
				<< "the reactor core. You take cover against the side of the door, a long hallway between you and the stairs leading up and out of the vault.\n"
				<< '\n';
			system("PAUSE");
			cout << "Two Super Mutants, each with Sledgehammers, descend the stairs and enter the hallway, making their way towards you.\n"
				<< '\n'
				<< "What do you do?\n"
				<< '\n'
				<< "A. Run for it!\n"
				<< "B. Stay back and fight."
				<< '\n'
				<< endl;
			cin >> superMutantsChoice;
		if (weaponSelection == 1)
			if (superMutantsChoice == 'A' || superMutantsChoice == 'a') {
				cout << "You remain hidden behind the wall, listening as the Super Mutants come closer and closer.\n"
					<< "Suddenly, one pauses and heads off to another room to search it while the other one continues towards you.\n"
					<< "Just as the Super Mutant steps through the doorway, you run around him and head for the stairs, the other two\n"
					<< "right behind you. Your crippled legs cause you to trip up the stairs and the Super Mutants close in on you.\n"
					<< '\n'
					<< "Unable to stand back up, you fire a shot at them, hitting one of them in the leg, only to be laughed at. You close your eyes.\n"
					<< "One of the Super Mutants picks you up and holds you against the wall by your neck while the other takes a step back and\n"
					<< "drives the Sledgehammer into your legs with such force that they tear off from your body, gushing blood everywhere.\n"
					<< '\n'
					<< "The blood loss and pain causes you to black out right before the Super Mutant tosses your body against the floor and delivers\n"
					<< "a final blow to your head, exploding your brains against the dark, thick metal walls of the vault, the water purification chip\n"
					<< "now in pieces on the ground beside the torn remains of your body.\n"
					<< '\n';
				playerHealth -= 100; // Health is now at or below 0
				system("PAUSE");
				cout << "After several weeks, the Overseer proclaims their brave traveller to be dead,"
					<< "but with the water purification chip in pieces, \n"
					<< "one can only hope the next unlucky traveller from Vault "
					<< playerVaultNumber
					<< " can survive the journey back, only to break the news to the eagerly awaiting Overseer\n"
					<< "and the vault's slowly fading population."
					<< endl;
				gameOver = 1; // Indicates that the player's health has reached 0 or below, meaning that the game is now OVER
			}
			else if (superMutantsChoice == 'B' || superMutantsChoice == 'b') {
				cout << "You remain hidden behind the wall, looking back in the room for any pieces of cover.\n"
					<< "An overturned desk catches your eye and you quickly and quietly move behind it, reloading and collecting yourself.\n"
					<< '\n';
				system("PAUSE");
				cout << "As the Super Mutants draw closer, one of them branches off into another room, leaving the other to continue on\n"
					<< "towards you. As one Super Mutants enters a room down the hallway, the other one comes towards you, unaware of\n"
					<< "your presence.\n"
					<< '\n';
				system("PAUSE");
				cout << "Pausing right in front of the desk you're hiding behind, the Super Mutant stops and turns around,\n"
					<< "giving you the perfect chance to shot him in the back of his head, causing his brains to explode forward and coat\n"
					<< "the floor in front of him. The second Super Mutant now comes running.\n"
					<< '\n';
				system("PAUSE");
				superMutantsHealth -= 10; // Indicates that one of the Super Mutants has died, leaving one remaining
				cout << "You charge over the desk and run through the door, catching the Super Mutant in the hallway coming towards you.\n"
					<< "A well placed shot in VATS cripples both of his legs, slowing the Super Mutant down to a pathetic crawl.\n"
					<< "With the Super Mutant left limping towards you, one last shot to the head finishes him.\n"
					<< "You step over the corpses of the Super Mutants and walk down the hallway, the sounds of screaming Captives and\n"
					<< "belligerant Super Mutants no longer present. Quickly and quietly, you exit the vault through the front door,\n"
					<< "place a marker in your Pip-Boy on Vault "
					<< playerVaultNumber
					<< " and continue the long journey home."
					<< '\n';
				superMutantsHealth -= 10;
				playerHealth -= 0;
				gameOver = 2;// Health is still at 62, 66, 52, or 56 depending on the precious choices made
			}
		if (weaponSelection == 2)
			if (superMutantsChoice == 'A' || superMutantsChoice == 'a') {
				cout << "You remain hidden behind the wall, listening as the Super Mutants come closer and closer.\n"
					<< "Suddenly, one pauses and heads off to another room to search it while the other one continues towards you.\n"
					<< "Just as the Super Mutant steps through the doorway, you run around him and head for the stairs, the other two\n"
					<< "right behind you. Your crippled legs cause you to trip up the stairs and the Super Mutants close in on you.\n"
					<< '\n'
					<< "Unable to stand back up, you fire a shot at them, hitting one of them in the leg, only to be laughed at. You close your eyes.\n"
					<< "One of the Super Mutants picks you up and holds you against the wall by your neck while the other takes a step back and\n"
					<< "drives the Sledgehammer into your legs with such force that they tear off from your body, gushing blood everywhere.\n"
					<< '\n'
					<< "The blood loss and pain causes you to black out right before the Super Mutant tosses your body against the floor and delivers\n"
					<< "a final blow to your head, exploding your brains against the dark, thick metal walls of the vault, the water purification chip\n"
					<< "now in pieces on the ground beside the torn remains of your body.\n"
					<< '\n';
				playerHealth -= 100; // Health is now at or below 0
				system("PAUSE");
				cout << "After several weeks, the Overseer proclaims their brave traveller to be dead,"
					<< "but with the water purification chip in pieces, \n"
					<< "one can only hope the next unlucky traveller from Vault "
					<< playerVaultNumber
					<< " can survive the journey back, only to break the news to the eagerly awaiting Overseer\n"
					<< "and the vault's slowly fading population."
					<< endl;
				gameOver = 1; // Indicates that the player's health has reached 0 or below, meaning that the game is now OVER
			}
			else if (superMutantsChoice == 'B' || superMutantsChoice == 'b') {
				cout << "Aware of the massive blast radius of the Mini Nuke along with the confinedness of the vault's tight hallways,\n"
					<< "you take several steps back and step in front of the doorway, entering VATS and firing right in the middle of\n"
					<< "the two Super Mutants.\n"
					<< '\n';
				system("PAUSE");
				cout << "Thankfully, the Mini Nuke drops a few feet behind them, blowing the Super Mutants to shreds while keeping you\n"
					<< "just out of harm's way.\n"
					<< '\n';
				system("PAUSE");
				superMutantsHealth -= 1000; // This indicates that the Super Mutants just got #rekt
				cout << "However, the area is now filled with radiation. With no other option, you cling onto the water chip and make a\n"
					<< "dash for the stairs, walking through the radiation and absorbing a good amount of it.\n"
					<< "The vault now remains quiet, the occassional sound of a Radroach's pitter patter echoing off in the distance\n"
					<< '\n';
				system("PAUSE");
				cout << "Quickly and quietly, you exit the vault through the front door, \n"
					<< "place a marker in your Pip-Boy on Vault "
					<< playerVaultNumber
					<< " and continue the long journey home."
					<< '\n';
				system("PAUSE");
				gameOver = 2;
			}
		if (weaponSelection == 3)
			if (superMutantsChoice == 'A' || superMutantsChoice == 'a'){
			cout << "You remain hidden behind the wall, listening as the Super Mutants come closer and closer.\n"
				<< "Suddenly, one pauses and heads off to another room to search it while the other one continues towards you.\n"
				<< "Just as the Super Mutant steps through the doorway, you run around him and head for the stairs, the other two\n"
				<< "right behind you. Your crippled legs cause you to trip up the stairs and the Super Mutants close in on you.\n"
				<< '\n'
				<< "Unable to stand back up, you fire a shot at them, hitting one of them in the leg, only to be laughed at. You close your eyes.\n"
				<< "One of the Super Mutants picks you up and holds you against the wall by your neck while the other takes a step back and\n"
				<< "drives the Sledgehammer into your legs with such force that they tear off from your body, gushing blood everywhere.\n"
				<< '\n'
				<< "The blood loss and pain causes you to black out right before the Super Mutant tosses your body against the floor and delivers\n"
				<< "a final blow to your head, exploding your brains against the dark, thick metal walls of the vault, the water purification chip\n"
				<< "now in pieces on the ground beside the torn remains of your body.\n"
				<< '\n';
			playerHealth -= 100; // Health is now at or below 0
			system("PAUSE");
			cout << "After several weeks, the Overseer proclaims theirt raveller to be dead,"
				<< "but with the water purification chip in pieces, \n"
				<< "one can only hope the next unlucky traveller from Vault "
				<< playerVaultNumber
				<< " can survive the journey back, only to break the news to the eagerly awaiting Overseer\n"
				<< "and the vault's slowly fading population."
				<< endl;
			gameOver = 1; // Indicates that the player's health has reached 0 or below, meaning that the game is now OVER
				}
			else if (superMutantsChoice == 'B' || superMutantsChoice == 'b') {
				cout << "As the Super Mutants walk down the hallway making their way towards you, you look back in the room.\n"
					<< '\n';
				system("PAUSE");
				cout << '\n'
					<< "Searching for anything that can create a distraction, you find a Vault Boy Bobblehead sitting on a desk.\n"
					<< "You place it in the middle of the floor and retreat behind a desk. The Super Mutants walk in the door only to see the\n"
					<< "Bobblehead sitting perfectly in the center of the floor.\n"
					<< '\n';
				system("PAUSE");
				cout << "As one of them kneels down to pick it up, you pop out from behind the desk and fire, unloading a full clip into the\n"
					<< "both of them before they can even react.\n"
					<< '\n';
				system("PAUSE");
				cout << "As you reload, one of them swings their Sledgehammer at you, missing your head by inches, clipping your hands and\n"
					<< "knocks the gun loose.\n"
					<< '\n';
				system("PAUSE");
				cout << "The gun flies to the floor and the other Super Mutant charges.\n"
					<< '\n';
				system("PAUSE");
				cout << "Just as the Super Mutant begins to swing, you pick up the gun from the floor, quickly enter VATS, and target both of them\n"
					<< "emptying an entire clip into them before they drop to the floor dead just as your gun jams.\n"
					<< '\n';
				system("PAUSE");
				cout << "You step over the corpses of the Super Mutants and walk down the hallway, the sounds of screaming Captives and\n"
					<< "belligerant Super Mutants no longer present. Quickly and quietly, you exit the vault through the front door,\n"
					<< "place a marker in your Pip-Boy on Vault "
					<< playerVaultNumber
					<< " and continue the long journey home.\n"
					<< '\n';
				system("PAUSE");
				playerHealth -= 10; // Health is now at 91, 82, 73, or 56 depending on previous choices
				gameOver = 2;
			}
			if (weaponSelection == 4)
				if (superMutantsChoice == 'A' || superMutantsChoice == 'a') {
					cout << "You remain hidden behind the wall, listening as the Super Mutants come closer and closer.\n"
						<< "Suddenly, one pauses and heads off to another room to search it while the other one continues towards you.\n"
						<< "Just as the Super Mutant steps through the doorway, you run around him and head for the stairs, the other two\n"
						<< "right behind you. Your crippled legs cause you to trip up the stairs and the Super Mutants close in on you.\n"
						<< '\n'
						<< "Unable to stand back up, you fire a shot at them, hitting one of them in the leg, only to be laughed at. You close your eyes.\n"
						<< "One of the Super Mutants picks you up and holds you against the wall by your neck while the other takes a step back and\n"
						<< "drives the Sledgehammer into your legs with such force that they tear off from your body, gushing blood everywhere.\n"
						<< '\n'
						<< "The blood loss and pain causes you to black out right before the Super Mutant tosses your body against the floor and delivers\n"
						<< "a final blow to your head, exploding your brains against the dark, thick metal walls of the vault, the water purification chip\n"
						<< "now in pieces on the ground beside the torn remains of your body.\n"
						<< '\n';
					playerHealth -= 100; // Health is now at or below 0
					system("PAUSE");
					cout << "After several weeks, the Overseer proclaims their traveller to be dead,"
						<< "but with the water purification chip in pieces, \n"
						<< "one can only hope the next unlucky traveller from Vault "
						<< playerVaultNumber
						<< " can survive the journey back, only to break the news to the eagerly awaiting Overseer\n"
						<< "and the vault's slowly fading population."
						<< endl;
					gameOver = 1; // Indicates that the player's health has reached 0 or below, meaning that the game is now OVER
				}

				else if (superMutantsChoice == 'B' || superMutantsChoice == 'b') {
					cout << "As the Super Mutants slowly approach the door, you sneak over to the back wall, knowing that the\n"
						 << "meager firepower of your Magnum is of no match to their tough, naturally armored bodies.\n"
						<< '\n';
					system("PAUSE");
					cout << "Along the back wall hidden behind a cubicle wall lies a maintenance terminal, somehow still active,\n"
						 << "and a quick hack logs you into the maintenance technician's profile. The flickering screen of the terminal reads: "
						<< '\n';
					system("PAUSE");
					cout << setw(100) << right << "ROBCO INDUSTRIES UNIFIED OPERATING SYSTEM\n"
						<< setw(98) << right << "COPYRIGHT 2075 - 2077 ROBCO INDUSTRIES\n"
						<< setw(85) << right << "Server -3-\n"
						<< '\n'
						<< '\n'
						<< "VAULT 117 MAINTENANCE TERMINAL #3\n"
						<< ">\\ WELCOME, USER.\n"
						<< '\n'
						<< '\n'
						<< '\n'
						<< "___________________________________________________________________________________\n"
						<< "VIEW MAINTENANCE LOGS\n"
						<< '\n'
						<< "START WATER HEATER\n"
						<< '\n'
						<< "ACTIVATE PROTECTRON\n"
						<< '\n'
						<< "CONTACT OVERSEER\n"
						<< '\n';
					system("PAUSE");
					cout << "You click the \"START WATER HEATER\" function and a stream of natural gas spills into the hallway from\n"
						 << "a broken pipe, filling the hallway with a noxious odor.\n"
						<< '\n';
					system("PAUSE");
					cout << "Aware of what you just did, you run in the doorway, scope in, and fire at the gas pipe before slamming the door shut,\n"
						<< "sending the entire hallaway up in flames, leaving the trapped Super Mutants to roast in synchronous agony.\n"
						<< '\n';
					system("PAUSE");
					superMutantsHealth -= 1000; // Indicates that the Super Mutants are both dead
					cout << "As you ready yourself to run through the burning hallway, you head back to the water purification\n"
						 << "unit and examine the corpse of the Vault Dweller, whose bloodied vault suit reads \"Vault "
						<< playerVaultNumber
						<< "\" on the back. On his corpse, you find a single bullet, marked\n"
						<< "\"ROBCO EXPERIMENTAL E.M.M.E ROUND. FOR USE WITH .44 MAGNUM ONLY.\"\n"
						<< '\n';
					system("PAUSE");
					cout << "You stuff the chip and the round into your pockets and run through the hallway, leaping over the charred corpes\n"
						<< "of the Super Mutants and briefly catching fire before patting it out.\n"
						<< '\n';
					system("PAUSE");
					cout << "Quickly, you exit the vault through the front door, \n"
						<< "place a marker in your Pip-Boy on Vault "
						<< playerVaultNumber
						<< " and continue the long journey home."
						<< "You have suffered 25 damage from this encounter.\n"
						<< '\n';
					system("PAUSE");
					playerHealth -= 25; // Health is either at 50 OR 75
					scopedMagnumCondition -= 2;// Scoped .44 Magnum is now at either 86 OR 82 depending on the previous decisions
					gameOver = 2;
				}

				if (gameOver == 1) {
					system("PAUSE");
					cout << '\n'
						<< "And so ends the story of "
						<< playerName
						<< ", who stepped through the great door of Vault "
						<< playerVaultNumber
						<< ", brave, determined, and lucky enough\n"
						<< "to have made it so far, only to suffer the same, tragic fate many others before "
						<< "them had met time and time again.\n"
						<< '\n'
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "***************************************************************|GAME OVER|*****************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< endl;
					return 0;
				}
			cout << "Mentally broken, physically battered and tired, you forgo sleep for the road ahead,\n"
				 << "eager to collapse into the arms both your loved one and a good doctor.\n"
				 << '\n';
					system("PAUSE");
			cout << "The wastes are oddly quiet, minus the occassional Bloatfly or Mole Rat sighting.\n"
				 << "Before you know it, your Pip-Boy shows that you are but a few stone's throw away from the vault.\n"
				 << "However, as you scale the small hill that poses itself before a long valley that separates you from home,\n"
				 << "you stumble upon an Enclave Camp.\n"
				 << '\n';
			system("PAUSE");
			cout << "You immediately drop to the ground and slowly crawl behind a bush to take a better look.\n"
				<< "At first glance, you notice that, mysteriously, the entire camp is empty; not a single soldier in sight.\n"
				<< '\n';
			system("PAUSE");
			cout << "A handful of empty tents and barracks make up the majority of the camp, with a Vertibird, disabled and scrapped\n"
				 << "for parts lying off-center in the middle.\n"
				 << '\n';
			system("PAUSE");
			cout << "You move through the camp quietly, yet relaxed and full of relief as the vault door lies ahead, when suddenly,\n"
				 << "you come across a Deathclaw cage, cracked open.\n"
				 << '\n';
			system("PAUSE");
			cout << "Before you can sneak past, the Deathclaw emerges from the cage, tearing through the door and throwing it aside,\n"
				 << "and begins running straight towards you.\n"
				<< '\n';
			system("PAUSE");
			cout << "With the vault door in sight, you run as fast as you can, tripping over your weak, crippled legs\n"
				 << "and collapsing to the ground.\n"
				<< '\n';
			system("PAUSE");
			cout << "The Deathclaw extends his claws and charges at you.\n"
				<< '\n'
				<< "What do you do?\n"
				<< '\n';
				system("PAUSE");
			cout << "A. Crawl towards the door.\n"
				 << "B. Fight it!\n"
				<< '\n';
			cin >> deathclawsChoice;
			if (weaponSelection == 1)
				if (deathclawsChoice == 'A' || deathclawsChoice == 'a') {
					cout << "Your legs tremble under your body, but your worn tread catches the hard dirt underneath you\n"
						 << "and you take off in a slight dash.\n"
						 << '\n';
					system("PAUSE");
					cout << "Your feet give out after a few feet and you crash into the ground. The Deathclaw hovers over you.\n"
						<< '\n';
					system("PAUSE");
					cout << "The Deathclaw drags you back to his cage, where he uses his razor\n"
						<< "sharp claws to rip your body into two pieces.\n"
						<< '\n';
					system("PAUSE");
					cout << "The water chip remains intact in your pocket as the rest of your body gets ripped to shreds,\n"
						<< "the fate of Vault "
						<< playerVaultNumber
						<< " lying in the hands of the most feared creature in the Capital Wasteland."
						<< endl;
					playerHealth -= 100; // Health is now at or below 0, meaning the player has died
					gameOver = 1;
				}
				else if (deathclawsChoice == 'B' || deathclawsChoice == 'b') {
					cout << "Your legs crippled, yet somewhat usable, you rise up to your knees and try to stand.\n"
					<< "They give out and you collapse to the floor.\n"
					<< '\n';
			system("PAUSE");
			cout << "With the Deathclaw closing in, you enter VATS, target the Deathclaw's head, and pull the trigger.\n"
				<< '\n';
			system("PAUSE");
			cout << "The Combat Shotgun fires three rounds into the Deathclaw's head, ticking away only a fraction of its health.\n"
				<< "Out of ammo, the Deathclaw picks you up and jams his claws straight through your chest, its jagged claws\n"
				<< "tearing apart your insides like a gutting knife.\n"
				<< '\n';
			system("PAUSE");
			cout << "The water chip remains intact in your pocket as your body gets ripped to shreds before being dragged into the cage,\n"
				<< "the fate of Vault "
				<< playerVaultNumber
				<< " lying in the hands of the most feared creature in the Capital Wasteland."
				<< endl;
			playerHealth -= 100; // Health is now at or below 0, meaning the player has died
			gameOver = 1;
			system("PAUSE");
			}

			if (weaponSelection == 2)
				if (deathclawsChoice == 'A' || deathclawsChoice == 'a') {
					cout << "With your legs crippled, you miserably crawl along the ground, burying your tired hands into the\n"
						<< "soil as you inch your way closer to the door.\n"
						<< '\n';
					system("PAUSE");
					cout << "You make it about 10 feet before the Deathclaw drags you back to his cage, where he uses his razor\n"
						<< "sharp claws to rip your body into two pieces.\n"
						<< '\n';
					system("PAUSE");
					cout << "The water chip remains intact in your pocket as the rest of your body gets ripped to shreds,\n"
						<< "the fate of Vault "
						<< playerVaultNumber
						<< " lying in the hands of the most feared creature in the Capital Wasteland."
						<< endl;
					playerHealth -= 100; // Health is now at or below 0, meaning the player has died
					gameOver = 1;
				}
				else if (deathclawsChoice == 'B' || deathclawsChoice == 'b') {
				cout << "Your legs crippled, yet somewhat usable, you rise up to your knees and try to stand.\n"
				<< "They give out and you collapse to the floor.\n"
					<< '\n';
				system("PAUSE");
			cout << "With the Deathclaw closing in, you load the Fat Man and pull the trigger.\n"
				<< '\n';
			system("PAUSE");
			cout << "However, the Fat Man jams and fails to fire.\n"
				<< "Defenseless, the Deathclaw picks you up and jams his claws straight through your chest, its jagged claws\n"
				<< "tearing apart your insides like a gutting knife.\n"
				<< '\n';
			system("PAUSE");
			cout << "The water chip remains intact in your pocket as your body gets ripped to shreds before being dragged into the cage,\n"
				<< "the fate of Vault "
				<< playerVaultNumber
				<< " lying in the hands of the most feared creature in the Capital Wasteland."
				<< endl;
				playerHealth -= 100; // Health is now at or below 0, meaning the player has died
				gameOver = 1;
				system("PAUSE");
			}
				if (weaponSelection == 3)
					if (deathclawsChoice == 'A' || deathclawsChoice == 'a') {
						cout << "With your legs crippled, you miserably crawl along the ground, burying your tired hands into the\n"
							<< "soil as you claw your way closer to the door.\n"
							<< '\n';
						system("PAUSE");
						cout << "You make it about 10 feet before the Deathclaw drags you back to his cage, where he uses his razor\n"
							<< "sharp claws to rip your body into two pieces.\n"
							<< '\n';
						system("PAUSE");
						cout << "The water chip remains intact in your pocket as the rest of your body gets ripped to shreds,\n"
							<< "the fate of Vault "
							<< playerVaultNumber
							<< " lying in the hands of the most feared creature in the Capital Wasteland."
							<< endl;
						playerHealth -= 100; // Health is now at or below 0, meaning the player has died
						gameOver = 1;
					}
					else if (deathclawsChoice == 'B' || deathclawsChoice == 'b') {
					cout << "The Deathclaw charges towards you.\n"
						<< '\n';
					system("PAUSE");
					cout << "You pick up your Assault Rifle and aim it towards the Deathclaw and squeeze the trigger.\n"
						<< '\n';
					system("PAUSE");
					cout << "However, the magazine is empty and the gun simply clicks.\n"
						<< '\n';
					system("PAUSE");
					cout << "Defenseless, the Deathclaw picks you up and stabs you in the chest with his razor sharp claws,\n"
						<< "tearing apart your insides like a gutting knife.\n"
						<< '\n';
					system("PAUSE");
					cout << "The water chip remains intact in your pocket as your body gets ripped to shreds before being dragged into the cage,\n"
						<< "the fate of Vault "
						<< playerVaultNumber
						<< " lying in the hands of the most feared creature in the Capital Wasteland."
						<< endl;
					playerHealth -= 100; // Health is now at or below 0, meaning the player has died
					gameOver = 1;
					system("PAUSE");
				}
			if (weaponSelection == 4)
				if (deathclawsChoice == 'A' || deathclawsChoice == 'a') {
					cout << "With your legs crippled, you miserably crawl along the ground, burying your tired hands into the\n"
						<< "soil as you claw your way closer to the door.\n"
						<< '\n';
					system("PAUSE");
					cout << "You make it about 10 feet before the Deathclaw drags you back to his cage, where he uses his razor\n"
						<< "sharp claws to rip your body into two pieces.\n"
						<< '\n';
					system("PAUSE");
					cout << "The water chip remains intact in your pocket as the rest of your body gets ripped to shreds,\n"
						<< "the fate of Vault "
						<< playerVaultNumber
						<< " lying in the hands of the most feared creature in the Capital Wasteland."
						<< endl;
					playerHealth -= 100; // Health is now at or below 0, meaning the player has died
					gameOver = 1;
				}
				else if (deathclawsChoice == 'B' || deathclawsChoice == 'b') {
					cout << "The Deathclaw charges towards you, quickly closing the gap.\n"
						<< '\n';
					system("PAUSE");
					cout << "As the Deathclaw stands a mere 20 feet away from you, you remember the experimental round that you\n"
						 << "picked up earlier from the dead traveller\n"
						<< '\n';
					system("PAUSE");
					cout << "With the Deathclaw closing in, you load the round into your Magnum and fire.\n"
						<< '\n';
					system("PAUSE");
					cout << "The Deathclaw stops dead in its tracks, convulses, and collapses to the floor, screaming in agony.\n"
						<< '\n';
					system("PAUSE");
					cout << "After a few seconds, the Deathclaw lets out a final gasp for breath and tenses before becoming motionless.\n"
						<< '\n';
					system("PAUSE");
					cout << "With the Deathclaw dead, you prop yourself up to your feet and slowly limp towards the vault door.\n"
						<< '\n';
					system("PAUSE");
					cout << "You clang the butt of the Magnum against the door and collapse, the world around you slowly turning black\n"
						<< '\n';
					system("PAUSE");
					cout << "Consciousness fading, the last things you remember is the screeching of the vault door grinding open and\n"
						<< "a soft, warm hand reaching out towards you."
						<< '\n'
						<< '\n'
						<< '\n'
						<< '\n'
						<< '\n'
						<< '\n';
					system("PAUSE");
					cout << "You awake on a cot in the Vault's entrance in a freshly pressed Vault "
						 << playerVaultNumber
						<< "suit, your Magnum and one\n"
						<< "bottle of SLIGHTLY irradiated water laying beside you, as promised.\n"
						<< '\n';
					system("PAUSE");
					cout << "Suddenly, the Vault Overseer emerges from behind a locked door with two dwellers behind him, both carrying\n"
						 << "Laser Rifles.\n"
						<< '\n';
					system("PAUSE");
					cout << "You sit up on the cot and stand, realizing that your legs are no longer crippled; the Vault doctor must've visited you.\n"
						<< '\n';
					system("PAUSE");
					cout << "The Overseer steps towards you, his bodyguards aligning his sides.\n"
						<< '\n';
					system("PAUSE");
					cout << "After a moment of silence, the Vault door screeches open again, the dry, arid atmosphere of the wasteland greets you once again.\n"
						<< '\n';
					system("PAUSE");
					cout << "THe Overseer approaches you and hands you a case of .44 Magnum ammo, sighs, and says to you: \n"
						<< '\n';
					system("PAUSE");
					cout << "I've made a lot of tough decisions since I took this position. \n"
						 << playerName
						 << "But non eof them harder than this one.\n"
						 << '\n';
					system("PAUSE");
					cout << "I'm afraid you have seen too much of the world outside to fit in safely with us here.\n"
						<< '\n';
					system("PAUSE");
					cout << "I'm sorry."
						<< '\n';
					system("PAUSE");
					cout << "You're a hero...\n"
						<< '\n';
					system("PAUSE");
					cout << "And you have to leave.\n"
						<< '\n';
					system("PAUSE");
					cout << '\n'
						<< '\n'
						<< '\n'
						<< '\n'
						<< '\n'
						<< '\n'
						<< '\n'
						<< '\n'
						<< '\n'
						<< '\n'
						<< '\n'
						<< '\n'
						<< '\n'
						<< '\n'
						<< '\n'
						<< '\n'
						<< '\n'
						<< '\n'
						<< '\n'
						<< '\n'
						<< '\n'
						<< '\n'
						<< '\n'
						<< "Accepting your fate, you slowly exit the vault from the way you came just a few hours ago, \n"
						<< "leaving behind everything you had worked for.\n"
						<< '\n';
					system("PAUSE");
					cout << "The Vault door slides closed behind you, screeching to final halt.\n"
						<< '\n';
					system("PAUSE");
					cout << "With a pocket full of Magnum ammo, a SLIGHTLY irradiated bottle of water, and a hole in your heart,\n"
						<< "you set off into the Capital Wasteland once again, while the sun sets off in the distance just over the horizon.\n"
						<< '\n';
					system("PAUSE");
					cout << "And so ends the tale of the Lone Wanderer, cast away from the only home they knew to suffer the harshness of the\n"
						<< "Wild Wasteland.\n"
						<< '\n'
						<< "With the broken road stretching out far ahead as the eye can see, your journey has only just begun.\n"
						<< '\n';
					system("PAUSE");
					cout << "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "***************************************************************|GAME OVER|*****************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< endl;
					return 0;
				}

	
			/*
			This section of code is the kill screen, meaning if the player health drops to 0 or below,
			it sets the variable gameOver = 1 and outputs the GAME OVER screen before terminating the
			program completely. */
			

			if (gameOver == 1) {
				system("PAUSE");
				cout << '\n'
						<< "And so ends the story of "
						<< playerName
						<< ", who stepped through the great door of Vault "
						<< playerVaultNumber
						<< ", brave, determined, and lucky enough\n"
						<< "to have made it so far, only to suffer the same, tragic fate many others before "
						<< "them had met time and time again.\n"
						<< '\n'
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "***************************************************************|GAME OVER|*****************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< "*******************************************************************************************************************************************************\n"
						<< endl;
					return 0;
				}
} 