//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
///			Copyright 2021 (C) Bruno Xavier B. Leite
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "MagicNodeSharpEditor_Shared.h"

#include "MagicNodeSharp.h"
//#include "MagicNodeSharpPropertyEditor.h"

#include "Engine/Blueprint.h"
#include "Templates/SubclassOf.h"
#include "AssetTypeActions_Base.h"
#include "Editor/UnrealEd/Classes/Factories/Factory.h"

#include "Runtime/Core/Public/HAL/FileManager.h"

#include "MagicNodeSharpEditor.generated.h"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define LOCTEXT_NAMESPACE "Synaptech"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

static EAssetTypeCategories::Type SY_AssetCategory;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

UCLASS()
class MAGICNODESHARPEDITOR_API UCS_ScriptFactory : public UFactory {
	GENERATED_UCLASS_BODY()
protected:
	virtual bool IsMacroFactory() const { return false; }
public:
	virtual UObject* FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, const FString &Filename, const TCHAR* Parms, FFeedbackContext* Warn, bool &bOutOperationCanceled) override;
};

UCLASS()
class MAGICNODESHARPEDITOR_API UCS_ScriptFactoryNew : public UFactory {
	GENERATED_UCLASS_BODY()
protected:
	virtual bool IsMacroFactory() const { return false; }
	virtual bool ShouldShowInNewMenu() const override { return true; }
public:
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class FATA_MagicNodeSharp : public FAssetTypeActions_Base {
private:
	TSharedRef<ISlateStyle>ActionStyle;
public:
	FATA_MagicNodeSharp(const TSharedRef<ISlateStyle>&InStyle);
public:
	virtual uint32 GetCategories() override { return SY_AssetCategory; }
	//
	virtual bool CanFilter() override { return true; }
	virtual bool HasActions(const TArray<UObject*>&InObjects) const override { return true; }
	//
	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions","FATA_CS","Magic Node (C#)"); }
	virtual UClass* GetSupportedClass() const override { return UMagicNodeSharpSource::StaticClass(); }
	virtual FColor GetTypeColor() const override { return FColor(25,185,165); }
	//
	virtual FText GetAssetDescription(const FAssetData &AssetData) const override;
	virtual void OpenAssetEditor(const TArray<UObject*>&InObjects, TSharedPtr<IToolkitHost>EditWithinLevelEditor=TSharedPtr<IToolkitHost>()) override;
	//
	virtual void GetActions(const TArray<UObject*>&InObjects, FMenuBuilder &MenuBuilder) override;
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef LOCTEXT_NAMESPACE

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////