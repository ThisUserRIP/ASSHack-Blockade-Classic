#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Rendering_DebugManager.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct DebugManager; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace mscorlib::System { struct Action; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct DebugManager___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugManager___c* __9;
			mscorlib::System::Action_1<mscorlib::System::Boolean>* __9__52_0;
			mscorlib::System::Action* __9__52_1;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		void __ctor_b__52_0(bool _p0_);
		void __ctor_b__52_1();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugManager* __cctor_b__69_0();
	};
}

