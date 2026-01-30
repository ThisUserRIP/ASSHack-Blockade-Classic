#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "UnityEngine_UI_ReflectionMethodsCache.h"
namespace UnityEngine_UI::UnityEngine::UI { struct ReflectionMethodsCache; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Ray.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Ray; };
#include "..\UnityEngine_PhysicsModule\UnityEngine_RaycastHit.h"
namespace UnityEngine_PhysicsModule::UnityEngine { struct RaycastHit; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct ReflectionMethodsCache_GetRaycastNonAllocCallback : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		int32_t Invoke(UnityEngine_CoreModule::UnityEngine::Ray r, IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* results, float f, int32_t i);
		mscorlib::System::IAsyncResult* BeginInvoke(UnityEngine_CoreModule::UnityEngine::Ray r, IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* results, float f, int32_t i, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		int32_t EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

