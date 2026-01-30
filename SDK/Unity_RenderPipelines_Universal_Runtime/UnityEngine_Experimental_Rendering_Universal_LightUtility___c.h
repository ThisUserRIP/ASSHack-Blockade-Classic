#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Experimental_Rendering_Universal_LightUtility.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal { struct LightUtility; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "UnityEngine_Experimental_Rendering_Universal_LibTessDotNet_ContourVertex.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { struct ContourVertex; };
#include "..\Unity_Mathematics\Unity_Mathematics_float3.h"
namespace Unity_Mathematics::Unity::Mathematics { struct float3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal
{
	struct LightUtility___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LightUtility___c* __9;
			mscorlib::System::Func_2<mscorlib::System::Int32, mscorlib::System::Int32>* __9__8_0;
			mscorlib::System::Func_2<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::ContourVertex, Unity_Mathematics::Unity::Mathematics::float3>* __9__8_1;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		int32_t _GenerateShapeMesh_b__8_0(int32_t i);
		Unity_Mathematics::Unity::Mathematics::float3 _GenerateShapeMesh_b__8_1(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::ContourVertex v);
	};
}

