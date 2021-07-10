// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"

/**
 * 
 */
class LFS_API SInfoButtonWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SInfoButtonWidget)
	{}
	SLATE_ATTRIBUTE(FButtonStyle,ButtonStyle)
	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);
	//引入Sytle|获取MenuStyle
	//const struct FMainSlateStyle* MainStyle;

	FString ButtonShowText;
	FButtonStyle ButtonStyle;	
};
