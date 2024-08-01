// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AgoraTest53 : ModuleRules
{
	public AgoraTest53(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
