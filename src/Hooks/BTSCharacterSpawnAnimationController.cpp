#include "Hooking.hpp"
#include "Logger.hpp"

#include "GlobalNamespace/BTSCharacterSpawnAnimationController.hpp"
#include "GlobalNamespace/BTSCharacterSpawnController.hpp"

namespace Hooks {
    using namespace GlobalNamespace;

    MAKE_LATE_HOOK_MATCH(BTSCharacterSpawnAnimationController_PlayAnimation, &BTSCharacterSpawnAnimationController::PlayAnimation, void, BTSCharacterSpawnAnimationController* self) {
    BTSCharacterSpawnAnimationController_PlayAnimation(self);
    self->StopAnimation();
    Logger.info("BTS character was detected and stopped.");
    }

    MAKE_LATE_HOOK_MATCH(BTSCharacterSpawnAnimationController_ResumeAnimation, &BTSCharacterSpawnAnimationController::ResumeAnimation, void, BTSCharacterSpawnAnimationController* self) {
    BTSCharacterSpawnAnimationController_ResumeAnimation(self);
    self->StopAnimation();
    Logger.info("BTS character was detected and stopped.");
    }
}
