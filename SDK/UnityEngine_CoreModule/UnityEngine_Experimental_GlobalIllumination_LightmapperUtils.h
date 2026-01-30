#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Experimental_GlobalIllumination_LightMode.h"
#include "UnityEngine_LightmapBakeType.h"
#include "UnityEngine_Experimental_GlobalIllumination_LinearColor.h"
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination { struct LinearColor; };
namespace UnityEngine_CoreModule::UnityEngine { struct Light; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination { struct DirectionalLight; };
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination { struct DirectionalLight; };
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination { struct PointLight; };
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination { struct PointLight; };
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination { struct SpotLight; };
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination { struct SpotLight; };
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination { struct RectangleLight; };
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination { struct RectangleLight; };
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination { struct DiscLight; };
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination { struct DiscLight; };
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination { struct Cookie; };
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination { struct Cookie; };

namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination
{
	struct LightmapperUtils : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LightMode Extract(UnityEngine_CoreModule::UnityEngine::LightmapBakeType baketype);
		static UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LinearColor ExtractIndirect(UnityEngine_CoreModule::UnityEngine::Light* l);
		static float ExtractInnerCone(UnityEngine_CoreModule::UnityEngine::Light* l);
		static UnityEngine_CoreModule::UnityEngine::Color ExtractColorTemperature(UnityEngine_CoreModule::UnityEngine::Light* l);
		static void ApplyColorTemperature(UnityEngine_CoreModule::UnityEngine::Color cct, UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LinearColor& lightColor);
		static void Extract(UnityEngine_CoreModule::UnityEngine::Light* l, UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::DirectionalLight& dir);
		static void Extract(UnityEngine_CoreModule::UnityEngine::Light* l, UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::PointLight& point);
		static void Extract(UnityEngine_CoreModule::UnityEngine::Light* l, UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::SpotLight& spot);
		static void Extract(UnityEngine_CoreModule::UnityEngine::Light* l, UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::RectangleLight& rect);
		static void Extract(UnityEngine_CoreModule::UnityEngine::Light* l, UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::DiscLight& disc);
		static void Extract(UnityEngine_CoreModule::UnityEngine::Light* l, UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::Cookie& cookie);
	};
}

