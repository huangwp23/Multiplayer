// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OwnershipActor.generated.h"

UCLASS()
class MULTIPLAYER_API AOwnershipActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOwnershipActor();

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ownership Test Actor")
	UStaticMeshComponent* MeshComp;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Ownership Test Actor")
	float OwnershipRadius = 400.0f;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:	
	void UpdateOwnership();
	void DrawDebugInfo();
};
