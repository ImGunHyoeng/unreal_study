// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/ABGameModeBase.h"

AABGameModeBase::AABGameModeBase()
{

	//Default Pawn Class	
	// /Script / Engine.Blueprint'/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter.BP_ThirdPersonCharacter'
	//BP로 만들었기에 해당하는것을 BluePrint부분을 지워주고 뒤에다가 _C를 붙여서 클래스라고 선언해줌
	static ConstructorHelpers::FClassFinder<APawn> ThirdPersonClassRef(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C"));//레퍼런스값을 가져와서 이를 이용할수 있도록 하는것을 의미한다. (앞에 전역 필수) FClassFinder으로 폰을 찾음 기본적으로 언리얼 상에 되어있는 삼인칭 캐릭터를 가져올것이다.
	//BP로 만들어진 것
	if (ThirdPersonClassRef.Class)
	{
		DefaultPawnClass = ThirdPersonClassRef.Class;
	}

	//Player Controller
	//	/Script/CoreUObject.Class'/Script/ArenaBattle.ABPlayerController'
	//이것도 스크립트까지 지우고 뒤에 작은 따음표도 지워도 된다.
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerClassRef(TEXT("/Script/ArenaBattle.ABPlayerController"));//헬퍼로 가져오는것은 클래스찾기로 통해서 생성하는것이기에 이를 통해서 처음이 아니라 나중에 하면 누수가 생기기에 생성자외에서 사용하는것을 추천하지는 않는다.
	//레퍼런스값을 가져와서 이를 이용할수 있도록 하는것을 의미한다. (앞에 전역 필수) FClassFinder으로 폰을 찾음 기본적으로 언리얼 상에 되어있는 삼인칭 캐릭터를 가져올것이다. APlayer controller을 가지고 만든것이기에 상위로 찾음
	if (PlayerControllerClassRef.Class)
	{
		PlayerControllerClass = PlayerControllerClassRef.Class;
	}


}
