#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Rendering_VolumeProfile.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct VolumeProfile; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct VolumeComponent; };
namespace mscorlib::System { template <typename T> struct Predicate_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct VolumeProfile___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeProfile___c* __9;
			mscorlib::System::Predicate_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeComponent>* __9__2_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		bool _OnEnable_b__2_0(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeComponent* x);
	};
}

