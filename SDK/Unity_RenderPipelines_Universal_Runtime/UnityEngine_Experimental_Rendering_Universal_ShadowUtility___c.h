#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Experimental_Rendering_Universal_ShadowUtility.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal { struct ShadowUtility; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "UnityEngine_Experimental_Rendering_Universal_LibTessDotNet_ContourVertex.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { struct ContourVertex; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal
{
	struct ShadowUtility___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowUtility___c* __9;
			mscorlib::System::Func_2<mscorlib::System::Int32, mscorlib::System::Int32>* __9__8_0;
			mscorlib::System::Func_2<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::ContourVertex, UnityEngine_CoreModule::UnityEngine::Vector3>* __9__8_1;
			mscorlib::System::Func_2<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::ContourVertex, UnityEngine_CoreModule::UnityEngine::Color>* __9__8_2;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		int32_t _GenerateShadowMesh_b__8_0(int32_t i);
		UnityEngine_CoreModule::UnityEngine::Vector3 _GenerateShadowMesh_b__8_1(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::ContourVertex v);
		UnityEngine_CoreModule::UnityEngine::Color _GenerateShadowMesh_b__8_2(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::ContourVertex v);
	};
}

