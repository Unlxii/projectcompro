#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
class UBoxComponent;
class UStaticMeshComponent;
class ACharacter_C_;
class ACharacterController_C_;
#include "World.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/World.World_C", OverrideNativeName="World_C"))
class AWorld_C_ : public APawn
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Box"))
	UBoxComponent* MyBox;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="WorldCyliderMesh"))
	UStaticMeshComponent* WorldCyliderMesh;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Cube"))
	UStaticMeshComponent* Building1;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Cube1"))
	UStaticMeshComponent* Building2;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Cube2"))
	UStaticMeshComponent* Building3;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Cube3"))
	UStaticMeshComponent* Building4;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Cube4"))
	UStaticMeshComponent* Building5;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Cube5"))
	UStaticMeshComponent* Building6;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Cube6"))
	UStaticMeshComponent* Building7;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Rotate Scale", Category="Default", MultiLine="true", OverrideNativeName="RotateScale"))
	float RotateScale;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player Base", Category="Default", MultiLine="true", OverrideNativeName="PlayerBase"))
	ACharacter_C_* PlayerBase;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player Controller", Category="Default", MultiLine="true", OverrideNativeName="PlayerController"))
	ACharacterController_C_* PlayerController;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorLocation_SweepHitResult"))
	FHitResult K2_SetActorLocation_SweepHitResult;

	AWorld_C_(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void ExecuteUbergraph_World(int32 bpp__EntryPoint__pf);
	
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	
		virtual void ReceiveBeginPlay();
public:
};
