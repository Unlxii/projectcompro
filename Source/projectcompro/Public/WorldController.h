#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"

class ACharacter_C_;
class ACharacterController_C_;
class AWorld_C_;

#include "WorldController.generated.h"


UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/WorldController.WorldController_C", OverrideNativeName="WorldController_C"))
class AWorldController_C_ : public APlayerController
{
public:
	GENERATED_BODY();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Character Base", Category="Default", MultiLine="true", OverrideNativeName="CharacterBase"))
	ACharacter_C_* CharacterBase;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Character Controller", Category="Default", MultiLine="true", OverrideNativeName="CharacterController"))
	ACharacterController_C_* CharacterController;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="World Rotate Scale", Category="Default", MultiLine="true", OverrideNativeName="WorldRotateScale"))
	float WorldRotateScale;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="World Base", Category="Default", MultiLine="true", OverrideNativeName="WorldBase"))
	AWorld_C_* WorldBase;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float K2Node_Event_DeltaSeconds;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue"))
	float K2Node_InputAxisEvent_AxisValue;

	AWorldController_C_(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void ExecuteUbergraph_WorldController0(int32 EntryPoint);
	void ExecuteUbergraph_WorldController1(int32 EntryPoint);
	void ExecuteUbergraph_WorldController2(int32 EntryPoint);

	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_Movement_K2Node_InputAxisEvent_1"))
	virtual void InpAxisEvt_Movement_K2Node_InputAxisEvent_1(float AxisValue);
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void ReceiveTick(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="CharacterUpdateFlipbook"))
	virtual void CharacterUpdateFlipbook();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="CharacterUpdateRotation"))
	virtual void CharacterUpdateRotation();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="WorldRotation"))
	virtual void WorldRotation();
public:
};
