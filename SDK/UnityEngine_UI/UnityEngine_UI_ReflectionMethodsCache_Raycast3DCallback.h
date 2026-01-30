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
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Ray.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Ray; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct RaycastHit; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct RaycastHit; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct ReflectionMethodsCache_Raycast3DCallback : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		bool Invoke(UnityEngine_CoreModule::UnityEngine::Ray r, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hit, float f, int32_t i);
		mscorlib::System::IAsyncResult* BeginInvoke(UnityEngine_CoreModule::UnityEngine::Ray r, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hit, float f, int32_t i, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		bool EndInvoke(UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hit, mscorlib::System::IAsyncResult* result);
	};
}

