#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Facepunch_Steamworks::SteamNative { struct Platform_Interface; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct BaseSteamworks; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "SteamNative_SteamInventoryResult_t.h"
namespace Facepunch_Steamworks::SteamNative { struct SteamInventoryResult_t; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "SteamNative_SteamItemDef_t.h"
namespace Facepunch_Steamworks::SteamNative { struct SteamItemDef_t; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct UInt64; };
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "SteamNative_SteamItemDetails_t.h"
namespace Facepunch_Steamworks::SteamNative { struct SteamItemDetails_t; };
#include "SteamNative_Result.h"
namespace Facepunch_Steamworks::SteamNative { struct CallbackHandle; };
#include "SteamNative_SteamInventoryRequestPricesResult_t.h"
namespace Facepunch_Steamworks::SteamNative { struct SteamInventoryRequestPricesResult_t; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };

namespace Facepunch_Steamworks::SteamNative
{
	struct SteamInventory : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::SteamNative::Platform_Interface* platform;
		Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks;
		void _ctor(Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks, intptr_t pointer);
		void Dispose();
		void DestroyResult(Facepunch_Steamworks::SteamNative::SteamInventoryResult_t resultHandle);
		bool GetAllItems(Facepunch_Steamworks::SteamNative::SteamInventoryResult_t& pResultHandle);
		IL2CPP::Array<Facepunch_Steamworks::SteamNative::SteamItemDef_t>* GetItemDefinitionIDs();
		bool GetItemDefinitionProperty(Facepunch_Steamworks::SteamNative::SteamItemDef_t iDefinition, mscorlib::System::String* pchPropertyName, mscorlib::System::String& pchValueBuffer);
		bool GetItemPrice(Facepunch_Steamworks::SteamNative::SteamItemDef_t iDefinition, uint64_t& pPrice);
		bool GetResultItemProperty(Facepunch_Steamworks::SteamNative::SteamInventoryResult_t resultHandle, uint32_t unItemIndex, mscorlib::System::String* pchPropertyName, mscorlib::System::String& pchValueBuffer);
		IL2CPP::Array<Facepunch_Steamworks::SteamNative::SteamItemDetails_t>* GetResultItems(Facepunch_Steamworks::SteamNative::SteamInventoryResult_t resultHandle);
		Facepunch_Steamworks::SteamNative::Result GetResultStatus(Facepunch_Steamworks::SteamNative::SteamInventoryResult_t resultHandle);
		uint32_t GetResultTimestamp(Facepunch_Steamworks::SteamNative::SteamInventoryResult_t resultHandle);
		bool LoadItemDefinitions();
		Facepunch_Steamworks::SteamNative::CallbackHandle* RequestPrices(mscorlib::System::Action_2<Facepunch_Steamworks::SteamNative::SteamInventoryRequestPricesResult_t, mscorlib::System::Boolean>* CallbackFunction);
		bool SerializeResult(Facepunch_Steamworks::SteamNative::SteamInventoryResult_t resultHandle, intptr_t pOutBuffer, uint32_t& punOutBufferSize);
	};
}

