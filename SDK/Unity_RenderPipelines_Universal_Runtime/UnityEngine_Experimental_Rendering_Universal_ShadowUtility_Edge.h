#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Experimental_Rendering_Universal_ShadowUtility.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal { struct ShadowUtility; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal
{
	struct ShadowUtility_Edge
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t vertexIndex0;
		int32_t vertexIndex1;
		UnityEngine_CoreModule::UnityEngine::Vector4 tangent;
		bool compareReversed;
		void AssignVertexIndices(int32_t vi0, int32_t vi1);
		int32_t Compare(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowUtility_Edge a, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowUtility_Edge b);
		int32_t CompareTo(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowUtility_Edge edgeToCompare);
	};
}

