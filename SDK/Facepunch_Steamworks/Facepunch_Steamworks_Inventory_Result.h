#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Facepunch_Steamworks_Inventory.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Inventory; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "SteamNative_SteamInventoryResult_t.h"
namespace Facepunch_Steamworks::SteamNative { struct SteamInventoryResult_t; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Inventory_Item; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Facepunch_Steamworks_Callbacks_Result.h"
#include "SteamNative_SteamInventoryResultReady_t.h"
namespace Facepunch_Steamworks::SteamNative { struct SteamInventoryResultReady_t; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct Inventory_Result : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::Facepunch::Steamworks::Inventory* inventory;
		Facepunch_Steamworks::SteamNative::SteamInventoryResult_t _Handle_k__BackingField;
		mscorlib::System::Action_1<Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Result>* OnResult;
		IL2CPP::Array<Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Item*>* _Items_k__BackingField;
		IL2CPP::Array<Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Item*>* _Removed_k__BackingField;
		IL2CPP::Array<Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Item*>* _Consumed_k__BackingField;
		bool _gotResult;
		uint32_t _Timestamp_k__BackingField;
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Result>* Pending;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		Facepunch_Steamworks::SteamNative::SteamInventoryResult_t get_Handle();
		void set_Handle(Facepunch_Steamworks::SteamNative::SteamInventoryResult_t value);
		IL2CPP::Array<Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Item*>* get_Items();
		void set_Items(IL2CPP::Array<Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Item*>* value);
		IL2CPP::Array<Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Item*>* get_Removed();
		void set_Removed(IL2CPP::Array<Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Item*>* value);
		IL2CPP::Array<Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Item*>* get_Consumed();
		void set_Consumed(IL2CPP::Array<Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Item*>* value);
		uint32_t get_Timestamp();
		void set_Timestamp(uint32_t value);
		bool get_IsSuccess();
		Facepunch_Steamworks::Facepunch::Steamworks::Callbacks::Result Status();
		void _ctor(Facepunch_Steamworks::Facepunch::Steamworks::Inventory* inventory, int32_t Handle, bool pending);
		void Fill();
		void OnSteamResult(Facepunch_Steamworks::SteamNative::SteamInventoryResultReady_t data);
		IL2CPP::Array<uint8_t>* Serialize();
		void Dispose();
	};
}

