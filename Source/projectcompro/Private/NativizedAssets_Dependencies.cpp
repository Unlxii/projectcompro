#include "NativizedAssets.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
namespace
{
	static const FBlueprintDependencyObjectRef NativizedCodeDependenties[] =
	{
	FBlueprintDependencyObjectRef(TEXT("/Engine/BasicShapes"), TEXT("Cylinder"), TEXT("Cylinder"), TEXT("/Script/Engine"), TEXT("StaticMesh"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/ArtTools/RenderToTexture/Materials/Debug"), TEXT("M_Emissive_Color"), TEXT("M_Emissive_Color"), TEXT("/Script/Engine"), TEXT("Material"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("MagicLeapARPin"), TEXT("EMagicLeapARPinType"), TEXT("/Script/CoreUObject"), TEXT("Enum"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("SceneComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("TextRenderComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineMaterials"), TEXT("DefaultTextMaterialOpaque"), TEXT("DefaultTextMaterialOpaque"), TEXT("/Script/Engine"), TEXT("Material"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineFonts"), TEXT("RobotoDistanceField"), TEXT("RobotoDistanceField"), TEXT("/Script/Engine"), TEXT("Font"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("StaticMeshComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("SphereComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("NavigationSystem"), TEXT("NavArea_Obstacle"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("PlayerCameraManager"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("HitResult"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("MagicLeapARPin"), TEXT("MagicLeapARPinState"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("MagicLeapARPin"), TEXT("EMagicLeapPassableWorldError"), TEXT("/Script/CoreUObject"), TEXT("Enum"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("GameplayStatics"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetMathLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("MagicLeapARPin"), TEXT("MagicLeapARPinInfoActorBase"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("MagicLeapARPin"), TEXT("MagicLeapARPinFunctionLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetTextLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetNodeHelperLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Actor"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("MaterialInstanceDynamic"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("PointerToUberGraphFrame"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Assets/Flipbooks"), TEXT("Player_Idle_FB"), TEXT("Player_Idle_FB"), TEXT("/Script/Paper2D"), TEXT("PaperFlipbook"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("CapsuleComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Paper2D"), TEXT("PaperFlipbookComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Pawn"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("AIModule"), TEXT("AIController"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Assets/StaticMeshs"), TEXT("WorldCylinder"), TEXT("WorldCylinder"), TEXT("/Script/Engine"), TEXT("StaticMesh"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/BasicShapes"), TEXT("Cube"), TEXT("Cube"), TEXT("/Script/Engine"), TEXT("StaticMesh"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/BasicShapes"), TEXT("BasicShapeMaterial"), TEXT("BasicShapeMaterial"), TEXT("/Script/Engine"), TEXT("Material"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints"), TEXT("CharacterController"), TEXT("CharacterController_C"), TEXT("/Script/Engine"), TEXT("BlueprintGeneratedClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints"), TEXT("CharacterController"), TEXT("Default__CharacterController_C"), TEXT("/Game/Blueprints/CharacterController"), TEXT("CharacterController_C"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints"), TEXT("Character"), TEXT("Character_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Assets/Flipbooks"), TEXT("Player_Walk_FB"), TEXT("Player_Walk_FB"), TEXT("/Script/Paper2D"), TEXT("PaperFlipbook"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Controller"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("PlayerController"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("CheatManager"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints"), TEXT("World"), TEXT("World_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass"), TEXT("")),
	};
}
const FBlueprintDependencyObjectRef& F__NativeDependencies::Get(int16 Index)
{
static const FBlueprintDependencyObjectRef& NullObjectRef = FBlueprintDependencyObjectRef();
if (Index == -1) { return NullObjectRef; }
	check((Index >= 0) && (Index < 39));
	return ::NativizedCodeDependenties[Index];
};
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
