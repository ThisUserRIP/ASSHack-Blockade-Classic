#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_UI::UnityEngine::EventSystems { struct BaseRaycaster; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UI::UnityEngine::EventSystems
{
	struct RaycasterManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::EventSystems::BaseRaycaster>* s_Raycasters;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void AddRaycaster(UnityEngine_UI::UnityEngine::EventSystems::BaseRaycaster* baseRaycaster);
		static mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::EventSystems::BaseRaycaster>* GetRaycasters();
		static void RemoveRaycasters(UnityEngine_UI::UnityEngine::EventSystems::BaseRaycaster* baseRaycaster);
		static void _cctor();
	};
}

