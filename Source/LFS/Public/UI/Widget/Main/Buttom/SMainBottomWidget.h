// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"

/**
 * 
 */
class LFS_API SMainBottomWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SMainBottomWidget)
	{}
	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);

	//引入Sytle|获取MenuStyle
	const struct FMainSlateStyle* MainStyle;

	TSharedPtr<class SUniformGridPanel>Jiankong_GridPanel;

	TSharedPtr<class SMJianKongItemWidget> JianKongItemWidget_kbs;
	TSharedPtr<class SMJianKongItemWidget> JianKongItemWidget_pdf;
	TSharedPtr<class SMJianKongItemWidget> JianKongItemWidget_pbtq;
	TSharedPtr<class SMJianKongItemWidget> JianKongItemWidget_pdxl;
};
