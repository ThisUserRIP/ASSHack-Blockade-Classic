#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal
{
	struct Light2DLookupTexture : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::Texture2D* s_PointLightLookupTexture;
			UnityEngine_CoreModule::UnityEngine::Texture2D* s_FalloffLookupTexture;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_CoreModule::UnityEngine::Texture* GetLightLookupTexture();
		static UnityEngine_CoreModule::UnityEngine::Texture* GetFalloffLookupTexture();
		static UnityEngine_CoreModule::UnityEngine::Texture2D* CreatePointLightLookupTexture();
		static UnityEngine_CoreModule::UnityEngine::Texture2D* CreateFalloffLookupTexture();
	};
}

