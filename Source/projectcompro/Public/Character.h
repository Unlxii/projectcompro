#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"

class UPaperFlipbookComponent;
class UCapsuleComponent;
#include "Character.generated.h"


UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Character.Character_C", OverrideNativeName="Character_C"))
class ACharacter_C_ : public APawn
{
public:
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PlayerFlipbook"))
	UPaperFlipbookComponent* PlayerFlipbook;

	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Collider"))
	UCapsuleComponent* Collider;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorTransform_SweepHitResult"))
	FHitResult K2_SetActorTransform_SweepHitResult;

	ACharacter_C_(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);

	void ExecuteUbergraph_Character(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))

	virtual void ReceiveBeginPlay();
public:
};
