#if !defined N_USERS_INCLUDED
	#define N_USERS_INCLUDED
#else
	#endinput
#endif

#define Player_LogOut(%0) Player_DoLogout(%0, Player_GetYID(%0))
#define MIN_PASSWORD_LENGHT 7

#define IsPlayerRegistered(%0) Player_IsRegistered(%0)
#define IsPlayerAdmin(%0) NYAN_IsPlayerAdmin(%0)

enum //Enumeration des IDs de pays
{
		nAmerica,//North America (Amerique du Nord / USA)
		mAmerica,//Middle America (Amerique centrale)
		sAmerica,//South America (Amerique du Sud)
		asia,//Asie
		europe,//Europe
		nAfrica,//North Africa (Afrique du Nord)
		sAfrica,//South Africa (Afrique du Sud)
}

enum //Enumeration des rangs d'administration
{
		MEMBER,
		HELPER,
		MODO,
		ADMIN,
		OWNER
}

enum E_PLAYERS //Enumeration des statistiques de joueur
{
		age,
		country,
		level,
		money,
		aRank,
		bool:IsBanned,
		bool:IsInVehicle
}

uvar pInfos[MAX_PLAYERS][E_PLAYERS];//UVAR globale stockant les statistiques des joueurs

stock SavePlayerDatas(playerid)//Sauvegarde les stats joueurs
{
	if(!Player_IsLoggedIn(playerid))
		return 1;
		
	Player_LogOut(playerid);
	Player_ForceLogin(playerid);
	
	return 0;
}

stock AutoSavePlayersDatas()//Sauvegarde les stats de tout les joueurs
{
	print("[WARNING] Sauvegarde automatique des comptes des joueurs conn�ct�s en cours");
	foreach(new playerid : Player)
	{
		if(!IsPlayerNPC(playerid))
			SavePlayerDatas(playerid);
	}
}

stock LoginForm(playerid)//Affiche le formulaire de connection au joueur donn�
{
	new message[60+MAX_PLAYER_NAME];
	format(message, sizeof(message), "Bonjour %s,\nEntre ton mot de passe pour te connecter", GetPlayerName(playerid));
	ShowPlayerDialog(playerid, DIALOG_STYLE_PASSWORD, dLogin, "Login", message, "Login", "Annuler");
}

stock NYAN_IsPlayerAdmin(playerid)
{
	if(!IsPlayerConnected(playerid))
		return false;
	
	if(pInfos[playerid][aRank] >= MODO)
		return true;
	return false;
}
