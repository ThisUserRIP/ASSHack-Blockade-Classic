#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_ControllerMapLayoutManager.h"
namespace Rewired_Core::Rewired { struct ControllerMapLayoutManager; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core { struct buwlxqKhUllBBlfaFHEuNozwGtg; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired
{
	struct ControllerMapLayoutManager_StartingSettings : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool enabled;
		bool loadFromUserDataStore;
		IL2CPP::Array<Rewired_Core::buwlxqKhUllBBlfaFHEuNozwGtg*>* startingRuleSets;
		void _ctor(bool enabled, bool loadFromUserDataStore, IL2CPP::Array<Rewired_Core::buwlxqKhUllBBlfaFHEuNozwGtg*>* startingRuleSets);
	};
}

