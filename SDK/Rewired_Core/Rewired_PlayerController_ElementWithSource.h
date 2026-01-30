#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_PlayerController_Element.h"
#include "Rewired_PlayerController.h"
namespace Rewired_Core::Rewired { struct PlayerController; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct PlayerController_ElementWithSource_Definition; };
namespace mscorlib::System { struct String; };

namespace Rewired_Core::Rewired
{
	struct PlayerController_ElementWithSource : Rewired_Core::Rewired::PlayerController_Element
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t ROFCtmcpCRLeRZJWhnIzrDqdUrm;
		struct StaticFields
		{
			int32_t defaultActionId;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Rewired_Core::Rewired::PlayerController* parent, Rewired_Core::Rewired::PlayerController_ElementWithSource_Definition* definition);
		int32_t get_actionId();
		void set_actionId(int32_t value);
		mscorlib::System::String* get_actionName();
		void set_actionName(mscorlib::System::String* value);
	};
}

