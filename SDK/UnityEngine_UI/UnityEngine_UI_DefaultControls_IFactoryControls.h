#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_UI_DefaultControls.h"
namespace UnityEngine_UI::UnityEngine::UI { struct DefaultControls; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace mscorlib::System { struct String; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct DefaultControls_IFactoryControls
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::GameObject* CreateGameObject(mscorlib::System::String* name, IL2CPP::Array<mscorlib::System::Type*>* components);
	};
}

