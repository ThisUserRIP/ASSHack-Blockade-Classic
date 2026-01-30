#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Experimental_Rendering_Universal_LightUtility.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal { struct LightUtility; };
#include "..\Unity_Mathematics\Unity_Mathematics_float3.h"
namespace Unity_Mathematics::Unity::Mathematics { struct float3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_VertexAttributeDescriptor.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct VertexAttributeDescriptor; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal
{
	struct LightUtility_ParametricLightMeshVertex
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_Mathematics::Unity::Mathematics::float3 position;
		UnityEngine_CoreModule::UnityEngine::Color color;
		static void _cctor();
	};
}

