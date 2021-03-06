//  Copyright An-Hung Tai

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/RadialForceComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundCue.h"
#include "Projectile.generated.h"

UCLASS()
class BATTLETANK_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void LaunchProjectile(float LaunchSpeed);

private:
	UProjectileMovementComponent* ProjectileMovement = nullptr;

	void OnTimeExpire();

	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	float ProjectileBaseDamage = 25.0;

	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	float ProjectileMinimumDamage = 0.0;

	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	float FullDamageRangeFraction = 0.25;

	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	float DamageFalloffRatio = 2.0;

	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	float DestroyDelay = 3.0;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* CollisionMesh = nullptr;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UParticleSystemComponent* LaunchBlast = nullptr;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UParticleSystemComponent* ImpactBlast = nullptr;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	URadialForceComponent* RecoilForce = nullptr;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	URadialForceComponent* ExplosionForce = nullptr;

	UPROPERTY(EditDefaultsOnly, Category = "Sound")
	USoundCue* LaunchSound = nullptr;

	UPROPERTY(EditDefaultsOnly, Category = "Sound")
	USoundCue* ExplosionSound = nullptr;

	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
};