#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Facepunch_Steamworks_Inventory_Recipe.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Inventory_Recipe; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Inventory_Definition; };
namespace mscorlib::System { struct String; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct Inventory_Recipe_Ingredient
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t DefinitionId;
		Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Definition* Definition;
		int32_t Count;
		static Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Recipe_Ingredient FromString(mscorlib::System::String* part, IL2CPP::Array<Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Definition*>* definitions);
	};
}

