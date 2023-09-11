// Fill out your copyright notice in the Description page of Project Settings.


#include "Movimiento_Aleatorio.h"

// Sets default values for this component's properties
UMovimiento_Aleatorio::UMovimiento_Aleatorio()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	RadioMovimiento = 5;
	// ...
}


// Called when the game starts
void UMovimiento_Aleatorio::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMovimiento_Aleatorio::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	AActor* Parent = GetOwner();
		if (Parent) {
			auto NewPos = Parent->GetActorLocation() + FVector(FMath::FRandRange(-1, 1) * RadioMovimiento, FMath::FRandRange(-1, 1) * RadioMovimiento, FMath::FRandRange(-1, 1) * RadioMovimiento);

			Parent->SetActorLocation(NewPos);

			auto NewRot = Parent->GetActorRotation() + FRotator(FMath::FRandRange(-1, 1) * RadioMovimiento, FMath::FRandRange(-1, 1) * RadioMovimiento, FMath::FRandRange(-1, 1) * RadioMovimiento);

			Parent->SetActorRotation(NewRot);


	}
	// ...
}

