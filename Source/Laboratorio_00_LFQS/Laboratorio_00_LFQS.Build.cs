// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Laboratorio_00_LFQS : ModuleRules
{
	public Laboratorio_00_LFQS(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
