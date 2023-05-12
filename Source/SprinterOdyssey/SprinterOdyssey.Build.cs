// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SprinterOdyssey : ModuleRules
{
	public SprinterOdyssey(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
		PrivateDependencyModuleNames.AddRange(new string[] { "GameplayAbilities" , "GameplayTasks", "GameplayTags" });
	}
}
