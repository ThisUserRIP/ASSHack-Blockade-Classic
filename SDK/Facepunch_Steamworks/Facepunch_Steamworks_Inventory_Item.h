#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Facepunch_Steamworks_Inventory.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Inventory; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Inventory_Definition; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "SteamNative_SteamInventoryUpdateHandle_t.h"
namespace Facepunch_Steamworks::SteamNative { struct SteamInventoryUpdateHandle_t; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct Inventory_Item : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint64_t Id;
		int32_t Quantity;
		int32_t DefinitionId;
		Facepunch_Steamworks::Facepunch::Steamworks::Inventory* Inventory;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::String>* _Properties_k__BackingField;
		Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Definition* _cachedDefinition;
		bool TradeLocked;
		Facepunch_Steamworks::SteamNative::SteamInventoryUpdateHandle_t updateHandle;
		void _ctor(Facepunch_Steamworks::Facepunch::Steamworks::Inventory* Inventory, uint64_t Id, int32_t Quantity, int32_t DefinitionId);
		void set_Properties(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::String>* value);
		bool Equals(Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Item* other);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		static bool op_Equality(Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Item* left, Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Item* right);
	};
	bool operator==(Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Item& left, Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Item& right);
}

