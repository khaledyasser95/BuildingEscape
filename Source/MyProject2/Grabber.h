// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Components/InputComponent.h"
#include "Components/ActorComponent.h"
#include "Grabber.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYPROJECT2_API UGrabber : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGrabber();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
private:
	float Reach = 100.f;

	
	UPhysicsHandleComponent * PhysicsHandel = nullptr;
	
	UInputComponent * InputComponents = nullptr;
	//Raycast grab
	void Grab();
	// Ray cast release
	void Release();
	void PhysicsComponents();
	//Setup inputs
	void SetupInputComponent();

	// return hit for first physics body in reach
	const FHitResult GetFirstPhysicsBodyInReach();
};
