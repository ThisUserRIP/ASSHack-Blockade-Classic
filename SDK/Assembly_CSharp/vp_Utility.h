#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };

namespace Assembly_CSharp
{
	struct vp_Utility : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Type, mscorlib::System::String>* m_TypeAliases;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_CoreModule::UnityEngine::Transform* GetTransformByNameInChildren(UnityEngine_CoreModule::UnityEngine::Transform* trans, mscorlib::System::String* name, bool includeInactive, bool subString);
		static float NaNSafeFloat(float value, float prevValue);
		static UnityEngine_CoreModule::UnityEngine::Vector2 NaNSafeVector2(UnityEngine_CoreModule::UnityEngine::Vector2 vector, UnityEngine_CoreModule::UnityEngine::Vector2 prevVector);
		static UnityEngine_CoreModule::UnityEngine::Vector3 NaNSafeVector3(UnityEngine_CoreModule::UnityEngine::Vector3 vector, UnityEngine_CoreModule::UnityEngine::Vector3 prevVector);
		static UnityEngine_CoreModule::UnityEngine::Quaternion NaNSafeQuaternion(UnityEngine_CoreModule::UnityEngine::Quaternion quaternion, UnityEngine_CoreModule::UnityEngine::Quaternion prevQuaternion);
		static UnityEngine_CoreModule::UnityEngine::Vector3 SnapToZero(UnityEngine_CoreModule::UnityEngine::Vector3 value, float epsilon);
		static UnityEngine_CoreModule::UnityEngine::Vector3 HorizontalVector(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		static mscorlib::System::String* GetErrorLocation(int32_t level);
		static mscorlib::System::String* GetTypeAlias(mscorlib::System::Type* type);
		static void Activate(UnityEngine_CoreModule::UnityEngine::GameObject* obj, bool activate);
		static bool IsActive(UnityEngine_CoreModule::UnityEngine::GameObject* obj);
		static void _cctor();
	};
}

