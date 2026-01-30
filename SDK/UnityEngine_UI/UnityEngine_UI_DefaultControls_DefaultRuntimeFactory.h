#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_UI_DefaultControls.h"
namespace UnityEngine_UI::UnityEngine::UI { struct DefaultControls; };
namespace UnityEngine_UI::UnityEngine::UI { struct DefaultControls_IFactoryControls; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct DefaultControls_DefaultRuntimeFactory : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_UI::UnityEngine::UI::DefaultControls_IFactoryControls* Default;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		UnityEngine_CoreModule::UnityEngine::GameObject* CreateGameObject(mscorlib::System::String* name, IL2CPP::Array<mscorlib::System::Type*>* components);
		void _ctor();
		static void _cctor();
	};
}

