#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_Random_State.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Random_State; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "UnityEngine_Vector2.h"
#include "UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Random_ : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void InitState(int32_t seed);
		static UnityEngine_CoreModule::UnityEngine::Random_State get_state();
		static void set_state(UnityEngine_CoreModule::UnityEngine::Random_State value);
		static float Range(float minInclusive, float maxInclusive);
		static int32_t Range(int32_t minInclusive, int32_t maxExclusive);
		static int32_t RandomRangeInt(int32_t minInclusive, int32_t maxExclusive);
		static float get_value();
		static UnityEngine_CoreModule::UnityEngine::Vector3 get_insideUnitSphere();
		static void GetRandomUnitCircle(UnityEngine_CoreModule::UnityEngine::Vector2& output);
		static UnityEngine_CoreModule::UnityEngine::Vector2 get_insideUnitCircle();
		static UnityEngine_CoreModule::UnityEngine::Vector3 get_onUnitSphere();
		static UnityEngine_CoreModule::UnityEngine::Quaternion get_rotation();
		static void get_state_Injected(UnityEngine_CoreModule::UnityEngine::Random_State& ret);
		static void set_state_Injected(UnityEngine_CoreModule::UnityEngine::Random_State& value);
		static void get_insideUnitSphere_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& ret);
		static void get_onUnitSphere_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& ret);
		static void get_rotation_Injected(UnityEngine_CoreModule::UnityEngine::Quaternion& ret);
	};
}

