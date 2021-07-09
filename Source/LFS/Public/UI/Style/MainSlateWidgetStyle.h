// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateWidgetStyle.h"
#include "Styling/SlateWidgetStyleContainerBase.h"

#include "MainSlateWidgetStyle.generated.h"

/**
 * 
 */
USTRUCT()
struct LFS_API FMainSlateStyle : public FSlateWidgetStyle
{
	GENERATED_USTRUCT_BODY()

	FMainSlateStyle();
	virtual ~FMainSlateStyle();

	// FSlateWidgetStyle
	virtual void GetResources(TArray<const FSlateBrush*>& OutBrushes) const override;
	static const FName TypeName;
	virtual const FName GetTypeName() const override { return TypeName; };
	static const FMainSlateStyle& GetDefault();

public:
	//Font
	UPROPERTY(EditAnywhere,Category=Font)
	FSlateFontInfo FontInfo_Size_16_White;//白色16号字体
	UPROPERTY(EditAnywhere,Category=Font)
	FSlateFontInfo FontInfo_Size_16_Blue;//蓝色16号字体
	UPROPERTY(EditAnywhere,Category=Font)
	FSlateFontInfo FontInfo_Size_12_White;//白色12号字体
	UPROPERTY(EditAnywhere,Category=Font)
	FSlateFontInfo FontInfo_Size_12_Blue;//蓝色12号字体
	UPROPERTY(EditAnywhere,Category=Font)
	FSlateFontInfo FontInfo_Size_12_Yellow;//黄色12号字体

	/*
	 * 背景图片
	 */
	//Main Top
	UPROPERTY(EditAnywhere,Category=Image)
	FSlateBrush Main_Top_BG;
	
	//Main Left
	UPROPERTY(EditAnywhere,Category=Image)
	FSlateBrush Main_Left_BG;
	UPROPERTY(EditAnywhere,Category=Image)
	FSlateBrush ProbarBGBrush;//进度条图片
	UPROPERTY(EditAnywhere,Category=Image)
	FSlateBrush ProbarFillImageBrush;//进度填充条图片
	UPROPERTY(EditAnywhere,Category=Image)
	FSlateBrush StateIcon_1;//状态图片
	UPROPERTY(EditAnywhere,Category=Image)
	FSlateBrush StateIcon_2;
	UPROPERTY(EditAnywhere,Category=Image)
	FSlateBrush StateIcon_3;
	UPROPERTY(EditAnywhere,Category=Image)
	FSlateBrush HuanImmageSlateBrush;
	
	//Main Right
	UPROPERTY(EditAnywhere,Category=Image)
	FSlateBrush Main_Right_BG;
	UPROPERTY(EditAnywhere,Category=Image)
	FSlateBrush Main_Right_Infotitle;
	UPROPERTY(EditAnywhere,Category=Image)
	FSlateBrush Main_Right_Buttom_Icon;
	
	//Main Bottom
	UPROPERTY(EditAnywhere,Category=Image)
	FSlateBrush Main_Bottom_BG;
	UPROPERTY(EditAnywhere,Category=Image)
	FSlateBrush ButtomIcon_1;
	UPROPERTY(EditAnywhere,Category=Image)
	FSlateBrush ButtomIcon_2;
	UPROPERTY(EditAnywhere,Category=Image)
	FSlateBrush ButtomIcon_3;
	UPROPERTY(EditAnywhere,Category=Image)
	FSlateBrush ButtomIcon_4;
	
	//Main Windows
	UPROPERTY(EditAnywhere,Category=Image)
	FSlateBrush Main_Window;

	UPROPERTY(EditAnywhere,Category=ButtonStyle)
	FButtonStyle ButtonStyle_DMY;
};

/**
 */
UCLASS(hidecategories=Object, MinimalAPI)
class UMainSlateWidgetStyle : public USlateWidgetStyleContainerBase
{
	GENERATED_BODY()

public:
	/** The actual data describing the widget appearance. */
	UPROPERTY(Category=Appearance, EditAnywhere, meta=(ShowOnlyInnerProperties))
	FMainSlateStyle WidgetStyle;

	virtual const struct FSlateWidgetStyle* const GetStyle() const override
	{
		return static_cast< const struct FSlateWidgetStyle* >( &WidgetStyle );
	}
};
