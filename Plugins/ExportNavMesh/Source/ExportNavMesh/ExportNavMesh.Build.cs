// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ExportNavMesh : ModuleRules
{
	public ExportNavMesh(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
    

        PublicIncludePaths.AddRange(
			new string[] {
                "ExportNavMesh/Public"
				// ... add public include paths required here ...
			}
			);


		PrivateIncludePaths.AddRange(
			new string[] {
                "ExportNavMesh/Private"
				// ... add other private include paths required here ...
			}
			);


		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
                "NavigationSystem",
                "Navmesh","CoreUObject", "Engine", "InputCore",
                "ProceduralMeshComponent", "Renderer"
				// ... add other public dependencies that you statically link with here ...
			}
			);


		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Projects",
				"InputCore",
				"UnrealEd",
				"LevelEditor",
				"CoreUObject",
				"Engine",
				"Slate",
                "SlateCore",
                "Navmesh",
                "ProceduralMeshComponent",
                "Renderer"
               // "NavigationSystem"
				// ... add private dependencies that you statically link with here ...
			}
			);


		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
