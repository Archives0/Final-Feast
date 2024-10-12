// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

UENUM(BlueprintType)
enum class EItemType : uint8
{
	Milk,
	MetalDetector,
	Antidote,
	Antacid,
	Medicine,
	MysteryLiquid
};

UCLASS()
class SCREAMSECRETS2024_API AItem : public AActor
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	AItem();
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Item")
	EItemType ItemType{};

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Item")
	UTexture2D* Icon{};

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Item")
	FString Description{};
};
