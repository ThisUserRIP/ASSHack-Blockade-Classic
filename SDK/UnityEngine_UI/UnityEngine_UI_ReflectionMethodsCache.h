#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_UI::UnityEngine::UI { struct ReflectionMethodsCache_Raycast3DCallback; };
namespace UnityEngine_UI::UnityEngine::UI { struct ReflectionMethodsCache_RaycastAllCallback; };
namespace UnityEngine_UI::UnityEngine::UI { struct ReflectionMethodsCache_GetRaycastNonAllocCallback; };
namespace UnityEngine_UI::UnityEngine::UI { struct ReflectionMethodsCache_Raycast2DCallback; };
namespace UnityEngine_UI::UnityEngine::UI { struct ReflectionMethodsCache_GetRayIntersectionAllCallback; };
namespace UnityEngine_UI::UnityEngine::UI { struct ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct ReflectionMethodsCache : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback* raycast3D;
		UnityEngine_UI::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback* raycast3DAll;
		UnityEngine_UI::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback* getRaycastNonAlloc;
		UnityEngine_UI::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback* raycast2D;
		UnityEngine_UI::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback* getRayIntersectionAll;
		UnityEngine_UI::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback* getRayIntersectionAllNonAlloc;
		struct StaticFields
		{
			UnityEngine_UI::UnityEngine::UI::ReflectionMethodsCache* s_ReflectionMethodsCache;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static UnityEngine_UI::UnityEngine::UI::ReflectionMethodsCache* get_Singleton();
		static void _cctor();
	};
}

