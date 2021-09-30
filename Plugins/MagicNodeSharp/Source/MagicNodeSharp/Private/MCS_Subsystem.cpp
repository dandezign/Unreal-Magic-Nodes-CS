//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
///			Copyright 2021 (C) Bruno Xavier B. Leite
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "MCS_Subsystem.h"
#include "IMagicNodeSharp.h"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void UMonoGameInstanceSubsystem::Initialize(FSubsystemCollectionBase &Collection) {
	static IMagicNodeSharp &MonoCore = FMagicNodeSharp::Get();
	//
	MonoCore.BeginPlay();
}

void UMonoGameInstanceSubsystem::Deinitialize() {
	static IMagicNodeSharp &MonoCore = FMagicNodeSharp::Get();
	//
#if WITH_EDITOR
	MonoCore.EndPlay();
#endif
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////