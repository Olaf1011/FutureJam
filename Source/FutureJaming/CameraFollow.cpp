// Fill out your copyright notice in the Description page of Project Settings.


#include "CameraFollow.h"

// Sets default values for this component's properties
UCameraFollow::UCameraFollow()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCameraFollow::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UCameraFollow::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


	FTransform tempTrans = mp_owner->GetActorTransform();

	FVector tempPos = tempTrans.GetLocation();

	tempPos.X = mp_player->GetActorTransform().GetLocation().X;
	m_playerPos = tempPos.X;
	tempTrans.SetLocation(tempPos);
	mp_owner->SetActorTransform(tempTrans);
	// ...
}

