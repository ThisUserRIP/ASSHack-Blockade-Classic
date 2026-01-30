#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_UI::UnityEngine::UI { struct Image; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::Tayx::Graphy::Utils
{
	struct G_ExtensionMethods : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::GameObject>* SetAllActive(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::GameObject>* gameObjects, bool active);
		static mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::Image>* SetOneActive(mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::Image>* images, int32_t active);
		static mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::Image>* SetAllActive(mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::Image>* images, bool active);
	};
}

