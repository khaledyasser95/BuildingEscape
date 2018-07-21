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
	PhysicsComponents();
	SetupInputComponent();
	// ...


}
void UGrabber::PhysicsComponents() {
	//Look for Physics Handel
	PhysicsHandel = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
	if (PhysicsHandel == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("%s missing physics handel component"), *GetOwner()->GetName())
	}
}
void UGrabber::SetupInputComponent()
{
	//Look for Attached Input Comp 
	InputComponents = GetOwner()->FindComponentByClass<UInputComponent>();
	if (InputComponents)
	{

		//Bind the input axis
		InputComponents->BindAction("Grab", IE_Pressed, this, &UGrabber::Grab);
		InputComponents->BindAction("Grab", IE_Released, this, &UGrabber::Release);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("%s missing physics handel component"), *GetOwner()->GetName())
	}
}
const FHitResult UGrabber::GetFirstPhysicsBodyInReach()
{

	//Setup Query Param
	FCollisionQueryParams TraceParameters(FName(TEXT("")), false, GetOwner());

	// RayCast
	FHitResult Hit;
	GetWorld()->LineTraceSingleByObjectType(OUT Hit, GetReachLineStart(), GetReachLineEnd(),
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody), TraceParameters);


	return Hit;
}
void UGrabber::Grab() {

	//Try and reach any acttor with Physics body
	auto HitResult = GetFirstPhysicsBodyInReach();
	auto ComponentToGrab = HitResult.GetComponent();
	auto ActorHit = HitResult.GetActor();
	//If we hit something attach to Physics handel
	if (ActorHit != nullptr)
		//TODO attach physics handel
		PhysicsHandel->GrabComponent(ComponentToGrab, NAME_None, ComponentToGrab->GetOwner()->GetActorLocation(), true);

}
void UGrabber::Release() {

	//TODO relase phycisc handel
	PhysicsHandel->ReleaseComponent();
}

// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	// if the physics is attached
	// ...Get Player View Port


	if (PhysicsHandel->GrabbedComponent)
		//move the object we are holding
	{
		PhysicsHandel->SetTargetLocation(GetReachLineEnd());
	}


}
FVector UGrabber::GetReachLineStart()
{
	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRoation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(OUT PlayerViewPointLocation, OUT PlayerViewPointRoation);
	//Log Test
	/*UE_LOG(LogTemp, Warning, TEXT("Location %s, Position %s"),*PlayerViewPointLocation.ToString(),*PlayerViewPointRoation.ToString())
	*/
	return PlayerViewPointLocation;

}
FVector UGrabber::GetReachLineEnd()
{
	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRoation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(OUT PlayerViewPointLocation, OUT PlayerViewPointRoation);
	//Log Test
	/*UE_LOG(LogTemp, Warning, TEXT("Location %s, Position %s"),*PlayerViewPointLocation.ToString(),*PlayerViewPointRoation.ToString())
	*/
	return PlayerViewPointLocation + PlayerViewPointRoation.Vector()*Reach;

}

