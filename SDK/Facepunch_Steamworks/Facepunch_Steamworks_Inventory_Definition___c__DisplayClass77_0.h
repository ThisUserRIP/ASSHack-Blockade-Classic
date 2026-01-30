#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Facepunch_Steamworks_Inventory_Definition.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Inventory_Definition; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Facepunch_Steamworks_Inventory_Recipe.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Inventory_Recipe; };
namespace mscorlib::System { struct String; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct Inventory_Definition___c__DisplayClass77_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Definition*>* definitions;
		Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Definition* __4__this;
		void _ctor();
		Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Recipe _LinkExchange_b__0(mscorlib::System::String* x);
	};
}

