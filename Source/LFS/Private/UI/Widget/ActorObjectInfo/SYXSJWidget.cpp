// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Widget/ActorObjectInfo/SYXSJWidget.h"

#include "SlateOptMacros.h"
#include "UI/Style/LFSStyle.h"
#include "UI/Style/MainSlateWidgetStyle.h"
#include "Widgets/Images/SImage.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION
void SYXSJWidget::Construct(const FArguments& InArgs)
{
	MainStyle=&LFSStyle::Get().GetWidgetStyle<FMainSlateStyle>("BPMainStyle");
	ChildSlot
	[
		// Populate the widget
		SNew(SBox)
		[
			SNew(SOverlay)
			+SOverlay::Slot()
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			[
				SNew(SImage)
				.Image(&MainStyle->Center_Window2)
			]
			+SOverlay::Slot()
			[
				SNew(SBorder)
				.Padding(FMargin(30.0f))
				[
					SNew(SVerticalBox)
					+SVerticalBox::Slot()
					[
						SNew(SHorizontalBox)
						+SHorizontalBox::Slot()
						.HAlign(HAlign_Fill)
						[
							SNew(SBorder)
							[
								SNew(STextBlock)
								.Font(MainStyle->FontInfo_Size_12_White)
								.Text(FText::FromString(TEXT("统一时间")))
							]
								
						]
						+SHorizontalBox::Slot()
						[
							SNew(SBorder)
							[
								SNew(STextBlock)
								.Font(MainStyle->FontInfo_Size_12_White)
								.Text(FText::FromString(TEXT("Time")))
							]
						]
					]
					+SVerticalBox::Slot()
					[
						SNew(SHorizontalBox)
						+SHorizontalBox::Slot()
						[
							SNew(SBorder)
							[
								SNew(STextBlock)
								.Font(MainStyle->FontInfo_Size_12_White)
								.Text(FText::FromString(TEXT("运行电压(Uab)")))
							]
						]
						+SHorizontalBox::Slot()
						[
							SNew(SBorder)
							[
								SNew(STextBlock)
								.Font(MainStyle->FontInfo_Size_12_White)
								.Text(FText::FromString(TEXT("10.34kv")))
							]
						]
					]
					+SVerticalBox::Slot()
					[
						SNew(SHorizontalBox)
						+SHorizontalBox::Slot()
						[
							SNew(SBorder)
							[
								SNew(STextBlock)
								.Font(MainStyle->FontInfo_Size_12_White)
								.Text(FText::FromString(TEXT("运行电流la")))
							]
						]
						+SHorizontalBox::Slot()
						[
							SNew(SBorder)
							[
								SNew(STextBlock)
								.Font(MainStyle->FontInfo_Size_12_White)
								.Text(FText::FromString(TEXT("166A")))
							]
						]
					]
					+SVerticalBox::Slot()
					[
						SNew(SHorizontalBox)
						+SHorizontalBox::Slot()
						[
							SNew(SBorder)
							[
								SNew(STextBlock)
								.Font(MainStyle->FontInfo_Size_12_White)
								.Text(FText::FromString(TEXT("有功")))
							]
						]
						+SHorizontalBox::Slot()
						[
							SNew(SBorder)
							[
								SNew(STextBlock)
								.Font(MainStyle->FontInfo_Size_12_White)
								.Text(FText::FromString(TEXT("2.96MW")))
							]
						]
					]
					+SVerticalBox::Slot()
					[
						SNew(SHorizontalBox)
						+SHorizontalBox::Slot()
						[
							SNew(SBorder)
							[
							SNew(STextBlock)
							.Font(MainStyle->FontInfo_Size_12_White)
							.Text(FText::FromString(TEXT("无功")))	
							]
						]
						+SHorizontalBox::Slot()
						[
							SNew(SBorder)
							[
								SNew(STextBlock)
								.Font(MainStyle->FontInfo_Size_12_White)
								.Text(FText::FromString(TEXT("0.43MVar")))
							]
						]
					]
				]
			]
		]
	];
	
}
END_SLATE_FUNCTION_BUILD_OPTIMIZATION
