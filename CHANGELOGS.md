﻿Version 1
=========

Milestone 01A (1#M01A):
	+ Version intial

Milestone 01B (1#M01B):
	+ Divers corrections

Milestone 02A (1#M02A):
	+ Supression de Y_Language/Y_Text (qui étais intégré à Y_Users)
	+ La fonction SendMessageToNearPlayers() utilise désormais les couleurs "embeded" (1 couleur pour le nom du joueur, 1 autre pour le message)
	+ Correction d'un minuscule oubli

Milestone 02B (1#M02B):
	+ Corrections de bugs liés à Foreach

Milestone 03 (1#M03A):
	+ Systeme d'inscription & login continué
	+ Divers optimisations mineurs

Milestone 04 (1#M04A):
	+ Programmation pseudo+ modulaire

Milestone 04B (1#M04B):
	+ Préparation en vue du systeme de vehicules
	+ Préparation en vue du systeme d'administration

Milestone 05A (1#M05A):
	+ Mise en place des couleurs (boite de dialogue)
	+ Amélioration de la mise en page
	+ Ajouts de couleurs

Milestone 06A (1#M06A):
	+ Correction d'une erreur mineur au nivaeu des couleurs intégrés
	+ Création de la bibliotheque n_carparts (enumeration des différents éléments de tunning).

Milestone 06B (1#M06B):
	+ Correction d'une erreur au nivaeu des couleurs intégrés (la précédente correction etais mal faite)
	+ Nouvelles callbacks (OnPlayerquit(), OnPlayerKicked() et OnPlayerCrash() )

Milestone 07A (1#M07A):
	+ Le nom du joueur est dorénavant stocké dans ces données (Uvar), cela consomme plus de ressources serveurs mais simplifie le travaille des developeurs.

Milestone 08A (1#M08A):
	+ Correction d'une erreur de logique dans la fonction SendMessageToNearplayers()
	+ La bibliotheque n_carparts a été fondamentalement re+ faite
	+ La fonction RefreshPlayerName a été crée

Milestone 09A (1#M09A):
	+ Utilisation de FDLG pour les dialogues
	+ Debut du syteme d'enregistrement de véhicules
	+ 2/3 petites améliorations/corrections minimes

Milestone 09B (1#M09B)
	+ Finalisation de la fonction INTERNAL_RegisterVehicle() dan la bibliotheque n_vehicles
	+ Création de la fonction Regsiter_Vehicle (utilisation de la programmation modulaire)
	+ Création de la commande [/amenu]
	+ Créations de divers dialogues nécéssaires aux fonctionalités précédamant cités
	+ Supression de la fonction RefreshPlayerName()
