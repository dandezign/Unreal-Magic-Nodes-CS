//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
///			Copyright 2021 (C) Bruno Xavier B. Leite
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "CS_EditorCommands.h"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define LOCTEXT_NAMESPACE "Synaptech"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void FMagicNodeSharpEditorCommands::RegisterCommands() {
	UI_COMMAND(Compile,"Compile","Recompiles and reloads script class.",EUserInterfaceActionType::Button,FInputChord());
	//
	UI_COMMAND(VSGen,"VS Gen","Generates a Visual Studio solution in /Source/Scripts/",EUserInterfaceActionType::Button,FInputChord());
	UI_COMMAND(VSCode,"VS Code","Edit source file on Visual Studio Code, if available.",EUserInterfaceActionType::Button,FInputChord());
	UI_COMMAND(VSLaunch,"VS Sln","Launches generated Solution on Visual Studio, if available.",EUserInterfaceActionType::Button,FInputChord());
	//
	UI_COMMAND(DiffTool,"Diff","Compare scripts (pick sources from Content Browser).",EUserInterfaceActionType::Button,FInputChord());
	UI_COMMAND(Help,"Help","C# 'Magic Node' Guides (under construction!).",EUserInterfaceActionType::Button,FInputChord());
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef LOCTEXT_NAMESPACE

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////