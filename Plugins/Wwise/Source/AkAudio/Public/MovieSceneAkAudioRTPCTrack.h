#pragma once
#include "CoreMinimal.h"
#include "MovieSceneAkTrack.h"
#include "MovieSceneAkAudioRTPCTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack {
    GENERATED_BODY()
public:
    UMovieSceneAkAudioRTPCTrack();
};

