//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
///			Copyright 2021 (C) Bruno Xavier B. Leite
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "MagicNodeSharp.h"
#include "Modules/ModuleManager.h"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class IMagicNodeSharp : public IModuleInterface, public IMonoCore {
public:
	static inline IMagicNodeSharp &Get() {return FModuleManager::LoadModuleChecked<IMagicNodeSharp>("MagicNodeSharp");}
	static inline bool IsAvailable() {return FModuleManager::Get().IsModuleLoaded("MagicNodeSharp");}
};

class FMagicNodeSharp : public IMagicNodeSharp {
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
public:
	virtual bool SupportsDynamicReloading() override {return false;}
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////