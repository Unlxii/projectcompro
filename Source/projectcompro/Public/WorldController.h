#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
class ACharacter_C__pf2132744816;
class APlayerController;
class AWorld_C__pf2132744816;
#include "WorldController__pf2132744816.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/WorldController.WorldController_C", OverrideNativeName="WorldController_C"))
class AWorldController_C__pf2132744816 : public APlayerController
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Character Base", Category="Default", MultiLine="true", OverrideNativeName="CharacterBase"))
	ACharacter_C__pf2132744816* bpv__CharacterBase__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Character Controller", Category="Default", MultiLine="true", OverrideNativeName="CharacterController"))
	APlayerController* bpv__CharacterController__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="World Rotate Speed", Category="Default", MultiLine="true", OverrideNativeName="WorldRotateSpeed"))
	float bpv__WorldRotateSpeed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="World Base", Category="Default", MultiLine="true", OverrideNativeName="WorldBase"))
	AWorld_C__pf2132744816* bpv__WorldBase__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue"))
	float b0l__K2Node_InputAxisEvent_AxisValue__pf;
	AWorldController_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_WorldController__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_WorldController__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_WorldController__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_Movement_K2Node_InputAxisEvent_1"))
	virtual void bpf__InpAxisEvt_Movement_K2Node_InputAxisEvent_1__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="CharacterUpdateFlipbook"))
	virtual void bpf__CharacterUpdateFlipbook__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="CharacterUpdateRotation"))
	virtual void bpf__CharacterUpdateRotation__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="WorldUpdateRotation"))
	virtual void bpf__WorldUpdateRotation__pf();
public:
};
