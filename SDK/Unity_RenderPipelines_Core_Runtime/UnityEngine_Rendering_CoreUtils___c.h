#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Rendering_CoreUtils.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct CoreUtils; };
namespace mscorlib::System::Reflection { struct Assembly; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct CoreUtils___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils___c* __9;
			mscorlib::System::Func_2<mscorlib::System::Reflection::Assembly, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Type>>* __9__77_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Type>* _GetAllAssemblyTypes_b__77_0(mscorlib::System::Reflection::Assembly* t);
	};
}

