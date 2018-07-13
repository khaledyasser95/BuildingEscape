// Fill out your copyright notice in the Description page of Project Settings.

#include "Grabber.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#define OUT
// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("GRABBER ON DUTY"))
	// ...
	
}


// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...Get Player View Port
	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRoation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(OUT PlayerViewPointLocation, OUT PlayerViewPointRoation);
	//Log Test
	/*UE_LOG(LogTemp, Warning, TEXT("Location %s, Position %s"),*PlayerViewPointLocation.ToString(),*PlayerViewPointRoation.ToString())
	*/
	FVector LineTraceEnd = PlayerViewPointLocation + PlayerViewPointRoation.Vector()*Reach;

	//Draw Red Trace
	DrawDebugLine(GetWorld(), PlayerViewPointLocation, LineTraceEnd, FColor(255,0,0), false, 0.f, 0.f,10.0f);
	
	//Setup Query Param
	FCollisionQueryParams TraceParameters(FName(TEXT("")), false, GetOwner());

	// RayCast
	FHitResult Hit;
	GetWorld()->LineTraceSingleByObjectType(OUT Hit, PlayerViewPointLocation, LineTraceEnd,
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody), TraceParameters);
	// See What we hit
	AActor * ActorHit = Hit.GetActor();
	if (ActorHit)
		UE_LOG(LogTemp, Warning, TEXT("Line trace hit %s"),	* ActorHit->GetName());

}

