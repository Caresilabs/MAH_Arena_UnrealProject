// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef UNREALPROJECT_PawnCar_generated_h
#error "PawnCar.generated.h already included, missing '#pragma once' in PawnCar.h"
#endif
#define UNREALPROJECT_PawnCar_generated_h

#define UnrealProject_Source_UnrealProject_PawnCar_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSlow) \
	{ \
		P_FINISH; \
		this->Slow(); \
	} \
 \
	DECLARE_FUNCTION(execBoost) \
	{ \
		P_FINISH; \
		this->Boost(); \
	} \
 \
	DECLARE_FUNCTION(execNotifyHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_MyComp); \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_UBOOL(Z_Param_bSelfMoved); \
		P_GET_STRUCT(FVector,Z_Param_HitLocation); \
		P_GET_STRUCT(FVector,Z_Param_HitNormal); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		this->NotifyHit(Z_Param_MyComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_bSelfMoved,Z_Param_HitLocation,Z_Param_HitNormal,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
	} \
 \
	DECLARE_FUNCTION(execSetLives) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_lives); \
		P_FINISH; \
		this->SetLives(Z_Param_lives); \
	} \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetHealth(); \
	} \
 \
	DECLARE_FUNCTION(execDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_amount); \
		P_FINISH; \
		this->Damage(Z_Param_amount); \
	} \
 \
	DECLARE_FUNCTION(execApplyImpulse) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_UBOOL(Z_Param_bUtilizeHealth); \
		P_FINISH; \
		this->ApplyImpulse(Z_Param_Impulse,Z_Param_bUtilizeHealth); \
	}


#define UnrealProject_Source_UnrealProject_PawnCar_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSlow) \
	{ \
		P_FINISH; \
		this->Slow(); \
	} \
 \
	DECLARE_FUNCTION(execBoost) \
	{ \
		P_FINISH; \
		this->Boost(); \
	} \
 \
	DECLARE_FUNCTION(execNotifyHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_MyComp); \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_UBOOL(Z_Param_bSelfMoved); \
		P_GET_STRUCT(FVector,Z_Param_HitLocation); \
		P_GET_STRUCT(FVector,Z_Param_HitNormal); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		this->NotifyHit(Z_Param_MyComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_bSelfMoved,Z_Param_HitLocation,Z_Param_HitNormal,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
	} \
 \
	DECLARE_FUNCTION(execSetLives) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_lives); \
		P_FINISH; \
		this->SetLives(Z_Param_lives); \
	} \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetHealth(); \
	} \
 \
	DECLARE_FUNCTION(execDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_amount); \
		P_FINISH; \
		this->Damage(Z_Param_amount); \
	} \
 \
	DECLARE_FUNCTION(execApplyImpulse) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_UBOOL(Z_Param_bUtilizeHealth); \
		P_FINISH; \
		this->ApplyImpulse(Z_Param_Impulse,Z_Param_bUtilizeHealth); \
	}


#define UnrealProject_Source_UnrealProject_PawnCar_h_11_EVENT_PARMS
extern UNREALPROJECT_API  FName UNREALPROJECT_CallInvincible;
#define UnrealProject_Source_UnrealProject_PawnCar_h_11_CALLBACK_WRAPPERS
#define UnrealProject_Source_UnrealProject_PawnCar_h_11_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAPawnCar(); \
	friend UNREALPROJECT_API class UClass* Z_Construct_UClass_APawnCar(); \
	public: \
	DECLARE_CLASS(APawnCar, APawn, COMPILED_IN_FLAGS(0), 0, UnrealProject, NO_API) \
	DECLARE_SERIALIZER(APawnCar) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<APawnCar*>(this); }


#define UnrealProject_Source_UnrealProject_PawnCar_h_11_INCLASS \
	private: \
	static void StaticRegisterNativesAPawnCar(); \
	friend UNREALPROJECT_API class UClass* Z_Construct_UClass_APawnCar(); \
	public: \
	DECLARE_CLASS(APawnCar, APawn, COMPILED_IN_FLAGS(0), 0, UnrealProject, NO_API) \
	DECLARE_SERIALIZER(APawnCar) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<APawnCar*>(this); }


#define UnrealProject_Source_UnrealProject_PawnCar_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APawnCar(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APawnCar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawnCar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawnCar); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API APawnCar(const APawnCar& InCopy); \
public:


#define UnrealProject_Source_UnrealProject_PawnCar_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API APawnCar(const APawnCar& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawnCar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawnCar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APawnCar)


#define UnrealProject_Source_UnrealProject_PawnCar_h_8_PROLOG \
	UnrealProject_Source_UnrealProject_PawnCar_h_11_EVENT_PARMS


#define UnrealProject_Source_UnrealProject_PawnCar_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_UnrealProject_PawnCar_h_11_RPC_WRAPPERS \
	UnrealProject_Source_UnrealProject_PawnCar_h_11_CALLBACK_WRAPPERS \
	UnrealProject_Source_UnrealProject_PawnCar_h_11_INCLASS \
	UnrealProject_Source_UnrealProject_PawnCar_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProject_Source_UnrealProject_PawnCar_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_UnrealProject_PawnCar_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProject_Source_UnrealProject_PawnCar_h_11_CALLBACK_WRAPPERS \
	UnrealProject_Source_UnrealProject_PawnCar_h_11_INCLASS_NO_PURE_DECLS \
	UnrealProject_Source_UnrealProject_PawnCar_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProject_Source_UnrealProject_PawnCar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
