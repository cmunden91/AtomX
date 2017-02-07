// Fill out your copyright notice in the Description page of Project Settings.

#include "AtomX.h"
#include "Charactermovement.h"


// Sets default values
ACharactermovement::ACharactermovement()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACharactermovement::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharactermovement::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void ACharactermovement::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

