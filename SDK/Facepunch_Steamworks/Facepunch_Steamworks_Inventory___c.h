#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Facepunch_Steamworks_Inventory.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Inventory; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Inventory_Item; };
namespace mscorlib::System { template <typename T1, typename T2, typename TResult> struct Func_3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct Inventory___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Facepunch_Steamworks::Facepunch::Steamworks::Inventory___c* __9;
			mscorlib::System::Func_3<Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Item, Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Item, Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Item>* __9__24_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Item* _ApplyResult_b__24_0(Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Item* oldItem, Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Item* newItem);
	};
}

