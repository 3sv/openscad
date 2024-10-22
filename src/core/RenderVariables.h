#include "glview/Camera.h"
#include "core/Context.h"
#include "core/BuiltinContext.h"

class RenderVariables
{
public:
  bool preview;
  double time;
  double animateFPS;
  int animateSteps;
  bool animatePlaying;
  Camera camera;
  void applyToContext(ContextHandle<BuiltinContext>& context) const;
};
