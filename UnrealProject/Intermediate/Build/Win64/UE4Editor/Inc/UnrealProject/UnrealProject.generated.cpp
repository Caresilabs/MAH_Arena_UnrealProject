// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UnrealProject.h"
#include "UnrealProject.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealProject() {}
	void APawnCar::CallInvincible()
	{
		ProcessEvent(FindFunctionChecked(UNREALPROJECT_CallInvincible),NULL);
	}
	void APawnCar::StaticRegisterNativesAPawnCar()
	{
		FNativeFunctionRegistrar::RegisterFunction(APawnCar::StaticClass(),"ApplyImpulse",(Native)&APawnCar::execApplyImpulse);
		FNativeFunctionRegistrar::RegisterFunction(APawnCar::StaticClass(),"Boost",(Native)&APawnCar::execBoost);
		FNativeFunctionRegistrar::RegisterFunction(APawnCar::StaticClass(),"Damage",(Native)&APawnCar::execDamage);
		FNativeFunctionRegistrar::RegisterFunction(APawnCar::StaticClass(),"GetHealth",(Native)&APawnCar::execGetHealth);
		FNativeFunctionRegistrar::RegisterFunction(APawnCar::StaticClass(),"NotifyHit",(Native)&APawnCar::execNotifyHit);
		FNativeFunctionRegistrar::RegisterFunction(APawnCar::StaticClass(),"Slow",(Native)&APawnCar::execSlow);
	}
	IMPLEMENT_CLASS(APawnCar, 1905772490);
	void ACarController::StaticRegisterNativesACarController()
	{
	}
	IMPLEMENT_CLASS(ACarController, 530177351);
	void AUnrealProjectGameMode::StaticRegisterNativesAUnrealProjectGameMode()
	{
	}
	IMPLEMENT_CLASS(AUnrealProjectGameMode, 1049404836);
	void AWorldCamera::StaticRegisterNativesAWorldCamera()
	{
	}
	IMPLEMENT_CLASS(AWorldCamera, 4042760998);
FName UNREALPROJECT_CallInvincible = FName(TEXT("CallInvincible"));
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API class UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_APawn();
	ENGINE_API class UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_APlayerController();
	ENGINE_API class UClass* Z_Construct_UClass_AGameMode();
	ENGINE_API class UClass* Z_Construct_UClass_ACameraActor();

	UNREALPROJECT_API class UFunction* Z_Construct_UFunction_APawnCar_ApplyImpulse();
	UNREALPROJECT_API class UFunction* Z_Construct_UFunction_APawnCar_Boost();
	UNREALPROJECT_API class UFunction* Z_Construct_UFunction_APawnCar_CallInvincible();
	UNREALPROJECT_API class UFunction* Z_Construct_UFunction_APawnCar_Damage();
	UNREALPROJECT_API class UFunction* Z_Construct_UFunction_APawnCar_GetHealth();
	UNREALPROJECT_API class UFunction* Z_Construct_UFunction_APawnCar_NotifyHit();
	UNREALPROJECT_API class UFunction* Z_Construct_UFunction_APawnCar_Slow();
	UNREALPROJECT_API class UClass* Z_Construct_UClass_APawnCar_NoRegister();
	UNREALPROJECT_API class UClass* Z_Construct_UClass_APawnCar();
	UNREALPROJECT_API class UClass* Z_Construct_UClass_ACarController_NoRegister();
	UNREALPROJECT_API class UClass* Z_Construct_UClass_ACarController();
	UNREALPROJECT_API class UClass* Z_Construct_UClass_AUnrealProjectGameMode_NoRegister();
	UNREALPROJECT_API class UClass* Z_Construct_UClass_AUnrealProjectGameMode();
	UNREALPROJECT_API class UClass* Z_Construct_UClass_AWorldCamera_NoRegister();
	UNREALPROJECT_API class UClass* Z_Construct_UClass_AWorldCamera();
	UNREALPROJECT_API class UPackage* Z_Construct_UPackage_UnrealProject();
	UFunction* Z_Construct_UFunction_APawnCar_ApplyImpulse()
	{
		struct PawnCar_eventApplyImpulse_Parms
		{
			FVector Impulse;
			bool bUtilizeHealth;
		};
		UObject* Outer=Z_Construct_UClass_APawnCar();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ApplyImpulse"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x04820401, 65535, sizeof(PawnCar_eventApplyImpulse_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUtilizeHealth, PawnCar_eventApplyImpulse_Parms, bool);
			UProperty* NewProp_bUtilizeHealth = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bUtilizeHealth"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUtilizeHealth, PawnCar_eventApplyImpulse_Parms), 0x0000000000000080, CPP_BOOL_PROPERTY_BITMASK(bUtilizeHealth, PawnCar_eventApplyImpulse_Parms), sizeof(bool), true);
			UProperty* NewProp_Impulse = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Impulse"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(Impulse, PawnCar_eventApplyImpulse_Parms), 0x0000000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Force"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bUtilizeHealth"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("PawnCar.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APawnCar_Boost()
	{
		UObject* Outer=Z_Construct_UClass_APawnCar();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Boost"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Speed"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("PawnCar.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APawnCar_CallInvincible()
	{
		UObject* Outer=Z_Construct_UClass_APawnCar();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CallInvincible"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x08020800, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Invincibility"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("PawnCar.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APawnCar_Damage()
	{
		struct PawnCar_eventDamage_Parms
		{
			float amount;
		};
		UObject* Outer=Z_Construct_UClass_APawnCar();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Damage"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(PawnCar_eventDamage_Parms));
			UProperty* NewProp_amount = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("amount"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(amount, PawnCar_eventDamage_Parms), 0x0000000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Health"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("PawnCar.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APawnCar_GetHealth()
	{
		struct PawnCar_eventGetHealth_Parms
		{
			float ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_APawnCar();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetHealth"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(PawnCar_eventGetHealth_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, PawnCar_eventGetHealth_Parms), 0x0000000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Health"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("PawnCar.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APawnCar_NotifyHit()
	{
		struct PawnCar_eventNotifyHit_Parms
		{
			UPrimitiveComponent* MyComp;
			AActor* Other;
			UPrimitiveComponent* OtherComp;
			bool bSelfMoved;
			FVector HitLocation;
			FVector HitNormal;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		UObject* Outer=Z_Construct_UClass_APawnCar();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("NotifyHit"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x00C20400, 65535, sizeof(PawnCar_eventNotifyHit_Parms));
			UProperty* NewProp_Hit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hit"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(Hit, PawnCar_eventNotifyHit_Parms), 0x0000008008000182, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_NormalImpulse = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NormalImpulse"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(NormalImpulse, PawnCar_eventNotifyHit_Parms), 0x0000000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_HitNormal = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitNormal"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(HitNormal, PawnCar_eventNotifyHit_Parms), 0x0000000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_HitLocation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitLocation"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(HitLocation, PawnCar_eventNotifyHit_Parms), 0x0000000000000080, Z_Construct_UScriptStruct_FVector());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSelfMoved, PawnCar_eventNotifyHit_Parms, bool);
			UProperty* NewProp_bSelfMoved = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bSelfMoved"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSelfMoved, PawnCar_eventNotifyHit_Parms), 0x0000000000000080, CPP_BOOL_PROPERTY_BITMASK(bSelfMoved, PawnCar_eventNotifyHit_Parms), sizeof(bool), true);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, PawnCar_eventNotifyHit_Parms), 0x0000000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_Other = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Other"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(Other, PawnCar_eventNotifyHit_Parms), 0x0000000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_MyComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MyComp"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(MyComp, PawnCar_eventNotifyHit_Parms), 0x0000000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("PawnCar.h"));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_MyComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APawnCar_Slow()
	{
		UObject* Outer=Z_Construct_UClass_APawnCar();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Slow"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Speed"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("PawnCar.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APawnCar_NoRegister()
	{
		return APawnCar::StaticClass();
	}
	UClass* Z_Construct_UClass_APawnCar()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage_UnrealProject();
			OuterClass = APawnCar::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_APawnCar_ApplyImpulse());
				OuterClass->LinkChild(Z_Construct_UFunction_APawnCar_Boost());
				OuterClass->LinkChild(Z_Construct_UFunction_APawnCar_CallInvincible());
				OuterClass->LinkChild(Z_Construct_UFunction_APawnCar_Damage());
				OuterClass->LinkChild(Z_Construct_UFunction_APawnCar_GetHealth());
				OuterClass->LinkChild(Z_Construct_UFunction_APawnCar_NotifyHit());
				OuterClass->LinkChild(Z_Construct_UFunction_APawnCar_Slow());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bInvincible, APawnCar, bool);
				UProperty* NewProp_bInvincible = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bInvincible"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bInvincible, APawnCar), 0x0000000000000005, CPP_BOOL_PROPERTY_BITMASK(bInvincible, APawnCar), sizeof(bool), true);
				UProperty* NewProp_SlowSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SlowSpeed"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(SlowSpeed, APawnCar), 0x0000000000000005);
				UProperty* NewProp_BoostSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BoostSpeed"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(BoostSpeed, APawnCar), 0x0000000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(IsOnGround, APawnCar, bool);
				UProperty* NewProp_IsOnGround = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("IsOnGround"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(IsOnGround, APawnCar), 0x0000000000000005, CPP_BOOL_PROPERTY_BITMASK(IsOnGround, APawnCar), sizeof(bool), true);
				UProperty* NewProp_Movement = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Movement"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(Movement, APawnCar), 0x0000000000080009, Z_Construct_UClass_UFloatingPawnMovement_NoRegister());
				UProperty* NewProp_BoxComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BoxComponent"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(BoxComponent, APawnCar), 0x0000000000080009, Z_Construct_UClass_UBoxComponent_NoRegister());
				UProperty* NewProp_StaticMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StaticMesh"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(StaticMesh, APawnCar), 0x0000000000080009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_APawnCar_ApplyImpulse()); // 484391370
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_APawnCar_Boost()); // 3566689241
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_APawnCar_CallInvincible()); // 2176260549
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_APawnCar_Damage()); // 3329980359
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_APawnCar_GetHealth()); // 2391039533
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_APawnCar_NotifyHit()); // 3743499161
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_APawnCar_Slow()); // 214672116
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PawnCar.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("PawnCar.h"));
				MetaData->SetValue(NewProp_bInvincible, TEXT("Category"), TEXT("PawnCar"));
				MetaData->SetValue(NewProp_bInvincible, TEXT("ModuleRelativePath"), TEXT("PawnCar.h"));
				MetaData->SetValue(NewProp_SlowSpeed, TEXT("Category"), TEXT("PawnCar"));
				MetaData->SetValue(NewProp_SlowSpeed, TEXT("ModuleRelativePath"), TEXT("PawnCar.h"));
				MetaData->SetValue(NewProp_BoostSpeed, TEXT("Category"), TEXT("PawnCar"));
				MetaData->SetValue(NewProp_BoostSpeed, TEXT("ModuleRelativePath"), TEXT("PawnCar.h"));
				MetaData->SetValue(NewProp_IsOnGround, TEXT("Category"), TEXT("PawnCar"));
				MetaData->SetValue(NewProp_IsOnGround, TEXT("ModuleRelativePath"), TEXT("PawnCar.h"));
				MetaData->SetValue(NewProp_Movement, TEXT("Category"), TEXT("PawnCar"));
				MetaData->SetValue(NewProp_Movement, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Movement, TEXT("ModuleRelativePath"), TEXT("PawnCar.h"));
				MetaData->SetValue(NewProp_BoxComponent, TEXT("Category"), TEXT("PawnCar"));
				MetaData->SetValue(NewProp_BoxComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_BoxComponent, TEXT("ModuleRelativePath"), TEXT("PawnCar.h"));
				MetaData->SetValue(NewProp_StaticMesh, TEXT("Category"), TEXT("PawnCar"));
				MetaData->SetValue(NewProp_StaticMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_StaticMesh, TEXT("ModuleRelativePath"), TEXT("PawnCar.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APawnCar(Z_Construct_UClass_APawnCar, TEXT("APawnCar"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(APawnCar);
	UClass* Z_Construct_UClass_ACarController_NoRegister()
	{
		return ACarController::StaticClass();
	}
	UClass* Z_Construct_UClass_ACarController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APlayerController();
			Z_Construct_UPackage_UnrealProject();
			OuterClass = ACarController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900284;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_Car = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Car"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(Car, ACarController), 0x0000000000000005, Z_Construct_UClass_APawnCar_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CarController.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("CarController.h"));
				MetaData->SetValue(NewProp_Car, TEXT("Category"), TEXT("CarController"));
				MetaData->SetValue(NewProp_Car, TEXT("ModuleRelativePath"), TEXT("CarController.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACarController(Z_Construct_UClass_ACarController, TEXT("ACarController"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACarController);
	UClass* Z_Construct_UClass_AUnrealProjectGameMode_NoRegister()
	{
		return AUnrealProjectGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AUnrealProjectGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameMode();
			Z_Construct_UPackage_UnrealProject();
			OuterClass = AUnrealProjectGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2090028C;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("UnrealProjectGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("UnrealProjectGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnrealProjectGameMode(Z_Construct_UClass_AUnrealProjectGameMode, TEXT("AUnrealProjectGameMode"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealProjectGameMode);
	UClass* Z_Construct_UClass_AWorldCamera_NoRegister()
	{
		return AWorldCamera::StaticClass();
	}
	UClass* Z_Construct_UClass_AWorldCamera()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACameraActor();
			Z_Construct_UPackage_UnrealProject();
			OuterClass = AWorldCamera::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Input Rendering"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Actors/WorldCamera.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Actors/WorldCamera.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWorldCamera(Z_Construct_UClass_AWorldCamera, TEXT("AWorldCamera"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldCamera);
	UPackage* Z_Construct_UPackage_UnrealProject()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/UnrealProject")), false, false));
			ReturnPackage->PackageFlags |= PKG_CompiledIn | 0x00000000;
			FGuid Guid;
			Guid.A = 0x8DF9E7D0;
			Guid.B = 0x7BE87498;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
