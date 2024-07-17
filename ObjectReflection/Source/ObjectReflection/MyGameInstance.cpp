// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

UMyGameInstance::UMyGameInstance()
{
	SchoolName = TEXT("기본학교");
}

void UMyGameInstance::Init()
{
	Super::Init();

	UE_LOG(LogTemp, Log, TEXT("====================="));
	UClass* ClassRuntime = GetClass();
	UClass* ClassCompile = UMyGameInstance::StaticClass();
	
	//check(ClassRuntime != ClassCompile);
	ensure(ClassRuntime != ClassCompile);

	ensureMsgf(ClassRuntime != ClassCompile,TEXT("일부러 에러를 발생시킨 코드"));

	UE_LOG(LogTemp, Log, TEXT("학교를 담당하는 클래스 이름 : %s"), *ClassRuntime->GetName());

	SchoolName = TEXT("청강문화산업대학교");


	UE_LOG(LogTemp, Log, TEXT("학교 이름 : %s"), *SchoolName);
	UE_LOG(LogTemp, Log, TEXT("학교 이름 기본값: %s"), *GetClass()->GetDefaultObject<UMyGameInstance>()->SchoolName);
	UE_LOG(LogTemp, Log, TEXT("====================="));
}
