#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Data_Player_Editor.h"
namespace Rewired_Core::Rewired::Data { struct Player_Editor; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core { struct buwlxqKhUllBBlfaFHEuNozwGtg; };
namespace mscorlib::System { struct Object; };

namespace Rewired_Core::Rewired::Data
{
	struct Player_Editor_RuleSetMapping : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _enabled;
		int32_t _id;
		int32_t get_id();
		void set_id(int32_t value);
		bool get_enabled();
		void set_enabled(bool value);
		void _ctor();
		void _ctor(Rewired_Core::Rewired::Data::Player_Editor_RuleSetMapping* source);
		void _ctor(bool enabled, int32_t id);
		void Clear();
		Rewired_Core::Rewired::Data::Player_Editor_RuleSetMapping* Clone();
		Rewired_Core::buwlxqKhUllBBlfaFHEuNozwGtg* CPFqqWYiFeqjXapgrSdrrALQEHQ();
		mscorlib::System::Object* Rewired_Utils_Interfaces_IDeepCloneable_DeepClone();
	};
}

