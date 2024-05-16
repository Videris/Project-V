Sagecreek_Town_MapScripts::
setvar VAR_0x8000, MUGSHOT_PAPER1
callnative DrawMugshot
msgbox SomeText, MSGBOX_NPC
callnative ClearMugshot
end

SomeText:
.string "hi.$"
	.byte 0
