// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Widget/InRoom/SInRoomRightBttomWidget_Item_3.h"
#include "SlateOptMacros.h"
#include "UI/Style/LFSStyle.h"
#include "UI/Style/MainSlateWidgetStyle.h"
#include "UI/Widget/InRoom/SInRoomRightBttomWidgetItem3Item.h"
#include "Widgets/Images/SImage.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/Layout/SUniformGridPanel.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION
void SInRoomRightBttomWidget_Item_3::Construct(const FArguments& InArgs)
{
	MainStyle=&LFSStyle::Get().GetWidgetStyle<FMainSlateStyle>("BPMainStyle");
	
	ChildSlot
	[
	// Populate the widget
		SNew(SBox)
		[
			SNew(SOverlay)
			+SOverlay::Slot()
			[
				SNew(SImage)
				.Image(&MainStyle->LeftBottom_Window3)
			]
			+SOverlay::Slot()
			.Padding(FMargin(20.0f))
			[
				SNew(SVerticalBox)
				+SVerticalBox::Slot()
				.Padding(FMargin(0,0,0,0))
				.AutoHeight()
				.HAlign(HAlign_Left)
				.VAlign(VAlign_Center)
				[
					SAssignNew(Button_UniformGridPanel,SUniformGridPanel)
					.SlotPadding(10.0F)
				]
				+SVerticalBox::Slot()
				.AutoHeight()
				.Padding(FMargin(5,5,0,0))
				.AutoHeight()
				.HAlign(HAlign_Fill)
				.VAlign(VAlign_Center)
				[
					SNew(SOverlay)
					+SOverlay::Slot()
					[
						SNew(SImage)
						.Image(&MainStyle->Main_Right_Infotitle)
					]
					+SOverlay::Slot()
					.HAlign(HAlign_Fill)
					[
						SNew(SHorizontalBox)
						+SHorizontalBox::Slot()
						.FillWidth(1)
						.HAlign(HAlign_Center)
						.VAlign(VAlign_Center)
						[
							SNew(STextBlock)
							.Text(FText::FromString(TEXT("报告时间")))
							.Font(MainStyle->FontInfo_Size_12_White)
						]
						+SHorizontalBox::Slot()
						.FillWidth(4)
						.HAlign(HAlign_Center)
						.VAlign(VAlign_Center)
						[
							SNew(STextBlock)
							.Text(FText::FromString(TEXT("报告内容")))
							.Font(MainStyle->FontInfo_Size_12_White)
						]
					]
				]
				+SVerticalBox::Slot()
				.Padding(FMargin(5,5,0,0))
				.MaxHeight(300.0F)
				[
					SAssignNew(List,SScrollBox)
				]
			]
		]
	];

	if (Button_UniformGridPanel)
	{
		Button_UniformGridPanel->AddSlot(0,0)
		[
			SNew(SOverlay)
			+SOverlay::Slot()
			.HAlign(HAlign_Center)
			.VAlign(VAlign_Center)
			.Padding(FMargin(6,3,6,3))
			[
				SNew(STextBlock)
				.Font(MainStyle->FontInfo_Size_12_White)
				.Text(FText::FromString(TEXT("当日报告")))
			]
			
			+SOverlay::Slot()
			[
				SAssignNew(Button_Day,SButton)
				.ButtonStyle(&MainStyle->ButtonStyle_DMY)
				.OnClicked(this,&SInRoomRightBttomWidget_Item_3::Button_Day_OnClick)
				//.OnClicked(this,&SLineChartWidget::ButtonOnclick)
			]
		];
		Button_UniformGridPanel->AddSlot(1,0)
		[
			SNew(SOverlay)
			+SOverlay::Slot()
			.HAlign(HAlign_Center)
			.VAlign(VAlign_Center)
			.Padding(FMargin(6,3,6,3))
			[
				SNew(STextBlock)
				.Font(MainStyle->FontInfo_Size_12_White)
				.Text(FText::FromString(TEXT("当月报告")))
			]
			+SOverlay::Slot()
			[
				SAssignNew(Button_Day,SButton)
				.ButtonStyle(&MainStyle->ButtonStyle_DMY)
				.OnClicked(this,&SInRoomRightBttomWidget_Item_3::Button_Month_OnClick)
			]
		];
		Button_UniformGridPanel->AddSlot(2,0)
		[
			SNew(SOverlay)
			+SOverlay::Slot()
			.HAlign(HAlign_Center)
			.Padding(FMargin(6,3,6,3))
			.VAlign(VAlign_Center)
			[
				SNew(STextBlock)
				.Font(MainStyle->FontInfo_Size_12_White)
				.Text(FText::FromString(TEXT("本年报告")))
			]
			+SOverlay::Slot()
			[
				SAssignNew(Button_Day,SButton)
				.ButtonStyle(&MainStyle->ButtonStyle_DMY)
				.OnClicked(this,&SInRoomRightBttomWidget_Item_3::Button_Year_OnClick)
			]
		];
	}

	if (List)
	{
		List->ClearChildren();
		for (int i=0;i<20;i++)
		{
			List->AddSlot()
			[
				SNew(SInRoomRightBttomWidgetItem3Item)
				.Time(TEXT("Time:"))
				.Content(TEXT("服务器获取报告内容"))
			];
		}	
	}
}

FReply SInRoomRightBttomWidget_Item_3::Button_Day_OnClick()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1,3.0,FColor::Yellow,TEXT("当日报告"));
	}
	return FReply::Handled();
}

FReply SInRoomRightBttomWidget_Item_3::Button_Month_OnClick()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1,3.0,FColor::Yellow,TEXT("当月报告"));
	}
	return FReply::Handled();
}

FReply SInRoomRightBttomWidget_Item_3::Button_Year_OnClick()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1,3.0,FColor::Yellow,TEXT("本年报告"));
	}
	return FReply::Handled();
}

END_SLATE_FUNCTION_BUILD_OPTIMIZATION
