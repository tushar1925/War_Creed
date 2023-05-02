#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interfaces/HitInterface.h"
#include "Enemy.generated.h" 

class UAnimMontage;

UCLASS()
class WAR_CREED_API AEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	AEnemy();

	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void GetHit(const FVector& ImpactPoint) override;

private:

	/*
	Animation Montages
	*/
	UPROPERTY(EditDefaultsOnly, Category = Montages)
	UAnimMontage* HitReactMontage;

protected:
	virtual void BeginPlay() override;

	/*
	Play Montage Functions
	*/
	void PlayHitReactMontage(const FName& SectionName);

public:
	

};
