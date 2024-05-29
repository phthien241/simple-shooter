// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SimpleShooterHUD.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API ASimpleShooterHUD : public AHUD
{
	GENERATED_BODY()
protected:
	virtual void DrawHUD() override;
private:
	UPROPERTY(EditAnywhere, Category = "Crosshair")
	UTexture2D* CrosshairTexture;
	
};
