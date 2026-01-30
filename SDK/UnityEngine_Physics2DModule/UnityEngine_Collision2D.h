#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "UnityEngine_ContactPoint2D.h"
namespace UnityEngine_Physics2DModule::UnityEngine { struct ContactPoint2D; };

namespace UnityEngine_Physics2DModule::UnityEngine
{
	struct Collision2D : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_Collider;
		int32_t m_OtherCollider;
		int32_t m_Rigidbody;
		int32_t m_OtherRigidbody;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_RelativeVelocity;
		int32_t m_Enabled;
		int32_t m_ContactCount;
		IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::ContactPoint2D>* m_ReusedContacts;
		IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::ContactPoint2D>* m_LegacyContacts;
	};
}

