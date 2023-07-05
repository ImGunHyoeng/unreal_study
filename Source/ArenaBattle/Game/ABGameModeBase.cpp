// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/ABGameModeBase.h"

AABGameModeBase::AABGameModeBase()
{

	//Default Pawn Class	
	// /Script / Engine.Blueprint'/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter.BP_ThirdPersonCharacter'
	//BP�� ������⿡ �ش��ϴ°��� BluePrint�κ��� �����ְ� �ڿ��ٰ� _C�� �ٿ��� Ŭ������� ��������
	static ConstructorHelpers::FClassFinder<APawn> ThirdPersonClassRef(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C"));//���۷������� �����ͼ� �̸� �̿��Ҽ� �ֵ��� �ϴ°��� �ǹ��Ѵ�. (�տ� ���� �ʼ�) FClassFinder���� ���� ã�� �⺻������ �𸮾� �� �Ǿ��ִ� ����Ī ĳ���͸� �����ð��̴�.
	//BP�� ������� ��
	if (ThirdPersonClassRef.Class)
	{
		DefaultPawnClass = ThirdPersonClassRef.Class;
	}

	//Player Controller
	//	/Script/CoreUObject.Class'/Script/ArenaBattle.ABPlayerController'
	//�̰͵� ��ũ��Ʈ���� ����� �ڿ� ���� ����ǥ�� ������ �ȴ�.
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerClassRef(TEXT("/Script/ArenaBattle.ABPlayerController"));//���۷� �������°��� Ŭ����ã��� ���ؼ� �����ϴ°��̱⿡ �̸� ���ؼ� ó���� �ƴ϶� ���߿� �ϸ� ������ ����⿡ �����ڿܿ��� ����ϴ°��� ��õ������ �ʴ´�.
	//���۷������� �����ͼ� �̸� �̿��Ҽ� �ֵ��� �ϴ°��� �ǹ��Ѵ�. (�տ� ���� �ʼ�) FClassFinder���� ���� ã�� �⺻������ �𸮾� �� �Ǿ��ִ� ����Ī ĳ���͸� �����ð��̴�. APlayer controller�� ������ ������̱⿡ ������ ã��
	if (PlayerControllerClassRef.Class)
	{
		PlayerControllerClass = PlayerControllerClassRef.Class;
	}


}
