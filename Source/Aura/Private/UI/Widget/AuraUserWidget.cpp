// Copyright Folkvang Studios inc


#include "UI/Widget/AuraUserWidget.h"

void UAuraUserWidget::SetWidgetController(UObject* InWidgetController)
{
	GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Cyan, FString("SetWidgetController"));
	WidgetController = InWidgetController;
	WidgetControllerSet();
}
