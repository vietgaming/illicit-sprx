#ifndef __ID_
#define __ID_

#include "hud.h"
#include "misc.h"
#include "natives.h"

//using namespace Hud;
using namespace Misc;
using namespace Natives;


// Support For Identifying Other Mod Menus By Community ID
// Source: http://www.nextgenupdate.com/forums/gta-5-scripts-codes/898332-all-sprx-developers-community-mod-menu-id-list.html

// Set iLLiCiT Community ID
int communityID = 5141;
void setModMenuID(){
	SET_PLAYER_MAX_ARMOUR(PlayerSelf(), communityID);
}

void checkModMenuID(){
	char *modmenu = "~b~Menu: ~r~Unknown value ~g~";
	int armor = GET_PLAYER_MAX_ARMOUR(GET_PLAYER_PED(PlayerSelected));
	switch(armor) {
		case 420:
			modmenu = "~b~Menu: ~g~Tesseract";break;
		case 666:
			modmenu = "~b~Menu: ~g~YetAnotherGTAMenu";break;
		case 1001:
			modmenu = "~b~Menu: ~g~GNXKS";break;
		case 1234:
			modmenu = "~b~Menu: ~g~Lexicon";break;
		case 1327:
			modmenu = "~b~Menu: ~g~Independence";break;
		case 1337:
			modmenu = "~b~Menu: ~g~Plethora";break;
		case 2027:
			modmenu = "~b~Menu: ~g~Limbo";break;
		case 5141:
			modmenu = "~b~Menu: ~g~Trinity";break;
		case 5759:
			modmenu = "~b~Menu: ~g~iLLiCiT";break;
		case 7777:
			modmenu = "~b~Menu: ~g~Predator";break;
		default:
			char buf[32];
			//snprintf(buf,sizeof(buf),"%i",armor);
			sprintf(buf, "%i" ,armor);
			strcat(modmenu,buf);
			break;
	}
}

#endif
 