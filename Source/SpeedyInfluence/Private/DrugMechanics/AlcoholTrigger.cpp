// SpeedyInfluence has been created by: Jack Hulspas


#include "DrugMechanics/AlcoholTrigger.h"

//The constructor of the trigger collider
AAlcoholTrigger::AAlcoholTrigger() {

}

//Method is called as soon as an overlap begins
void AAlcoholTrigger::OnOverlapBegin(class AActor* _overlappedActor, class AActor* _otherActor)
{
    //Check if the overlapping actor isn't this one and does not equal null
    if (_otherActor && (_otherActor != this)) {

        //Check if the overlapping actor has the ACarBase class
        if ((ACarBase*)_otherActor) {
            //Set the car's post processing to the alcohol post processing
            ACarBase* car = (ACarBase*)_otherActor;

            car->SetAlcoholPostProcessing();
        }
    }
}

//Method is called as soon as an overlap ends
void AAlcoholTrigger::OnOverlapEnd(class AActor* _overlappedActor, class AActor* _otherActor)
{
    //Check if the overlapping actor isn't this one and does not equal null
    if (_otherActor && (_otherActor != this)) {
        //Code here
    }
}