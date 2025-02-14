// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DONKEYKONG_USFX_ISuscriptor_generated_h
#error "ISuscriptor.generated.h already included, missing '#pragma once' in ISuscriptor.h"
#endif
#define DONKEYKONG_USFX_ISuscriptor_generated_h

#define OBSERVER_Source_DonkeyKong_USFX_ISuscriptor_h_13_SPARSE_DATA
#define OBSERVER_Source_DonkeyKong_USFX_ISuscriptor_h_13_RPC_WRAPPERS
#define OBSERVER_Source_DonkeyKong_USFX_ISuscriptor_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define OBSERVER_Source_DonkeyKong_USFX_ISuscriptor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DONKEYKONG_USFX_API UISuscriptor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISuscriptor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DONKEYKONG_USFX_API, UISuscriptor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISuscriptor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DONKEYKONG_USFX_API UISuscriptor(UISuscriptor&&); \
	DONKEYKONG_USFX_API UISuscriptor(const UISuscriptor&); \
public:


#define OBSERVER_Source_DonkeyKong_USFX_ISuscriptor_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DONKEYKONG_USFX_API UISuscriptor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DONKEYKONG_USFX_API UISuscriptor(UISuscriptor&&); \
	DONKEYKONG_USFX_API UISuscriptor(const UISuscriptor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DONKEYKONG_USFX_API, UISuscriptor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISuscriptor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISuscriptor)


#define OBSERVER_Source_DonkeyKong_USFX_ISuscriptor_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUISuscriptor(); \
	friend struct Z_Construct_UClass_UISuscriptor_Statics; \
public: \
	DECLARE_CLASS(UISuscriptor, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DonkeyKong_USFX"), DONKEYKONG_USFX_API) \
	DECLARE_SERIALIZER(UISuscriptor)


#define OBSERVER_Source_DonkeyKong_USFX_ISuscriptor_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	OBSERVER_Source_DonkeyKong_USFX_ISuscriptor_h_13_GENERATED_UINTERFACE_BODY() \
	OBSERVER_Source_DonkeyKong_USFX_ISuscriptor_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OBSERVER_Source_DonkeyKong_USFX_ISuscriptor_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	OBSERVER_Source_DonkeyKong_USFX_ISuscriptor_h_13_GENERATED_UINTERFACE_BODY() \
	OBSERVER_Source_DonkeyKong_USFX_ISuscriptor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OBSERVER_Source_DonkeyKong_USFX_ISuscriptor_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IISuscriptor() {} \
public: \
	typedef UISuscriptor UClassType; \
	typedef IISuscriptor ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define OBSERVER_Source_DonkeyKong_USFX_ISuscriptor_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IISuscriptor() {} \
public: \
	typedef UISuscriptor UClassType; \
	typedef IISuscriptor ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define OBSERVER_Source_DonkeyKong_USFX_ISuscriptor_h_10_PROLOG
#define OBSERVER_Source_DonkeyKong_USFX_ISuscriptor_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OBSERVER_Source_DonkeyKong_USFX_ISuscriptor_h_13_SPARSE_DATA \
	OBSERVER_Source_DonkeyKong_USFX_ISuscriptor_h_13_RPC_WRAPPERS \
	OBSERVER_Source_DonkeyKong_USFX_ISuscriptor_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OBSERVER_Source_DonkeyKong_USFX_ISuscriptor_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OBSERVER_Source_DonkeyKong_USFX_ISuscriptor_h_13_SPARSE_DATA \
	OBSERVER_Source_DonkeyKong_USFX_ISuscriptor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	OBSERVER_Source_DonkeyKong_USFX_ISuscriptor_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DONKEYKONG_USFX_API UClass* StaticClass<class UISuscriptor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OBSERVER_Source_DonkeyKong_USFX_ISuscriptor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
