#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Experimental_GlobalIllumination_Lightmapping.h"
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination { struct Lightmapping; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Light; };
#include "UnityEngine_Experimental_GlobalIllumination_LightDataGI.h"
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination { struct LightDataGI; };
#include "Unity_Collections_NativeArray_1.h"
namespace UnityEngine_CoreModule::Unity::Collections { template <typename T> struct NativeArray_1; };

namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination
{
	struct Lightmapping___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c* __9;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		void __cctor_b__7_0(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Light*>* requests, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LightDataGI> lightsOutput);
	};
}

