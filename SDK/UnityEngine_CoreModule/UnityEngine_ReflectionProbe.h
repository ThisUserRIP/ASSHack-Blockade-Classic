#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Behaviour.h"
#include "UnityEngine_ReflectionProbe_ReflectionProbeEvent.h"
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
namespace UnityEngine_CoreModule::UnityEngine { struct Cubemap; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct ReflectionProbe : UnityEngine_CoreModule::UnityEngine::Behaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Action_2<UnityEngine_CoreModule::UnityEngine::ReflectionProbe, UnityEngine_CoreModule::UnityEngine::ReflectionProbe_ReflectionProbeEvent>* reflectionProbeChanged;
			mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::Cubemap>* defaultReflectionSet;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void CallReflectionProbeEvent(UnityEngine_CoreModule::UnityEngine::ReflectionProbe* probe, UnityEngine_CoreModule::UnityEngine::ReflectionProbe_ReflectionProbeEvent probeEvent);
		static void CallSetDefaultReflection(UnityEngine_CoreModule::UnityEngine::Cubemap* defaultReflectionCubemap);
	};
}

