#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "NETWORK.h"
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct PlayerProfile : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* PlayerName;
			mscorlib::System::String* id;
			mscorlib::System::String* authkey;
			mscorlib::System::String* session;
			mscorlib::System::String* gameSession;
			int32_t country;
			mscorlib::System::String* countrySTR;
			bool dailyPost;
			bool socialQuest;
			bool NL;
			uint8_t loh;
			bool NY2017Q;
			bool NY2018Q;
			bool VD2017Q;
			int32_t currentMission;
			mscorlib::System::String* screenShotURL;
			mscorlib::System::String* myInventory;
			bool load_player;
			bool get_bonuses;
			bool get_player_stats;
			int32_t money;
			int32_t moneypay;
			int32_t premium;
			int32_t exp;
			int32_t level;
			int32_t skin;
			int32_t ha1;
			int32_t ha2;
			int32_t ha3;
			Assembly_CSharp::NETWORK network;
			mscorlib::System::String* friends;
			mscorlib::System::String* friendServers;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::String>* friendsOnline;
			IL2CPP::Array<mscorlib::System::String*>* friendsOnlineServers;
			IL2CPP::Array<mscorlib::System::String*>* friendsRating;
			int32_t myindex;
			int32_t myteam;
			int32_t isAnimal;
			int32_t jetpackFuel;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, UnityEngine_CoreModule::UnityEngine::Texture2D>* crossList;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, UnityEngine_CoreModule::UnityEngine::Texture2D>* crossDot;
			UnityEngine_CoreModule::UnityEngine::Color crossColor;
			int32_t currency;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static void _cctor();
	};
}

