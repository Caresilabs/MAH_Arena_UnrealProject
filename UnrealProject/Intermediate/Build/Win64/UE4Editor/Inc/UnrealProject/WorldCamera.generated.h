// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALPROJECT_WorldCamera_generated_h
#error "WorldCamera.generated.h already included, missing '#pragma once' in WorldCamera.h"
#endif
#define UNREALPROJECT_WorldCamera_generated_h

#define UnrealProject_Source_UnrealProject_Actors_WorldCamera_h_14_RPC_WRAPPERS
#define UnrealProject_Source_UnrealProject_Actors_WorldCamera_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealProject_Source_UnrealProject_Actors_WorldCamera_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAWorldCamera(); \
	friend UNREALPROJECT_API class UClass* Z_Construct_UClass_AWorldCamera(); \
	public: \
	DECLARE_CLASS(AWorldCamera, ACameraActor, COMPILED_IN_FLAGS(0), 0, UnrealProject, NO_API) \
	DECLARE_SERIALIZER(AWorldCamera) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AWorldCamera*>(this); }


#define UnrealProject_Source_UnrealProject_Actors_WorldCamera_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesAWorldCamera(); \
	friend UNREALPROJECT_API class UClass* Z_Construct_UClass_AWorldCamera(); \
	public: \
	DECLARE_CLASS(AWorldCamera, ACameraActor, COMPILED_IN_FLAGS(0), 0, UnrealProject, NO_API) \
	DECLARE_SERIALIZER(AWorldCamera) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AWorldCamera*>(this); }


#define UnrealProject_Source_UnrealProject_Actors_WorldCamera_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWorldCamera(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorldCamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldCamera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldCamera); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AWorldCamera(const AWorldCamera& InCopy); \
public:


#define UnrealProject_Source_UnrealProject_Actors_WorldCamera_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWorldCamera(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AWorldCamera(const AWorldCamera& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldCamera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldCamera); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorldCamera)


#define UnrealProject_Source_UnrealProject_Actors_WorldCamera_h_11_PROLOG
#define UnrealProject_Source_UnrealProject_Actors_WorldCamera_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_UnrealProject_Actors_WorldCamera_h_14_RPC_WRAPPERS \
	UnrealProject_Source_UnrealProject_Actors_WorldCamera_h_14_INCLASS \
	UnrealProject_Source_UnrealProject_Actors_WorldCamera_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProject_Source_UnrealProject_Actors_WorldCamera_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_UnrealProject_Actors_WorldCamera_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProject_Source_UnrealProject_Actors_WorldCamera_h_14_INCLASS_NO_PURE_DECLS \
	UnrealProject_Source_UnrealProject_Actors_WorldCamera_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProject_Source_UnrealProject_Actors_WorldCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
