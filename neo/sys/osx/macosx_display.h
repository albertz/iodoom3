#include "macosx_local.h"

@class NSDictionary;

#if !defined(MAC_OS_X_VERSION_10_6)
extern NSDictionary *Sys_GetMatchingDisplayMode( glimpParms_t parms );
#else
extern CGDisplayModeRef Sys_GetMatchingDisplayMode( glimpParms_t parms );
#endif

extern void Sys_StoreGammaTables();
extern void Sys_GetGammaTable(glwgamma_t *table);
extern void Sys_SetScreenFade(glwgamma_t *table, float fraction);

extern void Sys_FadeScreens();
extern void Sys_FadeScreen(CGDirectDisplayID display);
extern void Sys_UnfadeScreens();
extern void Sys_UnfadeScreen(CGDirectDisplayID display, glwgamma_t *table);
extern void Sys_ReleaseAllDisplays();

