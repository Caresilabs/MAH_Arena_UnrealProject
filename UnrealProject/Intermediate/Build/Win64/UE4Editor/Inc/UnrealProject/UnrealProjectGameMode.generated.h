// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALPROJECT_UnrealProjectGameMode_generated_h
#error "UnrealProjectGameMode.generated.h already included, missing '#pragma once' in UnrealProjectGameMode.h"
#endif
#define UNREALPROJECT_UnrealProjectGameMode_generated_h

#define UnrealProject_Source_UnrealProject_UnrealProjectGameMode_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCarController) \
	{ \
		P_FINISH; \
		this->SetCarController(); \
	}


#define UnrealProject_Source_UnrealProject_UnrealProjectGameMode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCarController) \
	{ \
		P_FINISH; \
		this->SetCarController(); \
	}


#define UnrealProject_Source_UnrealProject_UnrealProjectGameMode_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAUnrealProjectGameMode(); \
	friend UNREALPROJECT_API class UClass* Z_Construct_UClass_AUnrealProjectGameMode(); \
	public: \
	DECLARE_CLASS(AUnrealProjectGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, UnrealProject, NO_API) \
	DECLARE_SERIALIZER(AUnrealProjectGameMode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AUnrealProjectGameMode*>(this); }


#define UnrealProject_Source_UnrealProject_UnrealProjectGameMode_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesAUnrealProjectGameMode(); \
	friend UNREALPROJECT_API class UClass* Z_Construct_UClass_AUnrealProjectGameMode(); \
	public: \
	DECLARE_CLASS(AUnrealProjectGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, UnrealProject, NO_API) \
	DECLARE_SERIALIZER(AUnrealProjectGameMode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AUnrealProjectGameMode*>(this); }


#define UnrealProject_Source_UnrealProject_UnrealProjectGameMode_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUnrealProjectGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUnrealProjectGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnrealProjectGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnrealProjectGameMode); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AUnrealProjectGameMode(const AUnrealProjectGameMode& InCopy); \
public:


#define UnrealProject_Source_UnrealProject_UnrealProjectGameMode_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AUnrealProjectGameMode(const AUnrealProjectGameMode& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnrealProjectGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnrealProjectGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUnrealProjectGameMode)


#define UnrealProject_Source_UnrealProject_UnrealProjectGameMode_h_11_PROLOG
#define UnrealProject_Source_UnrealProject_UnrealProjectGameMode_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_UnrealProject_UnrealProjectGameMode_h_14_RPC_WRAPPERS \
	UnrealProject_Source_UnrealProject_UnrealProjectGameMode_h_14_INCLASS \
	UnrealProject_Source_UnrealProject_UnrealProjectGameMode_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProject_Source_UnrealProject_UnrealProjectGameMode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_UnrealProject_UnrealProjectGameMode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProject_Source_UnrealProject_UnrealProjectGameMode_h_14_INCLASS_NO_PURE_DECLS \
	UnrealProject_Source_UnrealProject_UnrealProjectGameMode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProject_Source_UnrealProject_UnrealProjectGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
