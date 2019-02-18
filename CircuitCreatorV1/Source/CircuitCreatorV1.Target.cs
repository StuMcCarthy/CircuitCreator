// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class CircuitCreatorV1Target : TargetRules
{
	public CircuitCreatorV1Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "CircuitCreatorV1" } );
	}
}
