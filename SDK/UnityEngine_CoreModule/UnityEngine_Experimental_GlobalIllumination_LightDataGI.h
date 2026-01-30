#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_Experimental_GlobalIllumination_LinearColor.h"
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination { struct LinearColor; };
#include "UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "UnityEngine_Experimental_GlobalIllumination_LightType.h"
#include "UnityEngine_Experimental_GlobalIllumination_LightMode.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "UnityEngine_Experimental_GlobalIllumination_FalloffType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination { struct DirectionalLight; };
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination { struct DirectionalLight; };
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination { struct Cookie; };
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination { struct Cookie; };
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination { struct PointLight; };
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination { struct PointLight; };
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination { struct SpotLight; };
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination { struct SpotLight; };
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination { struct RectangleLight; };
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination { struct RectangleLight; };
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination { struct DiscLight; };
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination { struct DiscLight; };

namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination
{
	struct LightDataGI
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t instanceID;
		int32_t cookieID;
		float cookieScale;
		UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LinearColor color;
		UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LinearColor indirectColor;
		UnityEngine_CoreModule::UnityEngine::Quaternion orientation;
		UnityEngine_CoreModule::UnityEngine::Vector3 position;
		float range;
		float coneAngle;
		float innerConeAngle;
		float shape0;
		float shape1;
		UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LightType type;
		UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LightMode mode;
		uint8_t shadow;
		UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::FalloffType falloff;
		void Init(UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::DirectionalLight& light, UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::Cookie& cookie);
		void Init(UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::PointLight& light, UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::Cookie& cookie);
		void Init(UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::SpotLight& light, UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::Cookie& cookie);
		void Init(UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::RectangleLight& light, UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::Cookie& cookie);
		void Init(UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::DiscLight& light, UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::Cookie& cookie);
		void InitNoBake(int32_t lightInstanceID);
	};
}

