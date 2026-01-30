#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_LightType.h"
#include "UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_Rendering_VisibleLightFlags.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Light; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct VisibleLight
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::LightType m_LightType;
		UnityEngine_CoreModule::UnityEngine::Color m_FinalColor;
		UnityEngine_CoreModule::UnityEngine::Rect m_ScreenRect;
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 m_LocalToWorldMatrix;
		float m_Range;
		float m_SpotAngle;
		int32_t m_InstanceId;
		UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLightFlags m_Flags;
		UnityEngine_CoreModule::UnityEngine::Light* get_light();
		UnityEngine_CoreModule::UnityEngine::LightType get_lightType();
		UnityEngine_CoreModule::UnityEngine::Color get_finalColor();
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 get_localToWorldMatrix();
		float get_range();
		float get_spotAngle();
		bool Equals(UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight other);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
	};
}

