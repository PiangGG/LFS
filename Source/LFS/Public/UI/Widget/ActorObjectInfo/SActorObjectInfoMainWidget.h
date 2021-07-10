// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"

/**
 * 
 */
class LFS_API SActorObjectInfoMainWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SActorObjectInfoMainWidget)
	{}
	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);

	//引入Sytle|获取MenuStyle
	const struct FMainSlateStyle* MainStyle;

	//Button
	TSharedPtr<class SButton> Button_DLXX;
	TSharedPtr<class SButton> Button_TZXX;
	TSharedPtr<class SButton> Button_YXSJ;
	TSharedPtr<class SButton> Button_DLGZ;

	//信息面板
	TSharedPtr<class SDLXXWidget> DLXXWidget;
};
