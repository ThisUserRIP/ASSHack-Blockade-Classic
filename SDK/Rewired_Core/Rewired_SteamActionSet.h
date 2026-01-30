#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace Rewired_Core::Rewired { struct SteamAction; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired
{
	struct SteamActionSet : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* name;
		uint64_t handle;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Rewired_Core::Rewired::SteamAction>* actions;
		void _ctor(mscorlib::System::String* name, uint64_t handle);
		void AddAction(Rewired_Core::Rewired::SteamAction* action);
	};
}

