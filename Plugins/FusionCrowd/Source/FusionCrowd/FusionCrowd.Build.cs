// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;
using System;



public class FusionCrowd : ModuleRules
{

    private string ModulePath
    {
        get { return Path.GetFullPath(Path.Combine(ModuleDirectory, "..", "..")); }
    }

    public FusionCrowd(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);


		PublicIncludePaths.AddRange(
			new string[] {
                ModulePath + @"\ThirdParty\Inc\FusionCrowd",
				// ... add other private include paths required here ...
			}
			);

        PublicAdditionalLibraries.Add(ModulePath + @"\ThirdParty\Lib\FusionCrowd.lib");

        RuntimeDependencies.Add(ModulePath + @"\ThirdParty\Lib\FusionCrowd.dll");


        PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",

                "Engine",
                "CoreUObject",
                "ProceduralMeshComponent",
                "Renderer",
                //"MaskAI"
				// ... add other public dependencies that you statically link with here ...
			}
			);


		PrivateDependencyModuleNames.AddRange(
			new string[]
            {
                "Engine",
                "CoreUObject",
                "ProceduralMeshComponent",
                "Renderer",
                                "Projects",
                //"MaskAI"
				// ... add private dependencies that you statically link with here ...
			}
			);


		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);

       // PublicLibraryPaths.Add(Path.Combine(ModuleDirectory, "x64", "Release"));

        PublicDelayLoadDLLs.AddRange(
            new string[]
            {
                "FusionCrowd.dll"
            });
    }
}
