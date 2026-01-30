#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Kartridge::Kongregate { struct KartridgeBindings_ItemInstance; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };

namespace Assembly_CSharp
{
	struct KartridgeHandler : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* KRLang;
			bool inited;
			int32_t tmpItem;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Start();
		static bool Init();
		static void onCallback(mscorlib::System::String* _event, mscorlib::System::String* _evp);
		static void BuyItem(int32_t ItemID);
		static void OnBuyItem(bool status, Kartridge::Kongregate::KartridgeBindings_ItemInstance* item);
		static bool CheckInit();
		static mscorlib::System::String* GetUserName();
		static void GetUser();
		static void GetAuthTicket();
		static void GetUserAvatar(uint64_t _steamID);
		static bool GetFriends();
		void OnDestroy();
		static void CloseConnection();
		void Update();
		void _ctor();
		static void _cctor();
	};
}

