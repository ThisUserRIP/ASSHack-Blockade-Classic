#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Rendering_VolumeComponent.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct VolumeComponent; };
namespace mscorlib::System::Reflection { struct FieldInfo; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct VolumeComponent___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeComponent___c* __9;
			mscorlib::System::Func_2<mscorlib::System::Reflection::FieldInfo, mscorlib::System::Boolean>* __9__10_0;
			mscorlib::System::Func_2<mscorlib::System::Reflection::FieldInfo, mscorlib::System::Int32>* __9__10_1;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		bool _OnEnable_b__10_0(mscorlib::System::Reflection::FieldInfo* t);
		int32_t _OnEnable_b__10_1(mscorlib::System::Reflection::FieldInfo* t);
	};
}

