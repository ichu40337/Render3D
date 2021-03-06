
#include "Helpers/Timer.h"
#include "Render/Render.h"

#include "model.h"
#include "plane.h"
#include "quad.h"
#include "correction.h"

class Scene : public Object
{
public:

	Model model;
	int num_drawers;
	Model::Drawer* model_drawers;

	Plane plane;
	Quad  quad;
	ColorCorrection correction;

	Texture* logo_tex;

	Texture* shadow;

	Texture* scene_rt;
	Texture* scene_depth;

	float  cam_angle;
	Matrix view;
	Matrix proj;
	Matrix light_view;
	Matrix light_proj;

	void Init();

	void RenderPrepare(float dt);
	void RenderToShadow(float dt);
	void RenderScene(const char* phase, float dt);
	void RenderCorrection(float dt);
	void Render(float dt);
};
