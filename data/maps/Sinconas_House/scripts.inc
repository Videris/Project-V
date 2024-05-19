Sinconas_House_MapScripts::
	.byte 0

SagecreekTown_Sinconas_House_EventScript_Bookshelf::
	msgbox SagecreekTown_Sinconas_House_Text_ResearchOnPokemon, MSGBOX_SIGN
	end

SagecreekTown_Sinconas_House_EventScript_Math::
	msgbox SagecreekTown_Sinconas_House_Text_Math, MSGBOX_SIGN
	end
	
SagecreekTown_Sinconas_House_Text_ResearchOnPokemon:
	.string "It's the Professor's research on\n"
	.string "POKéMON.$"
	
	SagecreekTown_Sinconas_House_Text_Math:
	.string "The Professor has written some symbols\n"
	.string "and numbers on the board.\l"
	.string "Better not mess with it.$"
