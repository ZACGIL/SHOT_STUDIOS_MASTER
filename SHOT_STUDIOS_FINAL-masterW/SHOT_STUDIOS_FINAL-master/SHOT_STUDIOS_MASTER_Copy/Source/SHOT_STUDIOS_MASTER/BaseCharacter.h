// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseCharacter.generated.h"

UCLASS(Blueprintable)
class SHOT_STUDIOS_MASTER_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:

//Make a health Property
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Catagory = "Base Character")
		float Health = 100;

//Make a isDead property
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Catagory = "Base Character")
		bool isDead = false;

//Calculate Death Function
	virtual void CalculateDead();

//Calculate Health Function
	UFUNCTION(BlueprintCallable, Category = "Base Character")
		virtual void CalculateHealth(float delta);

#if WITH_EDITOR
//Editor-Centric code for changing properties
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)override;
#endif


public:
	// Sets default values for this character's properties
	ABaseCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
