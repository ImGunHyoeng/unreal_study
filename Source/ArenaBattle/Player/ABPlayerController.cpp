// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/ABPlayerController.h"

void AABPlayerController::BeginPlay()
{
	Super::BeginPlay();//Super가 상위 클래스의 것을 의미함 상위 클래스의 작동이 빠져서 작동이 이상하게 될수 있음
	
	//마우스 게임 화면 포커싱
	FInputModeGameOnly GameOnlyInputMode;
	SetInputMode(GameOnlyInputMode);
}
